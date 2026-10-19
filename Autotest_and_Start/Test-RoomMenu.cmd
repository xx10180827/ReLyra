@echo off
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-RoomMenu.ps1" %*
set "result=%errorlevel%"
pause
exit /b %result%
