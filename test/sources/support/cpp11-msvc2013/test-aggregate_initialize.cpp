
// --- Kartonagnick/compile                      [test-aggregate_initialize.cpp]
// [2025-11-14][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)         [test-aggregate_initialize.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)     [test-aggregate_initialize.cpp]
//     [2021-03-15][18:27:18] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_AGGREGATE_INITIALIZE
#include <compile/support.hpp>
#ifdef dHAS_AGGREGATE_INITIALIZE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_AGGREGATE_INITIALIZE
#define dTEST_TAG tdd

#include <string>
#include <vector>
#include <list>

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    const std::list<std::string> 
        example = { "aaabbb", "cccddd", "fffggg", "hhhjjj" };
    ASSERT_TRUE(example.size() == 4);
}

TEST_COMPONENT(002)
{
    const std::vector<std::string> 
        example = { "aaabbb", "cccddd", "fffggg", "hhhjjj" };
    ASSERT_TRUE(example.size() == 4);
}

//==============================================================================
//==============================================================================
#endif // dHAS_AGGREGATE_INITIALIZE
#endif // TEST_SUPPORT_AGGREGATE_INITIALIZE
