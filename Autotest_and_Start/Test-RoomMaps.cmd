@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-RoomMaps.ps1" %*
set "result=%errorlevel%"
pause
exit /b %result%
