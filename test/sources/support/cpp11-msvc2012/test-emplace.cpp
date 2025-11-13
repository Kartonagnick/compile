
// --- Kartonagnick/compile                                   [test-emplace.cpp]
// [2025-11-13][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                      [test-emplace.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                  [test-emplace.cpp]
//     [2021-02-26][06:07:32] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_HAS_EMPLACE
#include <compile/support.hpp>
#ifdef dHAS_EMPLACE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_EMPLACE
#define dTEST_TAG tdd

#include <vector>
#include <map>

TEST_COMPONENT(001) 
{
    std::vector<int> vec;
    vec.emplace_back(1);

    std::map<int, int> map;
    map.emplace(1, 1);
}

//==============================================================================
//==============================================================================
#endif // dHAS_EMPLACE
#endif // TEST_SUPPORT_HAS_EMPLACE



