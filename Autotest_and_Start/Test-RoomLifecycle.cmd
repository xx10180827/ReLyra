@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-RoomLifecycle.ps1" %*
set "result=%errorlevel%"
pause
exit /b %result%
