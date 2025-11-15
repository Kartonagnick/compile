
// --- Kartonagnick/compile                                     [test-cpp11.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                        [test-cpp11.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                    [test-cpp11.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_CPP11
#include <compile/support.hpp>
#ifdef dHAS_CPP11

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_CPP11
#define dTEST_TAG tdd

#ifndef dHAS_CONSTEXPR_CPP11
    #error must be defined
#endif

//==============================================================================
//==============================================================================

namespace 
{
    constexpr size_t len1(const char* p, const size_t i = 0) noexcept
        { return p[i] == 0 ? i : len1(p, i + 1); }

    dCONSTEXPR_CPP11 size_t len2(const char* p, const size_t i = 0) noexcept
        { return p[i] == 0 ? i : len2(p, i + 1); }

    dCONSTEXPR_CPP11 const char* ptr = "1234";
    static_assert(len1(ptr) == 4, "expected 4");
    static_assert(len2(ptr) == 4, "expected 4");

} // namespace

//==============================================================================
//==============================================================================
#endif // dHAS_CPP11
#endif // TEST_SUPPORT_CPP11

