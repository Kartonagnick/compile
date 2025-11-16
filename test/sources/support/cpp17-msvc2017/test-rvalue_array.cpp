
// --- Kartonagnick/compile                              [test-rvalue_array.cpp]
// [2025-11-16][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                 [test-rvalue_array.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)             [test-rvalue_array.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_RVALUE_ARRAY
#include <compile/support.hpp>
#ifdef dHAS_RVALUE_ARRAY

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_RVALUE_ARRAY
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

TEST_COMPONENT(001) 
{
    char arr[2];
    auto&& ref = std::move(arr);
    (void)ref;
}

//==============================================================================
//==============================================================================
#endif // dHAS_RVALUE_ARRAY
#endif // TEST_SUPPORT_RVALUE_ARRAY

