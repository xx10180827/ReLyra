param(
    [string]$Map = '/Game/InventorySystem/Maps/L_InventoryMultiplayer',
    [string]$Experience,
    [string]$TravelTo,
    [switch]$Seamless,
    [string]$EngineRoot,
    [ValidateRange(1024,65535)][int]$Port = 17778,
    [ValidateRange(60,1800)][int]$TimeoutSeconds = 1100
)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor-Cmd.exe'
$run = Join-Path $projectRoot ('Saved/InventoryMultiplayer/MapTests/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $run -Force | Out-Null
$url = $Map + '?NumBots=0'
if ($Experience) { $url += '?Experience=' + $Experience }
if ($TravelTo) {
    # Relative travel inherits options; explicitly select both destination and
    # return experiences instead of relying on an option-removal URL surviving
    # the engine's multiple URL reconstruction stages.
    # Explicitly enumerate the root JSON array for Windows PowerShell 5.1.
    $mapConfigurations = @(
        Get-Content (Join-Path $PSScriptRoot 'InventoryMapMatrix.json') -Raw |
            ConvertFrom-Json |
            ForEach-Object { $_ }
    )
    if (-not $Experience) {
        $startDefault = ($mapConfigurations | Where-Object map -eq $Map | Select-Object -First 1).defaultExperience
        if (-not $startDefault) { throw 'Specify -Experience for a travel test starting on an unlisted map.' }
        $url += '?Experience=' + $startDefault
    }
    $TravelTo += '?NumBots=0'
    if ($TravelTo -notmatch '(?i)\?Experience=') {
        $destinationMap = ($TravelTo -split '\?')[0]
        $destinationDefault = ($mapConfigurations | Where-Object map -eq $destinationMap | Select-Object -First 1).defaultExperience
        if (-not $destinationDefault) { throw 'Add ?Experience= to TravelTo for an unlisted destination map.' }
        $TravelTo += '?Experience=' + $destinationDefault
    }
}
$startEncoded = [Convert]::ToBase64String([Text.Encoding]::UTF8.GetBytes($url))
$common = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '-game', '-unattended', '-nop4', '-nosplash', '-NoLiveCoding',
    '-gauntlet=LyraInventoryMapTest', '-gauntlet.tickrate=0.0166667', '-RenderOffscreen', '-windowed', '-ResX=960', '-ResY=640',
    '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null', '-ExecCmds="t.MaxFPS 45"',
    ('-InventoryMapReportDir="' + $run + '"'), ('-InventoryMapStartEncoded=' + $startEncoded))
# Keep future URLs out of UE's global Experience= command-line lookup.
if ($TravelTo) { $common += '-InventoryMapTravelEncoded=' + [Convert]::ToBase64String([Text.Encoding]::UTF8.GetBytes($TravelTo)) }
if ($Seamless) { $common += '-InventoryMapSeamless' }
$hostLog = Join-Path $run 'Host.log'; $clientLog = Join-Path $run 'Client.log'
$hostProcess = $null; $clientProcess = $null
$deadline = (Get-Date).AddSeconds($TimeoutSeconds)
function Read-Log([string]$path) { if (Test-Path -LiteralPath $path) { [string](Get-Content -LiteralPath $path -Raw) } else { '' } }
try {
    $hostProcess = Start-Process -FilePath $exe -ArgumentList ($common + @(($url + '?listen'), "-port=$Port", '-InventoryMapRole=Host', ('-abslog="' + $hostLog + '"'))) -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    "Host $($hostProcess.Id): $url; report $run"
    while ((Read-Log $hostLog) -notmatch "listening on port $Port\b") {
        if ($hostProcess.HasExited -or (Get-Date) -gt $deadline) { throw 'Host did not start listening.' }
        Start-Sleep -Milliseconds 500
    }
    $clientProcess = Start-Process -FilePath $exe -ArgumentList ($common + @("127.0.0.1:$Port", '-InventoryMapRole=Client', ('-abslog="' + $clientLog + '"'))) -WorkingDirectory $projectRoot -WindowStyle Hidden -PassThru
    "Client $($clientProcess.Id): verifying map UI and inventory lifecycle."
    while (-not ($hostProcess.HasExited -and $clientProcess.HasExited)) {
        if ((Get-Date) -gt $deadline) { throw 'Inventory map test timeout.' }
        if (($hostProcess.HasExited -and $hostProcess.ExitCode -ne 0) -or ($clientProcess.HasExited -and $clientProcess.ExitCode -ne 0)) { throw 'A map test process exited with a failure. See its log.' }
        Start-Sleep -Milliseconds 500
    }
    $hostProcess.WaitForExit(); $clientProcess.WaitForExit()
    $hostText = Read-Log $hostLog; $clientText = Read-Log $clientLog
    $rounds = if ($TravelTo) { 4 } else { 1 }
    $hostPassed = $hostText.Contains("INVENTORY_MAP PASS role=Host rounds=$rounds ")
    $clientPassed = $clientText.Contains("INVENTORY_MAP PASS role=Client rounds=$rounds ")
    $failures = [regex]::Matches($hostText + $clientText, 'INVENTORY_MAP FAIL|Fatal error:|Assertion failed:').Count
    $errors = [regex]::Matches($hostText + $clientText, '(?m)^.*\]\s*Log[^:\r\n]+:\s*(?:Error|Fatal):').Count
    $passed = $hostPassed -and $clientPassed -and $failures -eq 0 -and $errors -eq 0 -and $hostProcess.ExitCode -eq 0 -and $clientProcess.ExitCode -eq 0
    [ordered]@{passed=$passed;map=$Map;experience=$Experience;travelTo=$TravelTo;seamless=[bool]$Seamless;rounds=$rounds;
        hostPassed=$hostPassed;clientPassed=$clientPassed;hostExitCode=$hostProcess.ExitCode;clientExitCode=$clientProcess.ExitCode;
        failures=$failures;errorCount=$errors;userAccepted=$false;hostLog=$hostLog;clientLog=$clientLog} | ConvertTo-Json | Set-Content (Join-Path $run 'Result.json') -Encoding utf8
    if (-not $passed) { throw "Inventory map verification failed: $run" }
    "PASS: $Map; $rounds rounds; owning backpack UI, mutations, reopen and requested level initialization verified. Report: $run"
}
catch {
    if (-not (Test-Path (Join-Path $run 'Result.json'))) {
        [ordered]@{passed=$false;map=$Map;error=$_.Exception.Message;userAccepted=$false;
            hostExitCode=$(if ($hostProcess -and $hostProcess.HasExited) { $hostProcess.ExitCode } else { $null });
            clientExitCode=$(if ($clientProcess -and $clientProcess.HasExited) { $clientProcess.ExitCode } else { $null });
            hostLog=$hostLog;clientLog=$clientLog} |
            ConvertTo-Json | Set-Content (Join-Path $run 'Result.json') -Encoding utf8
    }
    throw
}
finally {
    foreach($process in @($clientProcess,$hostProcess)) {
        if ($process -and -not $process.HasExited) { Stop-Process -InputObject $process -Force -ErrorAction SilentlyContinue }
    }
}
