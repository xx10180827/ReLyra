param(
    [string]$EngineRoot,
    [switch]$UIFixture,
    [switch]$UseFixture,
    [ValidateRange(1024, 65535)]
    [int]$Port = 17777,
    [ValidateRange(60, 900)]
    [int]$TimeoutSeconds = 360
)

$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$projectFile = Join-Path $projectRoot 'Lyra.uproject'
if (-not $EngineRoot) {
    $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory
}
$editorExecutable = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe'
foreach ($requiredPath in @($editorExecutable,
    (Join-Path $projectRoot 'Binaries/Win64/UnrealEditor-LyraGame.dll'),
    (Join-Path $projectRoot 'Content/InventorySystem/Maps/L_InventoryMultiplayer.umap'))) {
    if (-not (Test-Path -LiteralPath $requiredPath -PathType Leaf)) {
        throw "Required file is missing: $requiredPath. Build LyraEditor first."
    }
}
if (Get-NetUDPEndpoint -LocalPort $Port -ErrorAction SilentlyContinue) {
    throw "UDP $Port is already in use. Close the previous test windows or choose another -Port."
}

Add-Type -AssemblyName System.Windows.Forms
$screen = [System.Windows.Forms.Screen]::PrimaryScreen.WorkingArea
$width = [int][Math]::Max(640, [Math]::Min(1100, [Math]::Floor(($screen.Width - 60) / 2)))
$height = [int][Math]::Min(720, $screen.Height - 120)
$hostX = $screen.Left + 10
$clientX = $hostX + $width + 20
$windowY = $screen.Top + 40
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/Acceptance/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$hostLog = Join-Path $runDirectory 'Host.log'
$clientLog = Join-Path $runDirectory 'Client.log'
$hostProcess = $null
$clientProcess = $null
$deadline = (Get-Date).AddSeconds($TimeoutSeconds)
$commonArguments = @(
    ('"' + $projectFile + '"'), '-game', '-windowed', '-ForceRes', "-ResX=$width", "-ResY=$height",
    "-WinY=$windowY", '-NoLiveCoding', '-nosplash', '-nop4', '-unattended', '-forcelogflush',
    '-gauntlet=LyraInventoryNetworkTest', '-InventoryTestInteractive',
    '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null',
    '-ExecCmds="t.MaxFPS 45,sg.ViewDistanceQuality 1,sg.ShadowQuality 1,sg.PostProcessQuality 1,sg.EffectsQuality 1"'
)

if ($UIFixture) { $commonArguments += '-InventoryUIFixture' }
if ($UseFixture) { $commonArguments += '-InventoryUseFixture' }

function Read-AcceptanceLog([string]$Path) {
    if (Test-Path -LiteralPath $Path) { return [string](Get-Content -LiteralPath $Path -Raw) }
    return ''
}

try {
    # Visible windows are intentional: this launcher is for interactive user acceptance.
    $hostProcess = Start-Process -FilePath $editorExecutable -WorkingDirectory $projectRoot -WindowStyle Normal -PassThru `
        -ArgumentList ($commonArguments + @('/Game/InventorySystem/Maps/L_InventoryMultiplayer?listen?Name=InventoryHost',
            "-port=$Port", "-WinX=$hostX", '-InventoryTestRole=Host', ('-abslog="' + $hostLog + '"')))
    Write-Output "Starting HOST on the left (PID $($hostProcess.Id)). Waiting for UDP $Port..."
    while ((Read-AcceptanceLog $hostLog) -notmatch "listening on port $Port\b") {
        if ($hostProcess.HasExited) { throw "Host exited before listening (exit $($hostProcess.ExitCode)). See $hostLog" }
        if ((Get-Date) -gt $deadline) { throw "Host startup timeout. See $hostLog" }
        Start-Sleep -Milliseconds 500
    }
    $clientProcess = Start-Process -FilePath $editorExecutable -WorkingDirectory $projectRoot -WindowStyle Normal -PassThru `
        -ArgumentList ($commonArguments + @("127.0.0.1:$Port`?Name=InventoryClient", "-WinX=$clientX",
            '-InventoryTestRole=Client', ('-abslog="' + $clientLog + '"')))
    Write-Output "Starting CLIENT on the right (PID $($clientProcess.Id)). Waiting for both players to initialize."
    while ($true) {
        $hostReady = (Read-AcceptanceLog $hostLog) -match 'INVENTORY_NET_TEST PASS role=Host players=2 characters=2 controllers=2'
        $clientReady = (Read-AcceptanceLog $clientLog) -match 'INVENTORY_NET_TEST PASS role=Client players=2 characters=2 controllers=1'
        if ($hostProcess.HasExited -or $clientProcess.HasExited) { throw "A game window exited before checks finished. See $runDirectory" }
        if ($hostReady -and $clientReady) { break }
        if ((Get-Date) -gt $deadline) { throw "Network initialization timed out. See $runDirectory" }
        Start-Sleep -Milliseconds 500
    }
    [ordered]@{
        readyForUserAcceptance = $true
        userAccepted = $false
        hostProcessId = $hostProcess.Id
        clientProcessId = $clientProcess.Id
        hostPassed = $hostReady
        clientPassed = $clientReady
        movementChecked = $false
        inventoryUIFixture = [bool]$UIFixture
        inventoryUseFixture = [bool]$UseFixture
        rendering = $true
        port = $Port
        hostLog = $hostLog
        clientLog = $clientLog
    } | ConvertTo-Json | Set-Content -LiteralPath (Join-Path $runDirectory 'LaunchResult.json') -Encoding utf8
    Write-Output "READY FOR YOUR ACCEPTANCE. Both game windows stay open. Reports: $runDirectory"
    Write-Output 'Click one game window to control it: WASD move, mouse look, Space jump. Alt+Tab switches windows.'
    Write-Output 'Check that each window sees the other player move. Close CLIENT first, then HOST with Alt+F4.'
    Write-Output 'I opens the inventory. Approach and look at a station item, then press E to pick up. Both players share these finite world items.'
    Write-Output 'The rifle-ammo station contains 1250 rounds to check partial pickup and full inventory; remaining items stay on the ground.'
    if ($UseFixture) {
        Write-Output 'USE ACCEPTANCE: each player starts at 50 health with 3 medkits, 80 rifle rounds, 5 shells, a 5/19 rifle and a 0/7 shotgun.'
        Write-Output 'Press I, equip the matching gun and select a supply, then click Use. Supplies are granted once for this explicit test launch only.'
    }
    if ($UIFixture) {
        Write-Output 'Inventory UI: press I to open/close. Each player starts with one pistol and 13 test supplies (10 + 3).'
        Write-Output 'Drag to move/swap/merge. Shift+drag selects a quantity. Esc cancels the quantity dialog or closes the inventory.'
    }
}
catch {
    [ordered]@{
        readyForUserAcceptance = $false
        userAccepted = $false
        error = $_.Exception.Message
        hostExitCode = $(if ($hostProcess -and $hostProcess.HasExited) { $hostProcess.ExitCode } else { $null })
        clientExitCode = $(if ($clientProcess -and $clientProcess.HasExited) { $clientProcess.ExitCode } else { $null })
    } |
        ConvertTo-Json | Set-Content -LiteralPath (Join-Path $runDirectory 'LaunchResult.json') -Encoding utf8
    # On startup failure, clean up only processes created by this invocation.
    foreach ($testProcess in @($clientProcess, $hostProcess)) {
        if ($null -ne $testProcess -and -not $testProcess.HasExited) {
            Stop-Process -InputObject $testProcess -Force -ErrorAction SilentlyContinue
        }
    }
    throw
}
