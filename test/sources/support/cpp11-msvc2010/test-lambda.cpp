
// --- Kartonagnick/compile                                    [test-lambda.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                       [test-lambda.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)                [test-lambda.cpp]
//     [2021-03-10][13:28:40] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_LAMBDA
#include <compile/support.hpp>
#ifdef dHAS_LAMBDA

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_LAMBDA
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    const auto lambda = [] { return true; };
    ASSERT_TRUE(lambda());
}

//==============================================================================
//==============================================================================
#endif // dHAS_LAMBDA
#endif // TEST_SUPPORT_LAMBDA
