@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -Render -InventoryRules -InventorySnapshots -InventoryOperations
set "InventoryTestExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryTestExitCode%
