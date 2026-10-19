@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-InventoryData.ps1"
set "TestExitCode=%ERRORLEVEL%"
pause
exit /b %TestExitCode%
