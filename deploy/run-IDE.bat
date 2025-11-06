@echo off & call :checkParent || exit /b 1

rem --- Kartonagnick/compile                                [deploy/run-IDE.bat]
rem [2025-11-06][08:10:00] 001 Kartonagnick    
rem   --- local/mygtest                                     [deploy/run-IDE.bat]
rem   [2023-08-05][19:00:00] 001 Kartonagnick
rem ============================================================================
rem ============================================================================

:main
  setlocal
  chcp 65001 >nul
  call :setDepth

  call "%~dp0ver.bat"
  call :echo0 [RUN-MSVC] run... v%eMAKE_VERSION%

::set "eDEBUG=ON"
::set "eTRACE=ON"

  set "IDE=VisualStudio"
::set "IDE=QtCreator"

::set "order=msvc2008:64:release:static"
::set "order=msvc2010:32:release:static"
::set "order=msvc2012:64:release:static"
::set "order=msvc2013:32:release:static"
::set "order=msvc2015:64:release:static"
::set "order=msvc2017:32:release:static"
::set "order=msvc2019:64:release:static"
  set "order=msvc2022:64:release:static"

  call "%eDIR_BAT_ENGINE%\run.bat" ^
    "--generate: cmake-makefiles"  ^
    "--configurations: %order%"    ^
    "--defines: UNSTABLE_RELEASE"  ^
    "--defines: _USE_32BIT_TIME_T"

  call "%eDIR_BAT_ENGINE%\run.bat" ^
    "--runIDE: %IDE%"              ^
    "--configurations: %order%"
:success
  call :echo0 [MAKE] completed successfully
  exit /b 0
:failed
  call :echo0 [MAKE] finished with erros
exit /b 1

rem ============================================================================
rem ============================================================================

:findWorkspaceD
  setlocal
  call :makeSearchListD
  call :normalizeD enumWorkspace "."
  set "enumWorkspace=%enumWorkspace%;%eDISKS%"
:loopWorkspace
  for /F "tokens=1* delims=;" %%a in ("%enumWorkspace%") do (
    call :doFindWorkspaceD "%%~a" && goto :loopWorkspaceSuccess
    set "enumWorkspace=%%~b"
  )
  if defined enumWorkspace goto :loopWorkspace
  echo [ERROR] 'WorkSpace' not found
  exit /b 1
:loopWorkspaceSuccess
  call :normalizeD "eDIR_WORKSPACE" "%eDIR_WORKSPACE%"
  echo found: %eDIR_WORKSPACE%
  endlocal & (set "eDIR_WORKSPACE=%eDIR_WORKSPACE%") 
  exit /b 0
:makeSearchListD
  set "eDISKS="
  rem enumerate list of disks
  set "cmd=WMIC LogicalDisk Get Name"
  set "run=%cmd% /value 2^> nul ^| find "=""
  for /f "usebackq tokens=*" %%a in (`%run%`) do (call :makeDiskList-add "%%~a")
  exit /b
:makeDiskList-add
  set "%~1"
  call :normalizeD "dir" "%Name%\workspace"
  set "eDISKS=%eDISKS%;%dir%"
  if not defined eTRACE exit /b
  echo find in: %dir%
exit /b

:doFindWorkspaceD
  if defined eDIR_WORKSPACE (exit /b)
  if not defined eWORKSPACE_SYMPTOMS (
    set "eWORKSPACE_SYMPTOMS=3rd_party;programs;scripts"
  ) 
  setlocal
  set "dir_start=%~1"
  if not defined dir_start (set "dir_start=%CD%")
  if not exist "%dir_start%" (goto :findWorkspaceFailed)
  set "DRIVE=%dir_start:~0,3%"
  pushd "%dir_start%" 
:loopFindWorkspace
  call :checkWorkspaceSymptoms
  if not errorlevel 1    (goto :findWorkspaceSuccess)
  if "%DRIVE%" == "%CD%" (goto :findWorkspaceFailed )
  cd ..
  goto :loopFindWorkspace
  exit /b
:findWorkspaceSuccess
  endlocal & set "eDIR_WORKSPACE=%CD%"
  exit /b 0
:findWorkspaceFailed
  endlocal
  exit /b 1
:checkWorkspaceSymptoms
  set "enumerator=%eWORKSPACE_SYMPTOMS%"
:loopWorkspaceSymptoms
  for /F "tokens=1* delims=;" %%a in ("%enumerator%") do (
    for /F "tokens=*" %%a in ("%%a") do (
      if not exist "%CD%\%%a" exit /b 1
    )
    set "enumerator=%%b"
  )
  if defined enumerator goto :loopWorkspaceSymptoms
exit /b 

rem ============================================================================
rem ============================================================================

:setDepth
  set "eDEEP0="
  if defined eINDENT (set /a "eINDENT+=1") else (set "eINDENT=0")
  for /l %%i in (1, 1, %eINDENT%) do (call set "eDEEP0=  %%eDEEP0%%")
  set "eDEEP1=  %eDEEP0%"
  set "eDEEP2=  %eDEEP1%"
  set "eDEEP3=  %eDEEP2%"
  exit /b
:echo0
  echo %eDEEP0%%* & exit /b
:echo1
  echo %eDEEP1%%* & exit /b
:echo2
  echo %eDEEP2%%* & exit /b
:echo3
  echo %eDEEP3%%* & exit /b
:debug1
  if not defined eDEBUG (exit /b)
  echo %eDEEP1%%* & exit /b
:debug2
  if not defined eDEBUG (exit /b)
  echo %eDEEP2%%* & exit /b
:debug3
  if not defined eDEBUG (exit /b)
  echo %eDEEP3%%*
exit /b

rem ............................................................................

:normalizeD
  set "%~1=%~dpfn2"
exit /b

:checkParent
  if errorlevel 1 (echo [ERROR] was broken at launch & exit /b 1)
  call :setOwnerD      || exit /b 1
  call :findWorkspaceD || exit /b 1
  call :setBatScriptsD || exit /b 1
  call :setBatEngineD  || exit /b 1
  exit /b
:setOwnerD
  if defined eDIR_OWNER (exit /b)
  echo off & cls & echo. & echo.
  call :normalizeD eDIR_OWNER "%~dp0."
  exit /b
:setBatScriptsD
  if defined eDIR_BAT_SCRIPTS (exit /b)
  set "eDIR_BAT_SCRIPTS=%eDIR_WORKSPACE%\scripts\bat"
  exit /b
:setBatEngineD
  if defined eDIR_BAT_ENGINE (exit /b)
  set "eDIR_BAT_ENGINE=%eDIR_BAT_SCRIPTS%\engine"
exit /b
