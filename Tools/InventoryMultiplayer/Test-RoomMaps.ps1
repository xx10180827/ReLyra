param([string]$EngineRoot, [int]$Port = 17777, [int]$TimeoutSeconds = 1300)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe'
if (Get-NetUDPEndpoint -LocalPort $Port -ErrorAction SilentlyContinue) { throw "UDP $Port is already in use." }
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/RoomMaps/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$maps = @('Expanse','ControlPoints','TopDownArena','TopDownLocal','Inventory')
$processes = @()
try {
    foreach ($role in @('Host','Client')) {
        $arguments = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '/Game/System/FrontEnd/Maps/L_LyraFrontEnd',
            '-game','-windowed','-ForceRes','-ResX=960','-ResY=720','-WinY=30',"-port=$Port",'-NoLiveCoding',
            '-nosplash','-nop4','-unattended','-forcelogflush','-NoAssetRegistryCacheWrite',
            '-gauntlet=LyraRoomMapsTest','-gauntlet.tickrate=0.05',
            ('-RoomTestDir="' + $runDirectory + '"'), ('-abslog="' + (Join-Path $runDirectory "$role.log") + '"'),
            '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null',
            '-ExecCmds="t.MaxFPS 30,sg.ViewDistanceQuality 1,sg.ShadowQuality 1,sg.PostProcessQuality 1,sg.EffectsQuality 1"')
        if ($role -eq 'Host') { $arguments += @('-RoomTestHost','-WinX=0') } else { $arguments += '-WinX=970' }
        $processes += Start-Process -FilePath $exe -WorkingDirectory $projectRoot -ArgumentList $arguments -WindowStyle Hidden -PassThru
    }
    Write-Host "Five-map room checks running. Report: $runDirectory"
    $deadline = (Get-Date).AddSeconds($TimeoutSeconds)
    while (@($processes | Where-Object { -not $_.HasExited }).Count -gt 0 -and (Get-Date) -lt $deadline) {
        if (@($processes | Where-Object { $_.HasExited -and $_.ExitCode -ne 0 }).Count -gt 0) { break }
        if (@('Host','Client') | Where-Object { Select-String -LiteralPath (Join-Path $runDirectory "$_.log") -Pattern 'ROOM_MAP FAIL' -Quiet -ErrorAction SilentlyContinue }) { break }
        Start-Sleep -Milliseconds 500
    }
    $result = [ordered]@{ passed=$true; directory=$runDirectory; userAccepted=$false; peers=@() }
    for ($i=0; $i -lt 2; $i++) {
        $role = @('Host','Client')[$i]
        $log = [IO.File]::ReadAllText((Join-Path $runDirectory "$role.log"))
        $processes[$i].Refresh()
        $code = if ($processes[$i].HasExited) { $processes[$i].ExitCode } else { -1 }
        $checks = @($maps | ForEach-Object { [ordered]@{ map=$_; passed=$log.Contains("ROOM_MAP PASS role=$role map=$_ ") -and $log.Contains("ROOM_MAP GAMEPLAY role=$role map=$_ ") -and $log.Contains("ROOM_MAP CHECK role=$role map=$_ ") -and (-not $_.StartsWith('TopDown') -or $log.Contains("ROOM_MAP CLOCK role=$role map=$_ ")) } })
        $errorLines = @([regex]::Matches($log, '(?m)^.*(?:Log\w+: Error:|Fatal error!|Fatal:).*$') | ForEach-Object { $_.Value })
        $expectedWindow = $false
        $unexpected = @($log -split '\r?\n' | ForEach-Object {
            if ($_ -match 'ROOM_MAP EXPECT_DISCONNECT BEGIN') { $expectedWindow = $true }
            if ($_ -match 'ROOM_MAP EXPECT_DISCONNECT END') { $expectedWindow = $false }
            if ($_ -match '(?:Log\w+: Error:|Fatal error!|Fatal:)' -and -not ($role -eq 'Client' -and $expectedWindow -and $_ -match 'LogNet: Error: UEngine::BroadcastNetworkFailure: FailureType = (FailureReceived|ConnectionLost),')) { $_ }
        })
        $pass = $code -eq 0 -and @($checks | Where-Object { -not $_.passed }).Count -eq 0 -and $unexpected.Count -eq 0
        $result.peers += [ordered]@{ role=$role; exitCode=$code; passed=$pass; maps=$checks; expectedDisconnectErrors=($errorLines.Count-$unexpected.Count); unexpectedErrors=$unexpected }
        $result.passed = $result.passed -and $pass
    }
    $result | ConvertTo-Json -Depth 7 | Set-Content -LiteralPath (Join-Path $runDirectory 'Result.json') -Encoding UTF8
    if (-not $result.passed) { throw "Five-map room checks failed. See $runDirectory" }
    Write-Host 'PASS: all five maps used their original experiences; two network players, map advertisement/list join/IP rejoin, team lock, native movement/fire/bombs, inventory UI/move/reset and leave/reselect passed.'
} finally {
    foreach ($process in $processes) { if (-not $process.HasExited) { Stop-Process -Id $process.Id -Force } }
}
