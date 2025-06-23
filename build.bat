@echo off
echo Building Hack Tool...
cmake --build . --config Release
if %ERRORLEVEL% EQU 0 (
    echo Build successful! DLL created at Release/HackCheatTool.dll
    echo.
    echo Next steps:
    echo 1. Use an injector to inject the DLL into your game
    echo 2. Press INSERT to toggle the hack menu
    echo 3. Press END to exit the hack
) else (
    echo Build failed! Check the error messages above.
)
pause 