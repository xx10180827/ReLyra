param(
    [string]$EngineRoot,
    [ValidateRange(60, 900)]
    [int]$TimeoutSeconds = 360
)

$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) {
    $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory
}
$editorExecutable = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor-Cmd.exe'
if (-not (Test-Path -LiteralPath $editorExecutable)) { throw 'UE 5.4 executable not found.' }
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/DataTests/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$reportDirectory = Join-Path $runDirectory 'Report'
$logPath = Join-Path $runDirectory 'Automation.log'
$arguments = @(
    ('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'),
    '-ExecCmds="Automation RunTests Lyra."', '-TestExit="Automation Test Queue Empty"',
    ('-ReportExportPath="' + $reportDirectory + '"'), ('-abslog="' + $logPath + '"'),
    '-unattended', '-NullRHI', '-nosound', '-nop4', '-nosplash', '-NoLiveCoding', '-forcelogflush'
)
$testProcess = $null
try {
    Write-Output "Running inventory data and weapon regression checks. Reports: $runDirectory"
    $testProcess = Start-Process -FilePath $editorExecutable -ArgumentList $arguments -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while (-not $testProcess.HasExited) {
        if ((Get-Date) -gt $deadline) { throw 'Inventory data tests timed out.' }
        Start-Sleep -Milliseconds 500
    }
    $testProcess.WaitForExit()
    $report = Get-Content -LiteralPath (Join-Path $reportDirectory 'index.json') -Raw | ConvertFrom-Json
    $expected = @('Lyra.Inventory.Data.Capacity', 'Lyra.Inventory.Data.StableSlots',
        'Lyra.Inventory.Data.Configuration', 'Lyra.Inventory.Data.Metadata',
        'Lyra.Weapons.Ranged.Ammo', 'Lyra.Weapons.Ranged.InventoryAmmoSync', 'Lyra.Weapons.Shotgun.Defaults',
        'Lyra.Inventory.Rules.Stacking', 'Lyra.Inventory.Rules.PartialAndAtomicAdd',
        'Lyra.Inventory.Rules.AtomicConsumption', 'Lyra.Inventory.Rules.StateCompatibility',
        'Lyra.Inventory.Rules.InvalidAndAuthority', 'Lyra.Inventory.Rules.LargeCountsAndWeapons',
        'Lyra.Inventory.Snapshot.RoundTrip', 'Lyra.Inventory.Snapshot.Transfer',
        'Lyra.Inventory.Snapshot.Validation', 'Lyra.Inventory.Snapshot.Registration', 'Lyra.Inventory.Snapshot.References',
        'Lyra.Inventory.Operations.MoveSwap', 'Lyra.Inventory.Operations.SplitState',
        'Lyra.Inventory.Operations.Merge', 'Lyra.Inventory.Operations.Validation', 'Lyra.Inventory.Operations.ReplayConservation',
        'Lyra.Inventory.Pickup.QuantityAndCompetition', 'Lyra.Inventory.Pickup.Access', 'Lyra.Inventory.Pickup.RequestReplay')
    $lines = @('# Inventory data, quantity rules and snapshot verification', '', 'This is an automated data report, not user acceptance or a playable inventory UI.', '', '| Test | Result |', '|---|---|')
    $allPassed = $testProcess.ExitCode -eq 0 -and $report.failed -eq 0 -and $report.notRun -eq 0
    foreach ($name in $expected) {
        $matches = @($report.tests | Where-Object { $_.fullTestPath -eq $name })
        $state = if ($matches.Count -eq 1) { $matches[0].state } else { 'Missing' }
        $allPassed = $allPassed -and $state -eq 'Success'
        $lines += "| $name | $state |"
        Write-Output "$state : $name"
    }
    $lines += @('', 'Network replication is verified separately by Test-NetworkScene.ps1 -Render.', '', "Process exit code: $($testProcess.ExitCode)")
    $lines | Set-Content -LiteralPath (Join-Path $runDirectory 'Acceptance.md') -Encoding utf8
    [ordered]@{ passed=$allPassed; expectedTests=$expected.Count; exitCode=$testProcess.ExitCode; userAccepted=$false; report=(Join-Path $reportDirectory 'index.json') } |
        ConvertTo-Json | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding utf8
    if (-not $allPassed) { throw "Data verification failed. See $runDirectory" }
    Write-Output "PASS: all $($expected.Count) required checks succeeded. Acceptance report: $runDirectory\Acceptance.md"
}
catch {
    if (-not (Test-Path -LiteralPath (Join-Path $runDirectory 'Result.json'))) {
        [ordered]@{ passed=$false; userAccepted=$false; error=$_.Exception.Message; log=$logPath } |
            ConvertTo-Json | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding utf8
    }
    throw
}
finally {
    if ($testProcess -and -not $testProcess.HasExited) {
        Stop-Process -InputObject $testProcess -Force -ErrorAction SilentlyContinue
    }
}
