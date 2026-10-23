@echo off
setlocal
cd /d "%~dp0.."
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "Tools\InventoryMultiplayer\Build-DevelopmentPackage.ps1"
if errorlevel 1 (
    echo Build failed. See the reported log directory.
    pause
    exit /b 1
)
echo Build completed. Open package to find the timestamped Windows folder.
pause
