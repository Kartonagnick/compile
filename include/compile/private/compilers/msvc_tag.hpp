
// --- Kartonagnick/compile                                       [msvc_ide.hpp]
// [2025-11-06][18:10:00] 004 Kartonagnick    
//   --- CastleOfDreams/compile                                   [msvc_tag.hpp]
//   [2025-07-09][17:40:00] 004 Kartonagnick
//   [2024-09-25][07:30:00] 003 Kartonagnick
//   [2024-07-15][16:10:00] 002 Kartonagnick
//   [2023-03-10][19:00:00] 001 Kartonagnick
//     --- CastleOfDreams/compile                                     [msvc.hpp]
//     [2023-02-17][19:00:00] 011 Kartonagnick

#pragma once
#ifndef dCOMPILE_MSVC_TAG_USED_ 
#define dCOMPILE_MSVC_TAG_USED_ 4

#ifndef _MSC_VER
    #error expected msvc compiler
#endif

#ifdef dCOMPILER_TAG
    #error 'dCOMPILER_TAG' is not compatible with this header
#endif

//==============================================================================
//==============================================================================

#if _MSC_VER > 1944
    #define dCOMPILER_TAG msvc202? (WARNING)
#elif _MSC_VER >= 1930 && _MSC_VER <= 1944
    #define dCOMPILER_TAG msvc2022
#elif _MSC_VER >= 1920 && _MSC_VER <= 1929 
    #define dCOMPILER_TAG msvc2019
#elif _MSC_VER >= 1910 && _MSC_VER <= 1916 
    #define dCOMPILER_TAG msvc2017
#elif _MSC_VER >= 1900 
    #define dCOMPILER_TAG msvc2015
#elif _MSC_VER >= 1800
    #define dCOMPILER_TAG msvc2013
#elif _MSC_VER >= 1700
    #define dCOMPILER_TAG msvc2012
#elif _MSC_VER >= 1600
    #define dCOMPILER_TAG msvc2010
#elif _MSC_VER >= 1500
    #define dCOMPILER_TAG msvc2008
#elif _MSC_VER >= 1400
    #define dCOMPILER_TAG msvc2005
#elif _MSC_VER >= 1310
    #define dCOMPILER_TAG msvc2003
#elif _MSC_VER >= 1300
    #define dCOMPILER_TAG msvc2002
#elif _MSC_VER >= 1200
    #define dCOMPILER_TAG msvc60
#elif _MSC_VER >= 1100
    #define dCOMPILER_TAG msvc50
#elif _MSC_VER >= 1020
    #define dCOMPILER_TAG msvc42
#elif _MSC_VER >= 1010
    #define dCOMPILER_TAG msvc41
#elif _MSC_VER >= 1000
    #define dCOMPILER_TAG msvc40
#elif _MSC_VER >= 900
    #define dCOMPILER_TAG msvc20
#elif _MSC_VER >= 800
    #define dCOMPILER_TAG msvc10
#elif _MSC_VER >= 700
    #define dCOMPILER_TAG msvc7
#elif _MSC_VER >= 600
    #define dCOMPILER_TAG msvc6
#else
    #error too old msvc not support
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_MSVC_TAG_USED_
