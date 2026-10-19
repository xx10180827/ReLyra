@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Start-LocalTwoPlayer.ps1" -UseFixture
pause
