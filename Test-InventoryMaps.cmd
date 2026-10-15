@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Tools\InventoryMultiplayer\Test-InventoryMaps.ps1"
set "InventoryMapsExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryMapsExitCode%
