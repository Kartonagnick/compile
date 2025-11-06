
// --- Kartonagnick/compile                                      [compilers.hpp]
// [2025-11-06][18:10:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile                                  [compilers.hpp]
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                       [compilers.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dCOMPILE_COMPILERS_USED_ 
#define dCOMPILE_COMPILERS_USED_ 1

//==============================================================================
//=== dCOMPILER ================================================================

#if defined(_MSC_VER)
    #define dMSVC_COMPILER 1
#elif defined(__MINGW__) || defined(__MINGW32__) || defined(__MINGW64__)
    #define dMINGW_COMPILER 1
#elif defined(__clang__)
    #define dCLANG_COMPILER 1
#elif defined(__GNUC__) || defined(__GNUG__)
    #define dGCC_COMPILER 1
#else
    #error UNKNOWN COMPILER
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_COMPILERS_USED_
