@echo off
setlocal
cd /d "%~dp0"
if not exist "LyraGame.exe" (
    echo Place this file beside LyraGame.exe in the packaged Windows folder.
    pause
    exit /b 1
)
"%SystemRoot%\System32\ipconfig.exe" | "%SystemRoot%\System32\findstr.exe" /L /C:"192.168.132.98" >nul
if errorlevel 1 (
    echo This launcher requires LOCAL IPv4 192.168.132.98.
    echo Connect to the hotspot first. If the IP changed, this file must be updated.
    echo Do not use the other computer's launcher.
    pause
    exit /b 1
)
echo Game-only LAN address: 192.168.132.98. VMware adapters remain enabled.
start "Lyra hotspot LAN" "%~dp0LyraGame.exe" /Game/System/FrontEnd/Maps/L_LyraFrontEnd -windowed -ResX=1280 -ResY=720 -port=7777 -log -forcelogflush -ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null -MULTIHOME=192.168.132.98 -LogCmds="LogTemp Verbose,LogOnlineSession Verbose,LogCommonSession Verbose" -ExecCmds="SOCKETSUB GETLOCALHOST,SOCKETSUB GETBINDADDR,SOCKETSUB GETADAPTERS"