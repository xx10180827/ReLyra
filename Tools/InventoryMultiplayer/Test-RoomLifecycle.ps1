param([string]$EngineRoot, [int]$Port = 17777, [int]$TimeoutSeconds = 2200, [switch]$Crash)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe'
if (Get-NetUDPEndpoint -LocalPort $Port -ErrorAction SilentlyContinue) { throw "UDP $Port is already in use." }
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/RoomLifecycle/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$maps = if ($Crash) { @('Inventory') } else { @('Expanse','ControlPoints','TopDownArena','TopDownLocal','Inventory') }
$records = [Collections.Generic.List[object]]::new()
function Start-Peer([string]$role) {
    $arguments = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '/Game/System/FrontEnd/Maps/L_LyraFrontEnd',
        '-game','-windowed','-ForceRes','-ResX=960','-ResY=720','-WinY=30',"-port=$Port",'-NoLiveCoding',
        '-nosplash','-nop4','-unattended','-forcelogflush','-NoAssetRegistryCacheWrite',
        '-gauntlet=LyraRoomLifecycleTest','-gauntlet.tickrate=0.05',
        ('-RoomTestDir="' + $runDirectory + '"'), ('-abslog="' + (Join-Path $runDirectory "$role.log") + '"'),
        '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null',
        '-ExecCmds="t.MaxFPS 30,sg.ViewDistanceQuality 1,sg.ShadowQuality 1,sg.PostProcessQuality 1,sg.EffectsQuality 1"')
    if ($role -eq 'Host') { $arguments += @('-RoomTestHost','-WinX=0') }
    elseif ($role -eq 'Intruder') { $arguments += @('-RoomTestIntruder','-WinX=100','-NullRHI','-nosound') }
    else { $arguments += '-WinX=970' }
    if ($Crash) { $arguments += '-RoomTestCrash' }
    if ($role -eq 'ClientReconnect') { $arguments += '-RoomTestReconnect' }
    $process = Start-Process -FilePath $exe -WorkingDirectory $projectRoot -ArgumentList $arguments -WindowStyle Hidden -PassThru
    $records.Add([pscustomobject]@{ role=$role; process=$process; intentionallyStopped=$false })
}
try {
    Start-Peer 'Host'
    Write-Host "Room lifecycle checks running (crash=$Crash). Report: $runDirectory"
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while (@($records | Where-Object { -not $_.process.HasExited }).Count -gt 0 -and (Get-Date) -lt $deadline) {
        # Start real late peers only after the host has loaded; avoid concurrent cold-cache builds.
        if ($records.Count -eq 1 -and @(Get-ChildItem -LiteralPath $runDirectory -Filter '*_HostReady').Count -gt 0) { Start-Peer 'Client' }
        if ($records.Count -eq 2 -and @(Get-ChildItem -LiteralPath $runDirectory -Filter '*_HostReady').Count -gt 0) { Start-Peer 'Intruder' }
        if ($Crash -and (Test-Path (Join-Path $runDirectory '4_KillClient')) -and -not $records[1].intentionallyStopped) {
            $records[1].intentionallyStopped = $true
            Stop-Process -Id $records[1].process.Id -Force
            $records[1].process.WaitForExit()
            Start-Peer 'ClientReconnect'
        }
        if ($Crash -and (Test-Path (Join-Path $runDirectory '4_KillHost')) -and -not $records[0].intentionallyStopped) {
            $records[0].intentionallyStopped = $true
            Stop-Process -Id $records[0].process.Id -Force
            $records[0].process.WaitForExit()
        }
        if (@($records | Where-Object { $_.process.HasExited -and $_.process.ExitCode -ne 0 -and -not $_.intentionallyStopped }).Count -gt 0) { break }
        if (@($records | Where-Object { Select-String -LiteralPath (Join-Path $runDirectory ($_.role + '.log')) -Pattern 'ROOM_LIFE FAIL' -Quiet -ErrorAction SilentlyContinue }).Count -gt 0) { break }
        Start-Sleep -Milliseconds 500
    }
    $result = [ordered]@{ passed=$true; crashScenario=[bool]$Crash; directory=$runDirectory; userAccepted=$false; peers=@() }
    foreach ($record in $records) {
        $role = $record.role
        # A failed peer can finish before the others; read their still-open logs with sharing.
        $log = Get-Content -LiteralPath (Join-Path $runDirectory "$role.log") -Raw
        $record.process.Refresh()
        $code = if ($record.process.HasExited) { $record.process.WaitForExit(); $record.process.ExitCode } else { -1 }
        $loggedRole = if ($role -eq 'ClientReconnect') { 'Client' } else { $role }
        $checks = @($maps | ForEach-Object {
            $lifeMarker = if ($_ -in @('TopDownArena','TopDownLocal')) { 'ELIMINATED' } else { 'RESPAWN' }
            $pass = $log.Contains("ROOM_LIFE PASS role=$loggedRole map=$_") -and ($role -in @('Intruder','ClientReconnect') -or $log.Contains("ROOM_LIFE $lifeMarker role=$role map=$_ "))
            if ($record.intentionallyStopped) {
                $pass = $log.Contains("ROOM_LIFE RESPAWN role=$role map=$_ ") -and
                    (($role -eq 'Host' -and $log.Contains('ROOM_LIFE HOST_CRASH_READY')) -or ($role -eq 'Client' -and (Test-Path (Join-Path $runDirectory '4_KillClient'))))
            }
            [ordered]@{ map=$_; passed=$pass }
        })
        $expectedWindow = $false
        $expectedErrors = 0
        $unexpected = @($log -split '\r?\n' | ForEach-Object {
            if ($_ -match 'ROOM_LIFE EXPECT_FAILURE BEGIN') { $expectedWindow = $true }
            if ($_ -match 'ROOM_LIFE EXPECT_FAILURE END') { $expectedWindow = $false }
            if ($_ -match '(?:Log\w+: Error:|Fatal error!|Fatal:)') {
                if ($expectedWindow -and $_ -match 'LogNet: Error: UEngine::BroadcastNetworkFailure: FailureType = (FailureReceived|ConnectionLost|PendingConnectionFailure|ConnectionTimeout),') { $expectedErrors++ }
                else { $_ }
            }
        })
        $pass = ($code -eq 0 -or ($record.intentionallyStopped -and $record.process.HasExited)) -and @($checks | Where-Object { -not $_.passed }).Count -eq 0 -and $unexpected.Count -eq 0
        $result.peers += [ordered]@{ role=$role; exitCode=$code; intentionallyStopped=$record.intentionallyStopped; passed=$pass; maps=$checks; expectedNetworkErrors=$expectedErrors; unexpectedErrors=$unexpected }
        $result.passed = $result.passed -and $pass
    }
    if ($Crash) { $result.passed = $result.passed -and $records.Count -eq 4 -and $records[0].intentionallyStopped -and $records[1].intentionallyStopped }
    else { $result.passed = $result.passed -and $records.Count -eq 3 }
    $result | ConvertTo-Json -Depth 7 | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding UTF8
    if (-not $result.passed) { throw "Room lifecycle checks failed. See $runDirectory" }
    Write-Host 'PASS: original experiences, late join, third-player rejection, real death/respawn, inventory/equipment preservation, client leave/rejoin and host exit.'
} finally {
    foreach ($record in $records) { if (-not $record.process.HasExited) { Stop-Process -Id $record.process.Id -Force } }
}
