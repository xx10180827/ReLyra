@echo off
powershell.exe -NoProfile -ExecutionPolicy Bypass -File "%~dp0Tools\InventoryMultiplayer\Test-InventoryMap.ps1" -TravelTo "/ShooterMaps/Maps/L_Expanse?Experience=B_ShooterGame_Elimination"
set "InventoryTravelExitCode=%ERRORLEVEL%"
pause
exit /b %InventoryTravelExitCode%
