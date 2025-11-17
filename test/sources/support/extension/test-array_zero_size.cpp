
// --- Kartonagnick/compile                           [test-array_zero_size.cpp]
// [2025-11-17][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)              [test-array_zero_size.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_ARRAY_ZERO_SIZE
#include <compile/support.hpp>
#ifdef dHAS_ARRAY_EMTY_SIZE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_ZERO_SIZE_ARRAY
#define dTEST_TAG tdd

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Wpedantic"
#endif

//==============================================================================
//==============================================================================

TEST_COMPONENT(001) 
{
    typedef int arr1[0];
    typedef int arr2[0][1];

    arr1* p1 = 0;
    arr2* p2 = 0;

    ASSERT_FALSE(p1);
    ASSERT_FALSE(p2);
}

//==============================================================================
//==============================================================================
#endif // dHAS_ARRAY_EMTY_SIZE
#endif // TEST_SUPPORT_ARRAY_ZERO_SIZE
