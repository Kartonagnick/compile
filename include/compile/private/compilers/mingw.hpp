
// --- Kartonagnick/compile                                          [mingw.hpp]
// [2025-11-06][18:10:00] 003 Kartonagnick    
//   --- CastleOfDreams/compile                                      [mingw.hpp]
//   [2023-03-08][19:00:00] 003 Kartonagnick
//   [2022-10-23][19:00:00] 002 Kartonagnick
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                           [mingw.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dCOMPILE_MINGW_USED_
#define dCOMPILE_MINGW_USED_ 3
//==============================================================================
//==============================================================================

#if !defined(dX64) && !defined(dX32)
    #error unknown address-model
#endif

#if !defined(dCRT_VAL)
    #error unknown runtime-c++
#endif

#ifndef __GNUC__
    #error not specified: __GNUC__
#endif

// __GNUC__            - MAJOR
// __GNUC_MINOR__      - MINOR
// __GNUC_PATCHLEVEL__ - PATCH

#define dCOMPILER_INT (__GNUC__ * 10000  + __GNUC_MINOR__ * 100  + __GNUC_PATCHLEVEL__)
#define dCOMPILER_VER __GNUC__.__GNUC_MINOR__.__GNUC_PATCHLEVEL__

#ifndef dCOMPILER_TAG
    #define dCOMPILER_TAG mingw
#endif

// example: 
#if dCOMPILER_INT > 30200
    // 3.2.X
#endif

//==============================================================================
//=== SHOW CONFIG-DATA =========================================================

#if defined(dHIDE_MSVC_MESSAGE)
    #define dSHOW_BI_COMPILER()
#else
    #ifndef dCOMPILE_MESSAGE_USED_
        #error "../message.hpp" must be included first
    #endif
    #define dSHOW_BI_COMPILER() \
        dPRAGMA_MESSAGE("mingw: " dSSTRINGIZE(dCOMPILER_VER)) 
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_MINGW_USED_
