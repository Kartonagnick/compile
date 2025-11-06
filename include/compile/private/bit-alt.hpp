
// --- Kartonagnick/compile                                        [bit-alt.hpp]
// [2025-11-06][18:10:00] 001 Kartonagnick PRE
//   based on the story:
//      https://sourceforge.net/p/predef/wiki/Architectures
//      https://jdebp.uk/FGA/predefined-macros-processor.html
//      https://microsin.net/programming/pc/msvc-predefined-macros.html
//      https://www.boost.org/doc/libs/master/libs/predef/doc/index.html
//      https://www.ibm.com/docs/en/cloud-paks/z-modernization-stack/2023.4.1?topic=features-macros-related-compiler-option-settings
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_BIT_ALTERNATE_USED_ 
#define dCOMPILE_BIT_ALTERNATE_USED_ 1

// This file has not been tested and is for historical reference only.

//==============================================================================
//==============================================================================

//                  MSVC++            GCC,Clang,Intel
#if defined(__IA64__) || _M_IA64 || defined(__ia64__) 
    // Itanium/Intel Architecture 64
    #define dX64 1

//    OpenWatcom     MSVC++   MSVC++ compatibility with older compilers   // GCC,Clang,Intel
#elif __X86_64__   || _M_X64            || _M_AMD64                     || defined(__x86_64__) 

	// x86-64/IA32e
    #define dX64 1

//        OpenWatcom                DigitalMars                              MSVC++                       GCC,Clang,Intel
#elif __386__ || _M_I386 || (defined(__DMC__) && defined(_M_IX86))  || (defined(_MSC_VER) && _M_IX86)  || defined(__i386__) 

	// ... x86-32
    #if _M_IX86 >= 600
    	// Pentium Pro instructions and instruction scheduling
    #elif _M_IX86 >= 500
    	// Pentium instructions and instruction scheduling
    #elif _M_IX86 >= 400
    	// 80486 instructions and instruction scheduling
    #elif _M_IX86 >= 300
    	// 80386 instructions and instruction scheduling
    #else
    	// This must be GCC or Clang.
    #endif

    #define dX32 1

//          OpenWatcom                  DigitalMars
#elif __I86__ || _M_I86  || (defined(__DMC__) && !defined(_M_IX86)) 

	// ... x86-16
    #if _M_IX86 >= 600
    	// Pentium Pro instructions and instruction scheduling
    #elif _M_IX86 >= 500
    	// Pentium instructions and instruction scheduling
    #elif _M_IX86 >= 400
    	// 80486 instructions and instruction scheduling
    #elif _M_IX86 >= 300
    	// 80386 instructions and instruction scheduling
    #elif _M_IX86 >= 200 || _M_I286
    	// 80286 instructions and instruction scheduling
    #elif _M_IX86 >= 100
    	// 80186 instructions and instruction scheduling
    #else
    	// 8086 instructions and instruction scheduling
    #endif

    #define dX32 1

#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_BIT_ALTERNATE_USED_
