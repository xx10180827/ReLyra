param([string]$EngineRoot, [int]$TimeoutSeconds = 240)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
if (Get-NetUDPEndpoint -LocalPort 14002 -ErrorAction SilentlyContinue) { throw 'Discovery UDP 14002 is already in use.' }
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/Discovery/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
$reportDirectory = Join-Path $runDirectory 'Report'
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$arguments = @(
    ('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'),
    '-ExecCmds="Automation RunTests Lyra.Rooms.Discovery"', '-TestExit="Automation Test Queue Empty"',
    ('-ReportExportPath="' + $reportDirectory + '"'), ('-abslog="' + (Join-Path $runDirectory 'Automation.log') + '"'),
    '-unattended', '-NullRHI', '-nosound', '-nop4', '-nosplash', '-NoLiveCoding', '-forcelogflush',
    '-LogCmds="LogLyraRoomDiscovery Verbose"'
)
$testProcess = $null
try {
    Write-Output "Discovery protocol and live interface checks: $runDirectory"
    $testProcess = Start-Process -FilePath (Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor-Cmd.exe') -ArgumentList $arguments -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while (-not $testProcess.HasExited) {
        if ((Get-Date) -gt $deadline) { throw 'Discovery tests timed out.' }
        Start-Sleep -Seconds 2
    }
    $testProcess.WaitForExit()
    $report = Get-Content -LiteralPath (Join-Path $reportDirectory 'index.json') -Raw | ConvertFrom-Json
    $expected = @('Lyra.Rooms.Discovery.Protocol', 'Lyra.Rooms.Discovery.MultiInterfaceSockets')
    $checks = @($expected | ForEach-Object {
        $name = $_
        $test = @($report.tests | Where-Object { $_.fullTestPath -eq $name })
        [ordered]@{name=$name;passed=($test.Count -eq 1 -and $test[0].state -eq 'Success')}
    })
    $passed = $testProcess.ExitCode -eq 0 -and @($checks | Where-Object { -not $_.passed }).Count -eq 0
    [ordered]@{passed=$passed;exitCode=$testProcess.ExitCode;checks=$checks;userAccepted=$false;directory=$runDirectory;
        scope='Local live IPv4 interfaces; not a substitute for two physical PCs or changing hotspots'} |
        ConvertTo-Json -Depth 5 | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding utf8
    if (-not $passed) { throw "Discovery checks failed: $runDirectory" }
    Write-Output 'PASS: protocol validation, actual per-interface broadcast/unicast, source address, deduplication, full occupancy, stop and rehost.'
} finally {
    if ($testProcess -and -not $testProcess.HasExited) { Stop-Process -Id $testProcess.Id -Force }
}
