
// --- Kartonagnick/compile                             [test-static_assert.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                [test-static_assert.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)         [test-static_assert.cpp]
//     [2021-04-01][00:12:28] 003 Idrisov Denis R.
//     [2021-02-28][01:43:52] 002 Idrisov Denis R.
//     [2020-06-01][20:00:00] 001 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_STATIC_ASSERT

#define dTEST_COMPONENT compile, suport
#define dTEST_METHOD HAS_STATIC_ASSERT
#define dTEST_TAG tdd

#include <compile/support.hpp>

//==============================================================================
//==============================================================================

enum { value = 1 };

#if dHAS_STATIC_ASSERT
    static_assert(value, "'static_assert' not worked");
#endif

dSTATIC_ASSERT(STATIC_ASSERT_NOT_WORKED, value);

static void check_zone()
{
    dSTATIC_CHECK(STATIC_CHECK_NOT_WORKED, value);
}

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    check_zone();
}

TEST_COMPONENT(002)
{
    dSTATIC_ASSERT(STATIC_ASSERT_NOT_WORKED, value);
}

TEST_COMPONENT(003)
{
    dSTATIC_CHECK(STATIC_CHECK_NOT_WORKED, value);
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_STATIC_ASSERT
