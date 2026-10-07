[CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Medium")]
param(
    [string]$Repository = "wangweiwei104/SeiSee",
    [switch]$Publish
)

$ErrorActionPreference = "Stop"

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$versionHeader = Join-Path $repoRoot "SeiSeeMp/mainwindow.h"
$changelogPath = Join-Path $repoRoot "CHANGELOG.md"

foreach ($requiredFile in @($versionHeader, $changelogPath)) {
    if (-not (Test-Path -LiteralPath $requiredFile -PathType Leaf)) {
        throw "Required file not found: $requiredFile"
    }
}

$headerContent = [IO.File]::ReadAllText($versionHeader)
$versionDefinitions = [regex]::Matches(
    $headerContent,
    '(?m)^[ \t]*#[ \t]*define[ \t]+VERSION[ \t]+"([^"]+)"[ \t\r]*$'
)
if ($versionDefinitions.Count -ne 1) {
    throw "Expected exactly one #define VERSION `"value`" in $versionHeader; found $($versionDefinitions.Count)."
}
$version = $versionDefinitions[0].Groups[1].Value
if ($version -notmatch '^[A-Za-z0-9][A-Za-z0-9.+-]*$') {
    throw "Version contains characters that cannot safely be used as a GitHub release tag: $version"
}

$changelog = [IO.File]::ReadAllText($changelogPath, [Text.Encoding]::UTF8)
$changelogLines = $changelog -split '\r?\n'
$expectedHeading = '^## \[' + [regex]::Escape($version) + '\](?:\s+-\s+.*)?$'
$headingIndexes = @(
    for ($index = 0; $index -lt $changelogLines.Count; $index++) {
        if ($changelogLines[$index] -match $expectedHeading) {
            $index
        }
    }
)
if ($headingIndexes.Count -ne 1) {
    throw "Expected exactly one CHANGELOG.md section for version $version."
}

$sectionStart = $headingIndexes[0]
$sectionEnd = $changelogLines.Count
for ($index = $sectionStart + 1; $index -lt $changelogLines.Count; $index++) {
    if ($changelogLines[$index] -match '^## \[') {
        $sectionEnd = $index
        break
    }
}
$releaseNotes = ($changelogLines[($sectionStart + 1)..($sectionEnd - 1)] -join [Environment]::NewLine).Trim()
if ([string]::IsNullOrWhiteSpace($releaseNotes)) {
    throw "CHANGELOG.md section for version $version is empty."
}

$assetPath = Join-Path $repoRoot "dist/linux/SeiSee-$version-x86_64.AppImage"
if (-not (Test-Path -LiteralPath $assetPath -PathType Leaf)) {
    throw "Linux AppImage not found: $assetPath. Build the package before publishing."
}

Write-Output "Release: $Repository`:$version"
Write-Output "Linux asset: $assetPath"
Write-Output "Behavior: append/replace this Linux asset on an existing release without changing its notes or other assets; otherwise create a release using CHANGELOG.md."

if (-not $Publish) {
    Write-Output ""
    Write-Output "Preview only. Run this script with -Publish to upload the Linux AppImage."
    return
}

$gh = Get-Command gh -ErrorAction SilentlyContinue
if ($null -eq $gh) {
    throw "GitHub CLI (gh) was not found. Install it and run 'gh auth login' before publishing."
}

& $gh.Source auth status --hostname github.com
if ($LASTEXITCODE -ne 0) {
    throw "GitHub CLI authentication failed. Run 'gh auth login' and try again."
}

$apiVersion = [Uri]::EscapeDataString($version)
$releaseEndpoint = "repos/$Repository/releases/tags/$apiVersion"
$releaseResponse = @(& $gh.Source api $releaseEndpoint 2>&1)
$releaseLookupExitCode = $LASTEXITCODE
$releaseExists = $releaseLookupExitCode -eq 0
$releaseInfo = $null
if (-not $releaseExists) {
    $releaseLookupError = $releaseResponse -join [Environment]::NewLine
    if ($releaseLookupError -notmatch '(?i)\bHTTP 404\b|Not Found') {
        throw "Could not check whether release $version exists: $releaseLookupError"
    }
} else {
    $releaseJson = $releaseResponse -join [Environment]::NewLine
    try {
        $releaseInfo = $releaseJson | ConvertFrom-Json
    } catch {
        throw "Could not parse the GitHub release information for $version`: $_"
    }
    if ($releaseInfo.tag_name -ne $version) {
        throw "GitHub returned release tag '$($releaseInfo.tag_name)' while checking for $version."
    }
}

$action = if ($releaseExists) {
    "Upload/replace the Linux AppImage on the existing release (preserve release notes and other assets)"
} else {
    "Create the release from CHANGELOG.md and upload the Linux AppImage"
}
if (-not $PSCmdlet.ShouldProcess("$Repository release $version", $action)) {
    return
}

if ($releaseExists) {
    & $gh.Source release upload $version $assetPath --repo $Repository --clobber
    if ($LASTEXITCODE -ne 0) {
        throw "GitHub CLI failed to upload the Linux AppImage (exit code $LASTEXITCODE)."
    }
    if ($releaseInfo.draft) {
        Write-Output "Linux AppImage uploaded to the existing draft release. Its draft status, notes, and other assets were preserved."
    } else {
        Write-Output "Linux AppImage uploaded to the existing release. Its published status, notes, and other assets were preserved."
    }
    return
}

$notesPath = Join-Path ([IO.Path]::GetTempPath()) ("SeiSee-linux-release-notes-" + [guid]::NewGuid() + ".md")
try {
    Set-Content -LiteralPath $notesPath -Value $releaseNotes -Encoding UTF8
    $ghArguments = @(
        "release", "create", $version,
        "--repo", $Repository,
        "--title", "SeiSee $version",
        "--notes-file", $notesPath
    )
    if ($version -match '-(alpha|beta|rc)(\.|$)') {
        $ghArguments += "--prerelease"
    }
    $ghArguments += $assetPath

    & $gh.Source @ghArguments
    if ($LASTEXITCODE -ne 0) {
        throw "GitHub CLI failed to create release $version and upload the Linux AppImage (exit code $LASTEXITCODE)."
    }
    Write-Output "Release $version created from CHANGELOG.md with the Linux AppImage."
} finally {
    if (Test-Path -LiteralPath $notesPath) {
        Remove-Item -LiteralPath $notesPath -Force
    }
}
