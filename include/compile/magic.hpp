
// --- Kartonagnick/compile                                  [compile/magic.hpp]
// [2025-11-10][21:10:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile                              [compile/magic.hpp]
//   [2023-06-15][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-frized (closed)                 [pragma/magic.hpp]
//     [2019-04-12] Idrisov Denis R.
//       --- Kartonagnick/tools-fixed (closed)                [pragma/magic.hpp]
//       [2019-04-12] Idrisov Denis R.
//       NOTE: without unit-test

//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_MAGIC_USED_ 
#define dCOMPILE_MAGIC_USED_ 1

//==============================================================================
//==============================================================================

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

#if defined(__GNUC__)                                                   // [gcc]
    #define dMAGIC(...) \
        _Pragma(dSTRINGIZE(message #__VA_ARGS__)) __VA_ARGS__

#elif defined(_MSC_VER)                                                // [msvc]
    #define dMAGIC(...) \
        __pragma(message(dSTRINGIZE(__VA_ARGS__))) __VA_ARGS__
#else
     #error: compiler not support
#endif

//==============================================================================
//==============================================================================

#if 0

// USAGE:
#include <iostream>
using namespace std;
 
int main()
{
    cout<<"begin programm\n";
    int Fedya = 40;
    dMAGIC(cout << "Fedya = " << Fedya << endl);
}

#endif
        
//==============================================================================
//==============================================================================
#endif // dCOMPILE_MAGIC_USED_
