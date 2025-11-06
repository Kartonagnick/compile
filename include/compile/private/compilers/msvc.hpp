
// --- Kartonagnick/compile                                   [compilers/msvc.hpp]
// [2025-11-06][18:10:00] 015 Kartonagnick PRE
//   --- CastleOfDreams/compile                               [compilers/msvc.hpp]
//   [2023-07-18][19:00:00] 014 Kartonagnick
//     ... (many versions) ...
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/buid_info (closed)                              [msvc.hpp]
//     [2021-06-18][22:50:00] 001 Idrisov Denis R.
//================================================================================
//================================================================================

#pragma once
#ifndef dCOMPILE_MSVC_USED_ 
#define dCOMPILE_MSVC_USED_ 15

#ifndef _MSC_VER
    #error expected msvc compiler
#endif

#ifndef dCOMPILER_TAG
    #include "msvc_tag.hpp"
#endif

#ifndef dVERSION_IDE
    #ifdef CMAKE_VS_VERSION
        #define dVERSION_IDE CMAKE_VS_VERSION
    #endif
#endif

//==============================================================================
//=== ADDRESS-MODEL ============================================================

#ifdef _WIN64
    #define dX64 1
#else
    #define dX32 1
#endif

//==============================================================================
//=== RUNTIME-C++ MD/MT ========================================================

#ifdef NDEBUG
    #ifdef _DLL
        #define dCRT_VAL 1 // MD
    #else
        #define dCRT_VAL 2 // MT
    #endif
#else
    #ifdef _DLL
        #define dCRT_VAL 3 // MDd
    #else
        #define dCRT_VAL 4 // MTd
    #endif
#endif

//==============================================================================
//=== SHOW CONFIG-DATA =========================================================

#if defined(dHIDE_MSVC_MESSAGE)
    #define dSHOW_BI_COMPILER()
#else
    #ifndef dCOMPILE_MESSAGE_USED_
        #error "../message.hpp" must be included first
    #endif

    #ifdef dVERSION_IDE
        #define dSHOW_BI_COMPILER_TAG() \
            dPRAGMA_MESSAGE(dSSTRINGIZE(dCOMPILER_TAG) " .......... " dSSTRINGIZE(dVERSION_IDE)) 
    #else
        #define dSHOW_BI_COMPILER_TAG()
    #endif

    #define dSHOW_BI_MSC_FULL_VER() \
        dPRAGMA_MESSAGE("_MSC_FULL_VER ..... " dSSTRINGIZE(_MSC_FULL_VER)) 

    #ifdef _MSVC_LANG
        #define dSHOW_BI_MSVC_LANG() \
            dPRAGMA_MESSAGE("_MSVC_LANG ........ " dSSTRINGIZE(_MSVC_LANG)) 
    #else
        #define dSHOW_BI_MSVC_LANG() \
            dPRAGMA_MESSAGE("_MSVC_LANG ........ not specified") 
    #endif

    #if defined(_MSC_EXTENSIONS) && _MSC_EXTENSIONS != 0
        #define dSHOW_BI_MSC_EXTENSIONS() \
            dPRAGMA_MESSAGE("_MSC_EXTENSIONS ... enabled") 
    #else
        #define dSHOW_BI_MSC_EXTENSIONS() \
            dPRAGMA_MESSAGE("_MSC_EXTENSIONS ... disabled") 
    #endif

    #define dSHOW_BI_COMPILER() \
        dSHOW_BI_COMPILER_TAG() \
        dSHOW_BI_MSC_FULL_VER() \
        dSHOW_BI_MSVC_LANG()    \
        dSHOW_BI_MSC_EXTENSIONS()

#endif // !dHIDE_MSVC_MESSAGE

//==============================================================================
//==============================================================================
#endif // dCOMPILE_MSVC_USED_
