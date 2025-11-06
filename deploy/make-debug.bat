@echo off & cls & echo. & echo.

rem --- Kartonagnick/compile                             [deploy/make-debug.bat]
rem [2025-11-06][08:10:00] 001 Kartonagnick    
rem   --- local/mygtest                                  [deploy/make-debug.bat]
rem   [2023-08-05][19:00:00] 001 Kartonagnick
rem ============================================================================
rem ============================================================================

echo [START] please wait...
::set "eTRACE=ON"
::set "eDEBUG=ON"
call "%~dp0make.bat" > "%~dp0log.txt" 2>&1
echo [DONE]

rem ============================================================================
rem ============================================================================
