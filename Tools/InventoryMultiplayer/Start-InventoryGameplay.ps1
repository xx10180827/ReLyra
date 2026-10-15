param([string]$Case, [string]$EngineRoot, [ValidateRange(1024,65535)][int]$Port = 17779)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
# Explicitly enumerate the root JSON array for Windows PowerShell 5.1.
$matrix = @(
    Get-Content (Join-Path $PSScriptRoot 'InventoryMapMatrix.json') -Raw |
        ConvertFrom-Json |
        ForEach-Object { $_ }
)
if (-not $Case) {
    Write-Output 'Choose an original gameplay map. I opens the backpack. Original loadouts and game rules are preserved.'
    for ($index=0; $index -lt $matrix.Count; ++$index) { Write-Output ("{0,2}. {1}" -f ($index+1),$matrix[$index].name) }
    $choice = 0
    if (-not [int]::TryParse((Read-Host 'Map number'),[ref]$choice) -or $choice -lt 1 -or $choice -gt $matrix.Count) { throw 'Invalid map number.' }
    $Case = $matrix[$choice-1].name
}
$entry = $matrix | Where-Object {$_.name -eq $Case}
if (-not $entry) { throw "Unknown map case: $Case" }
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe'
if (-not (Test-Path -LiteralPath $exe)) { throw 'UnrealEditor.exe was not found. Supply -EngineRoot.' }
if (Get-NetUDPEndpoint -LocalPort $Port -ErrorAction SilentlyContinue) { throw "UDP $Port is already in use. Close the previous game windows or choose another -Port." }
Add-Type -AssemblyName System.Windows.Forms
$screen = [System.Windows.Forms.Screen]::PrimaryScreen.WorkingArea
$width = [int][Math]::Max(640, [Math]::Min(1100, [Math]::Floor(($screen.Width - 60) / 2)))
$height = [int][Math]::Min(720, $screen.Height - 120)
$hostX = $screen.Left + 10
$clientX = $hostX + $width + 20
$windowY = $screen.Top + 40
$run = Join-Path $projectRoot ('Saved/InventoryMultiplayer/Gameplay/' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $run -Force | Out-Null
$url = $entry.map
if ($entry.experience) { $url += '?Experience=' + $entry.experience }
$common = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '-game', '-windowed', '-ForceRes', "-ResX=$width", "-ResY=$height", "-WinY=$windowY",
    '-nosplash', '-NoLiveCoding', '-forcelogflush', '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null')
$hostProcess=$null; $clientProcess=$null
$hostLog=Join-Path $run 'Host.log'; $clientLog=Join-Path $run 'Client.log'
function Read-Log([string]$path) { if(Test-Path $path) { [string](Get-Content $path -Raw) } else { '' } }
try {
    $hostProcess = Start-Process $exe -ArgumentList ($common + @(($url + '?listen'),"-port=$Port","-WinX=$hostX",('-abslog="'+$hostLog+'"'))) -WorkingDirectory $projectRoot -WindowStyle Normal -PassThru
    $deadline=(Get-Date).AddSeconds(240)
    while ((Read-Log $hostLog) -notmatch "listening on port $Port\b") {
        if ($hostProcess.HasExited -or (Get-Date) -gt $deadline) { throw "Host startup failed. See $hostLog" }
        Start-Sleep -Milliseconds 500
    }
    $clientProcess = Start-Process $exe -ArgumentList ($common + @("127.0.0.1:$Port","-WinX=$clientX",('-abslog="'+$clientLog+'"'))) -WorkingDirectory $projectRoot -WindowStyle Normal -PassThru
    $deadline=(Get-Date).AddSeconds(240)
    while ((Read-Log $hostLog) -notmatch 'Join succeeded:') {
        if ($hostProcess.HasExited -or $clientProcess.HasExited -or (Get-Date) -gt $deadline) { throw "Client join failed. See $run" }
        Start-Sleep -Milliseconds 500
    }
    [ordered]@{map=$entry.map;experience=$entry.experience;host=$hostProcess.Id;client=$clientProcess.Id;joined=$true;userAccepted=$false} |
        ConvertTo-Json | Set-Content (Join-Path $run 'LaunchResult.json') -Encoding utf8
    Write-Output "Joined $Case. Wait for both loading screens to finish, then press I. Close the game windows yourself after acceptance. Logs: $run"
}
catch {
    foreach($process in @($clientProcess,$hostProcess)) { if($process -and -not $process.HasExited) { Stop-Process -InputObject $process -Force -ErrorAction SilentlyContinue } }
    throw
}
