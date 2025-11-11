
// --- Kartonagnick/compile                                          [wchar.hpp]
// [2025-11-11][25:50:00] 002 Kartonagnick PRE
//   based on the story:
//   --- workspace/utfconv                                           [macro.hpp]
//   [2025-10-13][07:00:00] 001 Kartonagnick
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_WCHAR_USED_ 
#define dCOMPILE_WCHAR_USED_ 2

#include "cstdint.hpp"
#include <cwchar>

//==============================================================================
//=== wchar_t ==================================================================

#if WCHAR_MAX == INT8_MAX
    #define dWCHAR_8BIT
#elif WCHAR_MAX == INT16_MAX
    #define dWCHAR_16BIT
#elif WCHAR_MAX == INT32_MAX
    #define dWCHAR_32BIT
#elif WCHAR_MAX == INT64_MAX
    #define dWCHAR_64BIT
#elif WCHAR_MAX == UINT8_MAX 
    #define dWCHAR_8BIT
#elif WCHAR_MAX == UINT16_MAX
    #define dWCHAR_16BIT
#elif WCHAR_MAX == UINT32_MAX
    #define dWCHAR_32BIT
#elif WCHAR_MAX == UINT64_MAX
    #define dWCHAR_64BIT
#else
    #error "unknown size of wchar_t"
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_WCHAR_USED_
