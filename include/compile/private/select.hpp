
// --- Kartonagnick/compile                                         [select.hpp]
// [2025-11-06][18:10:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile                                     [select.hpp]
//   [2022-08m-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                          [select.hpp]
//     [2021-06m-18][22:50:00] 001 Idrisov Denis R.
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_SELECT_USED_ 
#define dCOMPILE_SELECT_USED_ 1

#if !defined(dX64) && !defined(dX32)
    #include "bit.hpp"
#endif

#include "compilers.hpp"

//==============================================================================
//==============================================================================

#if defined(dMSVC_COMPILER)
    #include "compilers/msvc.hpp"
#elif defined(dMINGW_COMPILER)
    #include "compilers/mingw.hpp"
#elif defined(dCLANG_COMPILER)
    #include "compilers/clang.hpp"
#elif defined(dGCC_COMPILER)
    #include "compilers/gcc.hpp"
#else
    #error unknown compiler
#endif

#include "compilers/zfinal.hpp"

//==============================================================================
//==============================================================================
#endif // dCOMPILE_SELECT_USED_
