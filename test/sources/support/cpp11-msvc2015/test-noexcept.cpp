
// --- Kartonagnick/compile                                     [test-noexcept.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                        [test-noexcept.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)                 [test-noexcept.cpp]
//     [2021-02-22][04:21:08] 002 Idrisov Denis R.
//     [2020-05-21][02:00:00] 001 Idrisov Denis R.

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_SUPPORT_NOEXCEPT

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD NOEXCEPT
#define dTEST_TAG tdd

#include <compile/support.hpp>

//==============================================================================
//==============================================================================

static void foo() noexcept {}

TEST_COMPONENT(001)
{
    foo();
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_NOEXCEPT
