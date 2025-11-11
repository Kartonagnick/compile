
// --- Kartonagnick/compile                                      [dfunction.hpp]
// [2025-11-11][04:30:00] 002 Kartonagnick PRE
//   --- CastleOfDreams/compile                         [features/dfunction.hpp]
//   [2023-03-19][19:00:00] 002 Kartonagnick
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)               [tools/dfunction.hpp]
//     [2021-02-26][02:22:26] Idrisov Denis R.
//     [2019-04-29][18:40:18] Idrisov Denis R.
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_DFUNCTION_USED_ 
#define dCOMPILE_DFUNCTION_USED_ 2

//==============================================================================
//=== dFUNCTION ================================================================
    
//--- cross-platform macro display function name
#if defined(__GNUC__) || defined(__MINGW32__) || defined(__MINGW__)
    #define dFUNCTION __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
    #define dFUNCTION __FUNCSIG__
#else
    #define dFUNCTION __FUNCTION__
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_DFUNCTION_USED_
