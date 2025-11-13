
// --- Kartonagnick/compile                          [test-array_empty_size.cpp]
// [2025-11-13][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)             [test-array_empty_size.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick    
//     --- Kartonagnick/tools-types (closed)         [test-array_empty_size.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_ARRAY_EMTY_SIZE
#include <compile/support.hpp>
#ifdef dHAS_ARRAY_EMPTY_SIZE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_ARRAY_EMTY_SIZE
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

TEST_COMPONENT(001) 
{
    typedef int arr1[];
    typedef int arr2[][1];

    arr1* p1 = 0;
    arr2* p2 = 0;

    ASSERT_FALSE(p1);
    ASSERT_FALSE(p2);
}

//==============================================================================
//==============================================================================
#endif // dHAS_ARRAY_EMPTY_SIZE
#endif // TEST_SUPPORT_ARRAY_EMTY_SIZE

