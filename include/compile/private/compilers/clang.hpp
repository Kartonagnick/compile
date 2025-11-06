
// --- Kartonagnick/compile                                          [clang.hpp]
// [2025-11-06][18:10:00] 003 Kartonagnick PRE
//   --- CastleOfDreams/compile                                      [clang.hpp]
//   [2023-03-08][19:00:00] 003 Kartonagnick
//   [2022-10-23][19:00:00] 002 Kartonagnick
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                           [clang.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dCOMPILE_CLANG_USED_
#define dCOMPILE_CLANG_USED_ 3
//==============================================================================
//==============================================================================

#if !defined(dX64) && !defined(dX32)
    #error unknown address-model
#endif

#if !defined(dCRT_VAL)
    #error unknown runtime-c++
#endif

// __clang_major__      - MAJOR
// __clang_minor__      - MINOR
// __clang_patchlevel__ - PATCH

#define dCOMPILER_INT (__clang_major__ * 10000  + __clang_minor__ * 100  + __clang_patchlevel__)
#define dCOMPILER_VER __clang_major__.__clang_minor__.__clang_patchlevel__
#ifndef dCOMPILER_TAG
    #define dCOMPILER_TAG clang
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
        dPRAGMA_MESSAGE("clang: " dSSTRINGIZE(dCOMPILER_VER)) 
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_CLANG_USED_
