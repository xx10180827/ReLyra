@echo off
powershell -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Start-RoomMenu.ps1" -TwoWindows %*
if errorlevel 1 pause
