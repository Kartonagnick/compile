
// --- Kartonagnick/compile                              [test-static_check.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                 [test-static_check.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick    
//     --- Kartonagnick/tools-features (closed)          [test-static_check.cpp]
//     [2021-02-28][01:43:52] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.
//     [2020-05-21][02:00:00] 001 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_STATIC_CHECK

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD STATIC_CHECK
#define dTEST_TAG tdd

#include <compile/support.hpp>

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    enum { value = 1 };
    dSTATIC_CHECK(STATIC_ASSERT_NOT_WORKED, value);
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_STATIC_CHECK
