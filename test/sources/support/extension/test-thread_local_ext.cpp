
// --- Kartonagnick/compile                          [test-thread_local_ext.cpp]
// [2025-11-17][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                 [test-thread_local.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)             [test-thread_local.cpp]
//     [2021-03-04][19:34:26] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_THREAD_LOCAL
#include <compile/support.hpp>

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD THREAD_LOCAL_EXTENSION
#define dTEST_TAG tdd

#include <string>

//==============================================================================
//==============================================================================

namespace
{
    dTHREAD_LOCAL_EXTENSION int value = 10;
}

TEST_COMPONENT(001)
{
    ASSERT_TRUE(value == 10);
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_THREAD_LOCAL
