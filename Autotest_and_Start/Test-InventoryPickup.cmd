@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -InventoryPickup
set "InventoryPickupExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryPickupExitCode%
