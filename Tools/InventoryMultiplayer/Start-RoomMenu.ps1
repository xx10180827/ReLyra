param([switch]$TwoWindows, [string]$EngineRoot, [ValidateRange(1024,65535)][int]$Port = 7777)
$ErrorActionPreference = 'Stop'
$projectRoot = (Resolve-Path (Join-Path $PSScriptRoot '../..')).Path
if (-not $EngineRoot) { $EngineRoot = (Get-ItemProperty 'HKLM:\SOFTWARE\EpicGames\Unreal Engine\5.4').InstalledDirectory }
$exe = Join-Path $EngineRoot 'Engine/Binaries/Win64/UnrealEditor.exe'
$runDirectory = Join-Path $projectRoot ('Saved/InventoryMultiplayer/Rooms/Manual-' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $runDirectory -Force | Out-Null
$count = if ($TwoWindows) { 2 } else { 1 }
Add-Type -AssemblyName System.Windows.Forms
$area = [System.Windows.Forms.Screen]::PrimaryScreen.WorkingArea
$width = [int][Math]::Max(640, [Math]::Min(1100, [Math]::Floor(($area.Width - 40) / $count)))
$height = [int][Math]::Min(720, $area.Height - 80)
for ($i = 0; $i -lt $count; $i++) {
    $arguments = @(('"' + (Join-Path $projectRoot 'Lyra.uproject') + '"'), '/Game/System/FrontEnd/Maps/L_LyraFrontEnd',
        '-game', '-windowed', '-ForceRes', "-ResX=$width", "-ResY=$height", "-WinX=$($area.Left + 10 + $i * ($width + 10))", "-WinY=$($area.Top + 30)",
        "-port=$Port", '-NoLiveCoding', '-nosplash', '-nop4', '-forcelogflush', '-NoAssetRegistryCacheWrite',
        '-ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null',
        ('-abslog="' + (Join-Path $runDirectory "Player$($i + 1).log") + '"'),
        '-ExecCmds="t.MaxFPS 30,sg.ViewDistanceQuality 1,sg.ShadowQuality 1,sg.PostProcessQuality 1,sg.EffectsQuality 1"')
    # Intentional visible windows: this is the user's interactive room menu.
    Start-Process -FilePath $exe -WorkingDirectory $projectRoot -ArgumentList $arguments -WindowStyle Normal | Out-Null
}
Write-Host "Room menu started. Logs: $runDirectory"
Write-Host 'In the Lyra main menu, click the LAN direct-connect entry to create or join a room. In game, press F10.'
