@echo off
cd /d "%~dp0"
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -WeaponSync
if errorlevel 1 goto done
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Test-NetworkScene.ps1" -WeaponSync -PacketLag 80 -PacketLoss 1
:done
pause
