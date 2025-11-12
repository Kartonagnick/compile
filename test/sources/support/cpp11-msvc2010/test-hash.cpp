
// --- Kartonagnick/compile                                      [test-hash.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                         [test-hash.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)                  [test-hash.cpp]
//     [2021-03-10][13:28:40] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_HASH
#include <compile/support.hpp>
#ifdef dHAS_HASH

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_HASH
#define dTEST_TAG tdd

#include <utility>

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    const std::hash<int> h;
    dprint(std::cout << "hash = " << h(100) << '\n');
    (void) h;
}

//==============================================================================
//==============================================================================
#endif // dHAS_HASH
#endif // TEST_SUPPORT_HASH
