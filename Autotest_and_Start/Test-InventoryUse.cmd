@echo off
cd /d "%~dp0"
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -InventoryUse
pause
