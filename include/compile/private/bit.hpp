
// --- Kartonagnick/compile                                            [bit.hpp]
// [2025-11-06][18:10:00] 001 Kartonagnick PRE
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_BIT_USED_ 
#define dCOMPILE_BIT_USED_ 1

//==============================================================================
//==============================================================================

#if defined(_WIN64) || defined(_M_X64) || defined(_M_IA64) || defined(_M_ARM64)
    // Microsoft:
    //   _WIN64  : x64, ARM64, ARM64EC
    //   _M_X64  : x64, ARM64EC
    //   _M_IA64 : Itanium Processor Family 64-bit processors
    //   _M_ARM64: ARM64
    #define dX64 1

#elif defined(__ia64__) || defined(__x86_64__)
    // GCC, Clang, and Intel's compiler:
    //   __ia64__  : IA-64 (a.k.a. Itanium)
    //   __x86_64__: 64-bit x86 instruction set is the target
    #define dX64 1

#elif defined(__aarch64__) 
    // Clang:
    //   __aarch64__: ARM64
    #define dX64 1

#elif defined(__X86_64__)
    // OpenWatcom:
    #define dX64 1

#elif defined(__powerpc64__) || defined (__ppc64__)
    // PowerPC:
    #define dX64 1

#elif defined(__LP64__) 
    // IBM C/C++ 
    #define dX64 1

#else
    #define dX32 1
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_BIT_USED_
