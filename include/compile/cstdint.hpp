
// --- Kartonagnick/compile                                        [cstdint.hpp]
// [2025-11-11][25:50:00] 002 Kartonagnick    
//   based on the story:
//   --- workspace/utfconv                                           [macro.hpp]
//   [2025-10-13][07:00:00] 001 Kartonagnick
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_CSTDINT_USED_ 
#define dCOMPILE_CSTDINT_USED_ 2

#if !defined (_MSC_VER) || _MSC_VER >= 1600               // all; msvc{old-2008}
    #define dHAS_CSTDINT 1
    #include <cstdint>
#endif

//==============================================================================
//==============================================================================

namespace tools
{
    #ifdef dHAS_CSTDINT                                   // all; msvc{old-2008}
        typedef std::uint8_t   u8_t;
        typedef std::uint16_t u16_t;
        typedef std::uint32_t u32_t;
        typedef std::uint64_t u64_t;
    #else                                                     // msvc[old: 2008]
        typedef unsigned __int8   u8_t;
        typedef unsigned __int16 u16_t;
        typedef unsigned __int32 u32_t;
        typedef unsigned __int64 u64_t;
    #endif

} // namespace tools

//==============================================================================
//=== cstdint ==================================================================

#ifndef dUTFCONV_HAS_CSTDINT
    #ifndef INT8_MIN
        #define INT8_MIN    (-127i8 - 1)
    #endif
   
    #ifndef INT16_MIN
        #define INT16_MIN   (-32767i16 - 1)
    #endif
    
    #ifndef INT32_MIN
        #define INT32_MIN   (-2147483647i32 - 1)
    #endif
    
    #ifndef INT64_MIN
        #define INT64_MIN   (-9223372036854775807i64 - 1)
    #endif
    
    #ifndef INT8_MAX
        #define INT8_MAX    127i8
    #endif
    
    #ifndef INT16_MAX
        #define INT16_MAX   32767i16
    #endif
    
    #ifndef INT32_MAX
        #define INT32_MAX   2147483647i32
    #endif
    
    #ifndef INT64_MAX
        #define INT64_MAX   9223372036854775807i64
    #endif
    
    #ifndef UINT8_MAX
        #define UINT8_MAX   0xffui8
    #endif
    
    #ifndef UINT16_MAX
        #define UINT16_MAX  0xffffui16
    #endif
    
    #ifndef UINT32_MAX
        #define UINT32_MAX  0xffffffffui32
    #endif
    
    #ifndef UINT64_MAX
        #define UINT64_MAX  0xffffffffffffffffui64
    #endif
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_CSTDINT_USED_
