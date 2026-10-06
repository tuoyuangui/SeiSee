# Update these defaults if your Qt, MinGW, or Inno Setup installation uses
# different directories. The values can also be overridden with command-line
# parameters when running the script.
param(
    [string]$QtBin = "C:\Qt\5.15.2\mingw81_64\bin",
    [string]$MinGWBin = "C:\Qt\Tools\mingw810_64\bin",
    [string]$InnoSetupCompiler = "C:\Program Files (x86)\Inno Setup 6\ISCC.exe",
    [string]$Version = "3.0-alpha.37",
    [int]$Jobs = [Environment]::ProcessorCount
)

$ErrorActionPreference = "Stop"
$repoRoot = (Resolve-Path (Join-Path $PSScriptRoot "..")).Path

$qmake = Join-Path $QtBin "qmake.exe"
$windeployqt = Join-Path $QtBin "windeployqt.exe"
$make = Join-Path $MinGWBin "mingw32-make.exe"
foreach ($tool in @($qmake, $windeployqt, $make, $InnoSetupCompiler)) {
    if (-not (Test-Path -LiteralPath $tool -PathType Leaf)) {
        throw "Required packaging tool not found: $tool"
    }
}
if ($Version -notmatch '^[A-Za-z0-9][A-Za-z0-9 ._-]*$') {
    throw 'Version may contain only letters, numbers, spaces, dots, underscores, and hyphens.'
}

$safeVersion = $Version -replace '[^A-Za-z0-9._-]', '-'
$tempRoot = Join-Path ([IO.Path]::GetTempPath()) ("SeiSee-package-" + [guid]::NewGuid())
$stageDir = Join-Path $tempRoot "app"
$outputDir = Join-Path $repoRoot "dist\windows"
$outputName = "SeiSee-$safeVersion-Setup"
$issPath = Join-Path $tempRoot "SeiSee.iss"
$exePath = Join-Path $repoRoot "SeiSeeMp\release\SeiSeeMp.exe"
$iconPath = Join-Path $repoRoot "SeiSeeMp\images\SeiSeeSetup.ico"

New-Item -ItemType Directory -Path $stageDir, $outputDir -Force | Out-Null
try {
    $env:PATH = "$QtBin;$MinGWBin;$env:PATH"
    Push-Location $repoRoot
    try {
        & $qmake "GxApps.pro" "-r" "CONFIG+=release"
        if ($LASTEXITCODE -ne 0) {
            throw "qmake failed with exit code $LASTEXITCODE"
        }
        & $make "-j$Jobs"
        if ($LASTEXITCODE -ne 0) {
            throw "Build failed with exit code $LASTEXITCODE"
        }
    } finally {
        Pop-Location
    }

    if (-not (Test-Path -LiteralPath $exePath -PathType Leaf)) {
        throw "Expected release executable not found: $exePath"
    }
    if (-not (Test-Path -LiteralPath $iconPath -PathType Leaf)) {
        throw "Installer icon not found: $iconPath"
    }

    Copy-Item -LiteralPath $exePath -Destination $stageDir
    Push-Location $stageDir
    try {
        & $windeployqt "SeiSeeMp.exe"
        if ($LASTEXITCODE -ne 0) {
            throw "windeployqt failed with exit code $LASTEXITCODE"
        }
    } finally {
        Pop-Location
    }
    Copy-Item -LiteralPath (Join-Path $repoRoot "README.md") -Destination $stageDir

    $iss = @"
[Setup]
AppId={{4F15CB68-BEB3-4C36-9E98-61F9BCAC8125}
AppName=SeiSee
AppVersion=$Version
DefaultDirName={autopf}\SeiSee
DisableDirPage=no
DefaultGroupName=SeiSee
DisableProgramGroupPage=yes
PrivilegesRequired=admin
ArchitecturesAllowed=x64compatible
ArchitecturesInstallIn64BitMode=x64compatible
OutputDir=$outputDir
OutputBaseFilename=$outputName
SetupIconFile=$iconPath
UninstallDisplayIcon={app}\SeiSeeMp.exe
Compression=lzma2
SolidCompression=yes
WizardStyle=modern

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "Create a desktop shortcut"; GroupDescription: "Additional icons:"

[Files]
Source: "$stageDir\*"; DestDir: "{app}"; Flags: ignoreversion recursesubdirs createallsubdirs

[Icons]
Name: "{autoprograms}\SeiSee"; Filename: "{app}\SeiSeeMp.exe"; AppUserModelID: "wangweiwei104.SeiSee.SeiSeeMp"
Name: "{autodesktop}\SeiSee"; Filename: "{app}\SeiSeeMp.exe"; Tasks: desktopicon; AppUserModelID: "wangweiwei104.SeiSee.SeiSeeMp"

[Run]
Filename: "{app}\SeiSeeMp.exe"; Description: "Launch SeiSee"; Flags: postinstall nowait skipifsilent
"@
    Set-Content -LiteralPath $issPath -Value $iss -Encoding Ascii

    & $InnoSetupCompiler "/O$outputDir" "/F$outputName" $issPath
    if ($LASTEXITCODE -ne 0) {
        throw "Inno Setup compilation failed with exit code $LASTEXITCODE"
    }

    Write-Output "Created installer: $(Join-Path $outputDir "$outputName.exe")"
} finally {
    if (Test-Path -LiteralPath $tempRoot) {
        Remove-Item -LiteralPath $tempRoot -Recurse -Force
    }
}
