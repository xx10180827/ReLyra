@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -InventoryDrop
set "InventoryDropExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryDropExitCode%
