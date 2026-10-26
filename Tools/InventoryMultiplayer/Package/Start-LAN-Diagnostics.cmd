@echo off
setlocal
cd /d "%~dp0"
if not exist "LyraGame.exe" (
    echo Copy this launcher beside the packaged LyraGame.exe in the Windows folder.
    pause
    exit /b 1
)
start "Lyra LAN diagnostics" "%~dp0LyraGame.exe" /Game/System/FrontEnd/Maps/L_LyraFrontEnd -windowed -ResX=1280 -ResY=720 -port=7777 -log -forcelogflush -ini:Engine:[OnlineSubsystem]:DefaultPlatformService=Null -LogCmds="LogTemp Verbose,LogOnlineSession Verbose,LogCommonSession Verbose,LogLyraRoomDiscovery Verbose" -ExecCmds="SOCKETSUB GETLOCALHOST,SOCKETSUB GETBINDADDR,SOCKETSUB GETADAPTERS"
