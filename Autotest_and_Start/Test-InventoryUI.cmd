@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -InventoryUI
set "InventoryUIExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryUIExitCode%
