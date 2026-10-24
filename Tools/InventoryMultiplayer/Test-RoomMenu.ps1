param([string]$EngineRoot, [string]$GameExecutable, [ValidateRange(0,500)][int]$PacketLag=0, [ValidateRange(0,5)][int]$PacketLoss=0, [int]$Port = 17777, [int]$TimeoutSeconds = 640, [switch]$LegacyDirect)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot -and -not $GameExecutable) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = if ($GameExecutable) { (Resolve-Path -LiteralPath $GameExecutable).Path } else { Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe' }
foreach ($checkPort in @($Port, 17998)) {
    if (Get-NetUDPEndpoint -LocalPort $checkPort -ErrorAction SilentlyContinue) { throw "UDP $checkPort is already in use." }
}
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/Rooms/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$processes = @()
try {
    foreach ($role in @('Host','Client')) {
        $arguments = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '/Game/System/FrontEnd/Maps/L_LyraFrontEnd',
            '-game', '-windowed', '-ForceRes', '-ResX=960', '-ResY=720', '-WinY=30', "-port=$Port", '-NoLiveCoding',
            '-nosplash', '-nop4', '-unattended', '-forcelogflush', '-NoAssetRegistryCacheWrite', '-gauntlet=LyraRoomFlowTest',
            ('-RoomTestDir="' + $runDirectory + '"'), ('-abslog="' + (Join-Path $runDirectory "$role.log") + '"'),
            '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null',
            '-ExecCmds="t.MaxFPS 30,sg.ViewDistanceQuality 1,sg.ShadowQuality 1,sg.PostProcessQuality 1,sg.EffectsQuality 1"')
        if ($GameExecutable) { $arguments = @($arguments | Select-Object -Skip 1) }
        $arguments += @("-PktLag=$PacketLag", "-PktLoss=$PacketLoss")
        if ($LegacyDirect) { $arguments += '-RoomTestLegacyDirect' }
        if ($role -eq 'Host') { $arguments += @('-RoomTestHost','-WinX=0') } else { $arguments += '-WinX=970' }
        $processes += Start-Process -FilePath $exe -WorkingDirectory $projectRoot -ArgumentList $arguments -WindowStyle Hidden -PassThru
    }
    Write-Host "Room flow test running. Report: $runDirectory"
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while (@($processes | Where-Object { -not $_.HasExited }).Count -gt 0 -and (Get-Date) -lt $deadline) {
        if (@($processes | Where-Object { $_.HasExited -and $_.ExitCode -ne 0 }).Count -gt 0) { break }
        Start-Sleep -Milliseconds 500
    }
    $result = [ordered]@{ executable=$exe; packagedGame=[bool]$GameExecutable; legacyDirect=[bool]$LegacyDirect; packetLagMs=$PacketLag; packetLossPercent=$PacketLoss; passed = $true; directory = $runDirectory; userAccepted = $false; peers = @() }
    for ($i = 0; $i -lt 2; $i++) {
        $role = @('Host','Client')[$i]
        $log = Get-Content -LiteralPath (Join-Path $runDirectory "$role.log") -Raw
        $processes[$i].Refresh()
        $exited = $processes[$i].HasExited
        $code = if ($exited) { $processes[$i].ExitCode } else { -1 }
        $errorLines = @([regex]::Matches($log, '(?m)^.*(?:Log\w+: Error:|Fatal error!|Fatal:).*$') | ForEach-Object { $_.Value })
        # This scenario intentionally closes the host after the direct-IP rejoin.
        $unexpected = @($errorLines | Where-Object {
            -not ($role -eq 'Client' -and $log.Contains('ROOM_TEST role=Client step=13') -and
                $_ -match 'LogNet: Error: UEngine::BroadcastNetworkFailure: FailureType = (FailureReceived|ConnectionLost),')
        })
        $entryClicks = [regex]::Matches($log, 'ROOM_TEST frontend pointer click passed').Count
        $entryVerified = $entryClicks -ge $(if ($role -eq 'Host') { 3 } else { 4 })
        $retryVerified = $role -eq 'Host' -or $log.Contains('ROOM_TEST timeout recovery via original menu entry passed')
        $pass = $exited -and $code -eq 0 -and $log.Contains("ROOM_TEST PASS role=$role") -and $unexpected.Count -eq 0 -and $entryVerified -and $retryVerified
        if ($LegacyDirect) { $pass = $exited -and $code -eq 0 -and $log.Contains("ROOM_TEST LEGACY_PASS role=$role") -and $unexpected.Count -eq 0 }
        $result.peers += [ordered]@{ role=$role; exitCode=$code; passed=$pass; frontendPointerClicks=$entryClicks; timeoutRetryVerified=($role -eq 'Client' -and $retryVerified); expectedDisconnectErrors=($errorLines.Count - $unexpected.Count); unexpectedErrors=$unexpected }
        $simulationVerified = ($PacketLag -eq 0 -and $PacketLoss -eq 0) -or ($log.Contains("PktLag set to $PacketLag") -and $log.Contains("PktLoss set to $PacketLoss"))
        $result.peers[-1].networkSimulationVerified = $simulationVerified
        $result.passed = $result.passed -and $pass -and $simulationVerified
    }
    $result | ConvertTo-Json -Depth 5 | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding UTF8
    if (-not $result.passed) { throw "Room flow checks failed. See $runDirectory" }
    if ($LegacyDirect) { Write-Host 'PASS: original CommonSession host, direct IP join held over 100 seconds, legacy rules unchanged.' }
    else { Write-Host 'PASS: visible main-menu entry clicks, timeout retry, LAN search/join and direct IP, team lock while alive/dead/unpossessed/restored, leave/reselect/rehost and host disconnect.' }
} finally {
    foreach ($process in $processes) { if (-not $process.HasExited) { Stop-Process -Id $process.Id -Force } }
}
