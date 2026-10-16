param(
    [string]$EngineRoot,
    [switch]$Render,
    [switch]$InventoryRules,
    [switch]$InventorySnapshots,
    [switch]$InventoryOperations,
    [switch]$InventoryUI,
    [switch]$InventoryPickup,
    [switch]$InventoryDrop,
    [switch]$InventoryEquipment,
    [switch]$InventoryReload,
    [ValidateRange(1024, 65535)]
    [int]$Port = 17777,
    [ValidateRange(30, 900)]
    [int]$TimeoutSeconds = 360
)

$ErrorActionPreference = 'Stop'
if ($InventoryReload) { $InventoryEquipment = $true }
if ($InventoryEquipment) {
    if ($InventoryDrop -or $InventoryPickup -or $InventoryUI -or $InventoryOperations -or $InventorySnapshots -or $InventoryRules) { throw 'Run equipment scenarios separately.' }
    $Render = $true
}
if ($InventoryDrop) {
    if ($InventoryPickup -or $InventoryUI -or $InventoryOperations -or $InventorySnapshots -or $InventoryRules) { throw 'Run drop scenarios separately from other fixtures.' }
    $Render = $true
}
if ($InventoryPickup) {
    if ($InventoryUI -or $InventoryOperations -or $InventorySnapshots -or $InventoryRules) { throw 'Run pickup scenarios separately from inventory arrangement fixtures.' }
    $Render = $true
}
if ($InventoryUI) { $InventoryOperations = $true; $Render = $true }
if ($InventoryOperations) { $InventoryRules = $true; $InventorySnapshots = $true }
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
$projectFile = Join-Path $projectRoot 'Lyra.uproject'
if (-not $EngineRoot) {
    $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory
}
$editorExecutable = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor-Cmd.exe'
if (-not (Test-Path -LiteralPath $editorExecutable -PathType Leaf)) {
    throw 'UnrealEditor-Cmd.exe was not found. Supply the UE 5.4 directory with -EngineRoot.'
}
if (-not (Test-Path -LiteralPath (Join-Path $projectRoot 'Content/InventorySystem/Maps/L_InventoryMultiplayer.umap'))) {
    throw 'Generate the inventory scene with -run=LyraInventorySetup before running this test.'
}
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/NetworkSmoke/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$hostLog = Join-Path $runDirectory 'Host.log'
$clientLog = Join-Path $runDirectory 'Client.log'
$hostProcess = $null
$clientProcess = $null
$deadline = (Get-Date).AddSeconds($TimeoutSeconds)
$commonArguments = @(
    ('"' + $projectFile + '"'), '-game', '-unattended',
    '-nop4', '-nosplash', '-NoLiveCoding', '-forcelogflush',
    '-gauntlet=LyraInventoryNetworkTest', '-gauntlet.tickrate=0.0166667', '-InventoryTestMove',
    '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null'
)
if ($Render) {
    $commonArguments += @('-RenderOffscreen', '-windowed', '-ResX=960', '-ResY=640',
        ('-InventoryTestScreenshotDir="' + $runDirectory + '"'), '-ExecCmds="t.MaxFPS 45"')
} else {
    $commonArguments += @('-NullRHI', '-nosound')
}
if ($InventoryRules) { $commonArguments += '-InventoryTestRules' }
if ($InventorySnapshots) { $commonArguments += '-InventoryTestSnapshots' }
if ($InventoryOperations) { $commonArguments += '-InventoryTestOperations' }
if ($InventoryUI) { $commonArguments += '-InventoryTestUI' }
if ($InventoryPickup) { $commonArguments += '-InventoryTestPickup' }
if ($InventoryDrop) { $commonArguments += '-InventoryTestDrop' }
if ($InventoryEquipment) { $commonArguments += '-InventoryTestEquipment' }
if ($InventoryReload) { $commonArguments += '-InventoryTestReload' }

function Read-TestLog([string]$Path) {
    if (Test-Path -LiteralPath $Path) {
        return [string](Get-Content -LiteralPath $Path -Raw)
    }
    return ''
}

try {
    $hostArguments = $commonArguments + @(
        '/Game/InventorySystem/Maps/L_InventoryMultiplayer?listen?Name=InventoryHost',
        "-port=$Port", '-InventoryTestRole=Host', ('-abslog="' + $hostLog + '"')
    )
    $hostProcess = Start-Process -FilePath $editorExecutable -ArgumentList $hostArguments `
        -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    Write-Output "Host process: $($hostProcess.Id); waiting for UDP port $Port."
    while ((Read-TestLog $hostLog) -notmatch "listening on port $Port\b") {
        if ($hostProcess.HasExited) { throw "Host exited before listening. See $hostLog" }
        if ((Get-Date) -gt $deadline) { throw "Host startup timeout. See $hostLog" }
        Start-Sleep -Milliseconds 500
    }
    $clientArguments = $commonArguments + @(
        "127.0.0.1:$Port`?Name=InventoryClient", '-InventoryTestRole=Client', ('-abslog="' + $clientLog + '"')
    )
    $clientProcess = Start-Process -FilePath $editorExecutable -ArgumentList $clientArguments `
        -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    Write-Output "Client process: $($clientProcess.Id); running the two-process checks."
    while (-not ($hostProcess.HasExited -and $clientProcess.HasExited)) {
        if ((Get-Date) -gt $deadline) { throw "Network smoke test timed out. See $runDirectory" }
        Start-Sleep -Milliseconds 500
    }
    $hostProcess.WaitForExit()
    $clientProcess.WaitForExit()
    $hostPassed = (Read-TestLog $hostLog) -match 'INVENTORY_NET_TEST PASS role=Host players=2 characters=2 controllers=2[^\r\n]+movement=replicated'
    $clientPassed = (Read-TestLog $clientLog) -match 'INVENTORY_NET_TEST PASS role=Client players=2 characters=2 controllers=1[^\r\n]+movement=replicated'
    $hostErrorCount = [regex]::Matches((Read-TestLog $hostLog), '(?m)^.*\]\s*Log[^:\r\n]+:\s*(?:Error|Fatal):').Count
    $clientErrorCount = [regex]::Matches((Read-TestLog $clientLog), '(?m)^.*\]\s*Log[^:\r\n]+:\s*(?:Error|Fatal):').Count
    $clientData = [regex]::Matches((Read-TestLog $clientLog), 'INVENTORY_DATA role=Client (player=\d+ capacity=20 slot=\d+ entry=[A-Fa-f0-9-]+ count=\d+)')
    $inventoryDataMatched = $clientData.Count -gt 0
    foreach ($entry in $clientData) {
        $inventoryDataMatched = $inventoryDataMatched -and (Read-TestLog $hostLog).Contains('INVENTORY_DATA role=Host ' + $entry.Groups[1].Value)
    }
    $inventoryRulesPassed = (-not $InventoryRules) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_RULES PASS role=Host total=176') -and
        (Read-TestLog $clientLog).Contains('INVENTORY_RULES PASS role=Client total=176'))
    $snapshotData = [regex]::Matches((Read-TestLog $clientLog), 'INVENTORY_SNAPSHOT role=Client (player=\d+ entry=[A-Fa-f0-9-]+ magazine=5 reserve=19 count=1 quickbar=clear equipment=clear)')
    $inventorySnapshotsPassed = -not $InventorySnapshots
    if ($InventorySnapshots) {
        $inventorySnapshotsPassed = $snapshotData.Count -eq 1 -and (Read-TestLog $hostLog).Contains('INVENTORY_SNAPSHOT role=Host ' + $snapshotData[0].Groups[1].Value)
    }
    $operationData = [regex]::Matches((Read-TestLog $clientLog), 'INVENTORY_OPERATIONS role=Client (player=\d+ successes=7 rejected=3 total=176 slot1=10 slot2=empty slot3=6)')
    $inventoryOperationsPassed = -not $InventoryOperations
    if ($InventoryOperations) {
        $inventoryOperationsPassed = $operationData.Count -eq 1 -and (Read-TestLog $hostLog).Contains('INVENTORY_OPERATIONS role=Host ' + $operationData[0].Groups[1].Value)
    }
    $inventoryUIPassed = (-not $InventoryUI) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_UI PASS role=Host slots=20 owner=local refresh=matched reopen=passed listeners=cleared input=restored') -and
        (Read-TestLog $clientLog).Contains('INVENTORY_UI PASS role=Client slots=20 owner=local refresh=matched reopen=passed listeners=cleared input=restored'))
    $pickupSummary = 'stations=5 partial=3 remainder=10 full=denied stale=denied distance=denied replay=denied raceTotal=190'
    $inventoryPickupPassed = (-not $InventoryPickup) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_PICKUP PASS role=Host ' + $pickupSummary) -and
        (Read-TestLog $clientLog).Contains('INVENTORY_PICKUP PASS role=Client ' + $pickupSummary))
    $dropSummary = 'ui=confirmed bothDirections=passed ammoTotal=8 weapon=5/19 references=cleared nearbyShotguns=3 ownedShotguns=4'
    $inventoryDropPassed = (-not $InventoryDrop) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_DROP PASS role=Host ' + $dropSummary) -and
        (Read-TestLog $clientLog).Contains('INVENTORY_DROP PASS role=Client ' + $dropSummary))
    $equipmentSummary = 'ui=10 replace=passed remove=passed move=passed rifle=5/19 shotgun=0/7 remoteActor=visible replay=denied'
    $inventoryEquipmentPassed = (-not $InventoryEquipment) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_EQUIPMENT PASS role=Host ' + $equipmentSummary) -and
        (Read-TestLog $clientLog).Contains('INVENTORY_EQUIPMENT PASS role=Client ' + $equipmentSummary))
    $inventoryReloadPassed = (-not $InventoryReload) -or (
        (Read-TestLog $hostLog).Contains('INVENTORY_RELOAD PASS role=Host cancelled=4/19 normal=23/0 conserved=23') -and
        (Read-TestLog $clientLog).Contains('INVENTORY_RELOAD PASS role=Client cancelled=4/19 normal=23/0 conserved=23'))
    $report = [ordered]@{
        inventoryReloadChecked = [bool]$InventoryReload
        inventoryReloadPassed = $inventoryReloadPassed
        inventoryEquipmentChecked = [bool]$InventoryEquipment
        inventoryEquipmentPassed = $inventoryEquipmentPassed
        userAccepted = $false
        inventoryDropChecked = [bool]$InventoryDrop
        inventoryDropPassed = $inventoryDropPassed
        hostExitCode = $hostProcess.ExitCode
        clientExitCode = $clientProcess.ExitCode
        hostPassed = $hostPassed
        clientPassed = $clientPassed
        hostErrorCount = $hostErrorCount
        clientErrorCount = $clientErrorCount
        movementChecked = $true
        inventoryDataMatched = $inventoryDataMatched
        matchedClientEntries = $clientData.Count
        inventoryRulesChecked = [bool]$InventoryRules
        inventoryRulesPassed = $inventoryRulesPassed
        inventorySnapshotsChecked = [bool]$InventorySnapshots
        inventorySnapshotsPassed = $inventorySnapshotsPassed
        inventoryOperationsChecked = [bool]$InventoryOperations
        inventoryOperationsPassed = $inventoryOperationsPassed
        inventoryUIChecked = [bool]$InventoryUI
        inventoryUIPassed = $inventoryUIPassed
        inventoryPickupChecked = [bool]$InventoryPickup
        inventoryPickupPassed = $inventoryPickupPassed
        rendering = [bool]$Render
        port = $Port
        mode = 'Two independent processes using loopback IP; not a two-computer LAN test'
        hostLog = $hostLog
        clientLog = $clientLog
    }
    $report | ConvertTo-Json | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding utf8
    if (-not $hostPassed -or -not $clientPassed -or -not $inventoryDataMatched -or -not $inventoryRulesPassed -or -not $inventorySnapshotsPassed -or -not $inventoryOperationsPassed -or -not $inventoryUIPassed -or -not $inventoryPickupPassed -or -not $inventoryDropPassed -or -not $inventoryEquipmentPassed -or -not $inventoryReloadPassed -or $hostProcess.ExitCode -ne 0 -or $clientProcess.ExitCode -ne 0 -or $hostErrorCount -gt 0 -or $clientErrorCount -gt 0) {
        throw "Network smoke test failed. See $runDirectory"
    }
    Write-Output "PASS: two network players and required components initialized. Report: $runDirectory"
    if ($InventoryReload) { Write-Output 'PASS: firing cancelled reload on both peers, old timer did not refill, and a subsequent normal reload conserved ammo.' }
    if ($InventoryEquipment) { Write-Output 'PASS: both players equipped, switched, replaced, removed and moved weapons through UI; ammo and remote equipment actors matched.' }
    if ($InventoryRules) { Write-Output 'PASS: inventory quantity rules and final replicated slot data matched.' }
    if ($InventorySnapshots) { Write-Output 'PASS: rebuilt item state and cleared quickbar/equipment references matched on both peers.' }
    if ($InventoryOperations) { Write-Output 'PASS: client RPC move/swap/split/merge, three rejected requests and replicated inventory matched.' }
    if ($InventoryUI) { Write-Output 'PASS: both inventory screens matched their owner, refreshed operations, reopened and released input/listeners.' }
    if ($InventoryPickup) { Write-Output 'PASS: E-key pickup, five replicated stations, partial/full inventory, stale/distant/replayed requests and two-player competition conserved quantity.' }
    if ($InventoryDrop) { Write-Output 'PASS: both players dropped through inventory UI, exchanged exact quantities and preserved weapon state across the network.' }
}
catch {
    $reportPath = Join-Path $runDirectory 'Result.json'
    if (-not (Test-Path -LiteralPath $reportPath)) {
        [ordered]@{
            hostPassed = $false
            clientPassed = $false
            error = $_.Exception.Message
            port = $Port
            hostLog = $hostLog
            clientLog = $clientLog
        } | ConvertTo-Json | Set-Content -LiteralPath $reportPath -Encoding utf8
    }
    throw
}
finally {
    # Only stop processes created by this invocation, never an existing editor or game.
    foreach ($testProcess in @($clientProcess, $hostProcess)) {
        if ($null -ne $testProcess -and -not $testProcess.HasExited) {
            Stop-Process -InputObject $testProcess -Force -ErrorAction SilentlyContinue
        }
    }
}
