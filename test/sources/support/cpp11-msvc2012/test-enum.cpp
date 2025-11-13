
// --- Kartonagnick/compile                                      [test-enum.cpp]
// [2025-11-13][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                         [test-enum.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                     [test-enum.cpp]
//     [2021-02-26][06:07:32] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_ENUM
#include <compile/support.hpp>
#if dHAS_ENUM_CLASS

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_ENUM_CLASS
#define dTEST_TAG tdd

enum eFLAGS1       : int { eSAMPLE  = 0 };
enum class eFLAGS2 : int { eEXAMPLE = 0 };

//==============================================================================
//==============================================================================
#endif // dHAS_ENUM_CLASS
#endif // TEST_SUPPORT_ENUM



