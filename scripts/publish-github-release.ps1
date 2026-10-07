[CmdletBinding(SupportsShouldProcess = $true, ConfirmImpact = "Medium")]
param(
    [string]$Repository = "wangweiwei104/SeiSee",
    [switch]$CreateDraft,
    [switch]$Publish
)

$ErrorActionPreference = "Stop"
if ($CreateDraft -and $Publish) {
    throw "Use either -CreateDraft or -Publish, not both."
}

$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path
$versionHeader = Join-Path $repoRoot "SeiSeeMp\mainwindow.h"
$changelogPath = Join-Path $repoRoot "CHANGELOG.md"
$distPath = Join-Path $repoRoot "dist"

foreach ($requiredFile in @($versionHeader, $changelogPath)) {
    if (-not (Test-Path -LiteralPath $requiredFile -PathType Leaf)) {
        throw "Required file not found: $requiredFile"
    }
}
if (-not (Test-Path -LiteralPath $distPath -PathType Container)) {
    throw "Distribution directory not found: $distPath"
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

$assets = @(
    Get-ChildItem -LiteralPath $distPath -File -Recurse |
        Where-Object { $_.BaseName.IndexOf($version, [StringComparison]::OrdinalIgnoreCase) -ge 0 } |
        Sort-Object FullName
)
if ($assets.Count -eq 0) {
    throw "No files in dist match version $version. Build the release assets before creating a release."
}
$assetPaths = @($assets | ForEach-Object { $_.FullName })

Write-Output "Release: $Repository`:$version"
Write-Output "Assets matching ${version}:"
$assets | ForEach-Object { Write-Output "  $($_.FullName)" }
Write-Output ""
Write-Output "Release notes to review:"
Write-Output $releaseNotes

if (-not ($CreateDraft -or $Publish)) {
    Write-Output ""
    Write-Output "Preview only. Review CHANGELOG.md, then run this script with -CreateDraft to create a draft or -Publish to publish the release immediately."
    return
}

$releaseAction = if ($CreateDraft) { "Create a draft release" } else { "Publish a release" }
if ($PSCmdlet.ShouldProcess("$Repository release $version", "$releaseAction and upload $($assets.Count) version-matched asset(s)")) {
    $gh = Get-Command gh -ErrorAction SilentlyContinue
    if ($null -eq $gh) {
        throw "GitHub CLI (gh) was not found. Install it and run 'gh auth login' before creating a release."
    }

    & $gh.Source auth status --hostname github.com
    if ($LASTEXITCODE -ne 0) {
        throw "GitHub CLI authentication failed. Run 'gh auth login' and try again."
    }

    $notesPath = Join-Path ([IO.Path]::GetTempPath()) ("SeiSee-release-notes-" + [guid]::NewGuid() + ".md")
    try {
        Set-Content -LiteralPath $notesPath -Value $releaseNotes -Encoding UTF8
        $ghArguments = @(
            "release", "create", $version,
            "--repo", $Repository,
            "--title", "SeiSee $version",
            "--notes-file", $notesPath
        )
        if ($CreateDraft) {
            $ghArguments += "--draft"
        }
        if ($version -match '-(alpha|beta|rc)(\.|$)') {
            $ghArguments += "--prerelease"
        }
        $ghArguments += $assetPaths

        & $gh.Source @ghArguments
        if ($LASTEXITCODE -ne 0) {
            $releaseType = if ($CreateDraft) { "draft" } else { "published" }
            throw "GitHub CLI failed to create the $releaseType release (exit code $LASTEXITCODE)."
        }
        if ($CreateDraft) {
            Write-Output "Draft release created. Review it on GitHub and publish it when ready."
        } else {
            Write-Output "Release published."
        }
    } finally {
        if (Test-Path -LiteralPath $notesPath) {
            Remove-Item -LiteralPath $notesPath -Force
        }
    }
}
