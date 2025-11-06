
// --- Kartonagnick/compile                                      [cplusplus.hpp]
// [2025-11-06][18:10:00] 003 Kartonagnick    
//   --- CastleOfDreams/compile                                  [cplusplus.hpp]
//   [2024-07m-15][16:10:00] 003 Kartonagnick
//   [2022-10m-23][19:00:00] 002 Kartonagnick
//   [2022-08m-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                       [cplusplus.hpp]
//     [2021-06m-18][22:50:00] 001 Idrisov Denis R.

#pragma once
#ifndef dCOMPILE_CPLUSPLUS_USED_ 
#define dCOMPILE_CPLUSPLUS_USED_ 3

#ifndef dCOMPILE_MESSAGE_USED_
    #error "../message.hpp" must be included first
#endif

//==============================================================================
//==============================================================================

#if defined(dHIDE_MSVC_MESSAGE)
    #define dSHOW_BI_CPUSPLUS()

#elif !defined(__cplusplus)
    #define dSHOW_BI_CPUSPLUS() \
        dPRAGMA_MESSAGE("__cplusplus ....... not specified")
#else
    #define dSHOW_BI_CPUSPLUS_VALUE() \
        dPRAGMA_MESSAGE("__cplusplus ....... " dSSTRINGIZE(__cplusplus)) 

    #if __cplusplus >= 202302L 
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++23 ............. enabled") 
    #elif __cplusplus >= 202002L
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++20 ............. enabled") 
    #elif __cplusplus >= 201703L
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++17 ............. enabled") 
    #elif __cplusplus >= 201402L
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++14 ............. enabled") 
    #elif __cplusplus >= 201103L
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++11 ............. enabled") 
    #else
        #define dSHOW_BI_CPP_STANDART() \
            dPRAGMA_MESSAGE("c++old ............ enabled") 
    #endif

    #define dSHOW_BI_CPUSPLUS()   \
        dSHOW_BI_CPUSPLUS_VALUE() \
        dSHOW_BI_CPP_STANDART() 
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_MESSAGE_USED_
