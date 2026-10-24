param([string]$EngineRoot, [switch]$Iterative)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$runId = Get-Date -Format 'yyyyMMdd-HHmmss-fff'
$reportDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/T20/' + $runId)
$archiveDirectory = Join-Path $projectRoot ('package/' + $runId)
New-Item -ItemType Directory -Path $reportDirectory,$archiveDirectory -Force | Out-Null
$buildArguments = @('BuildCookRun','-nop4',('-project=' + (Join-Path $projectRoot 'Lyra.uproject')),
    '-target=LyraGame','-targetplatform=Win64','-clientconfig=Development','-build','-cook','-stage',
    '-pak','-iostore','-package','-archive',('-archivedirectory=' + $archiveDirectory),
    '-compressed','-prereqs','-nodebuginfo','-nocompileeditor','-utf8output','-unattended',
    '-map=/Game/System/FrontEnd/Maps/L_LyraFrontEnd+/Game/InventorySystem/Maps/L_InventoryMultiplayer+/ShooterMaps/Maps/L_Expanse+/ShooterMaps/Maps/L_Convolution_Blockout+/TopDownArena/Maps/L_TopDownArenaGym+/TopDownArena/Maps/L_TopDown_LocalMultiplayer')
if ($Iterative) { $buildArguments += '-iterate' }
$buildArguments | ConvertTo-Json | Set-Content (Join-Path $reportDirectory 'Arguments.json') -Encoding utf8
$workspaceStatus = @(git -C $projectRoot status --short)
$workspaceStatus | Set-Content (Join-Path $reportDirectory 'WorkspaceStatus.txt') -Encoding utf8
$baseCommit = git -C $projectRoot rev-parse HEAD
Write-Output "Build report: $reportDirectory"
Write-Output "Package output: $archiveDirectory"
& (Join-Path $EngineRoot 'Engine/Build/BatchFiles/RunUAT.bat') @buildArguments *> (Join-Path $reportDirectory 'BuildCookRun.log')
$buildExit = $LASTEXITCODE
[ordered]@{passed=($buildExit -eq 0);exitCode=$buildExit;baseCommit=$baseCommit;
    includesUncommittedChanges=($workspaceStatus.Count -gt 0);archiveDirectory=$archiveDirectory;userAccepted=$false} |
    ConvertTo-Json | Set-Content (Join-Path $reportDirectory 'Result.json') -Encoding utf8
if ($buildExit -ne 0) { throw "BuildCookRun failed ($buildExit). See $reportDirectory" }
$windowsDirectory = Join-Path $archiveDirectory 'Windows'
Copy-Item -LiteralPath (Join-Path $PSScriptRoot 'Package/Start-LAN.cmd'),(Join-Path $PSScriptRoot 'Package/Start-LAN-Diagnostics.cmd'),(Join-Path $PSScriptRoot 'Package/README-LAN.md'),(Join-Path $PSScriptRoot 'Package/Start-LAN-Hotspot-98.cmd'),(Join-Path $PSScriptRoot 'Package/Start-LAN-Hotspot-239.cmd'),(Join-Path $PSScriptRoot 'Package/README-Hotspot.md') -Destination $windowsDirectory
[ordered]@{buildId=$runId;sourceBaseCommit=$baseCommit;includesUncommittedChanges=($workspaceStatus.Count -gt 0);
    runtimeVerification='Pending';userAccepted=$false;reportDirectory=$reportDirectory} |
    ConvertTo-Json | Set-Content (Join-Path $windowsDirectory 'BuildInfo.json') -Encoding utf8
@("最新构建：$runId\Windows",'启动：该目录内 Start-LAN.cmd',
    '状态：构建成功，运行时复测尚未完成；具体结果见 BuildInfo.json 和项目任务文档。',
    "构建报告：$reportDirectory",'完整复制 Windows 文件夹到第二台电脑，不要只复制 exe。') |
    Set-Content (Join-Path $projectRoot 'package/最新包说明.txt') -Encoding utf8
Write-Output "BUILD SUCCESS: $windowsDirectory"
