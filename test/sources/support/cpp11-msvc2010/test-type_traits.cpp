
// --- Kartonagnick/compile                               [test-type_traits.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                  [test-type_traits.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)           [test-type_traits.cpp]
//     [2021-03-04][01:29:32] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_TYPE_TRAITS
#include <compile/support.hpp>

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_TYPE_TRAITS
#define dTEST_TAG tdd

#include <string>

#ifdef dHAS_TYPE_TRAITS
    #include <type_traits>
#endif

//==============================================================================
//==============================================================================

namespace
{
    #ifdef dHAS_TYPE_TRAITS
        enum { value = std::is_array<char[1]>::value };
        static_assert(value, "MUST_BE_ARRAY");
    #endif

} // namespace

//==============================================================================
//==============================================================================

TEST_COMPONENT(000)
{
    const std::string v = dSSTRINGIZE(dTRAIT);
    dprint(std::cout << "dTRAIT: " << v << '\n');

    #ifdef dHAS_TYPE_TRAITS
        ASSERT_TRUE(v == "std");
    #else
        ASSERT_TRUE(v == "tools");
    #endif
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_TYPE_TRAITS
