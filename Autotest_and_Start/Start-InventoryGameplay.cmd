@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0..\Tools\InventoryMultiplayer\Start-InventoryGameplay.ps1"
if errorlevel 1 pause
