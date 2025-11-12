
// --- Kartonagnick/compile                                  [test-decltype.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                     [test-decltype.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)              [test-decltype.cpp]
//     [2021-03-10][13:28:40] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_DECLTYPE
#include <compile/support.hpp>
#ifdef dHAS_DECLTYPE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_DECLTYPE
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

namespace
{
    struct {} obj1;
    decltype(obj1) obj2;

} // namespace

void unit_test_decltype()
{
    (void) obj2;
}

//==============================================================================
//==============================================================================
#endif // dHAS_DECLTYPE
#endif // TEST_SUPPORT_DECLTYPE
