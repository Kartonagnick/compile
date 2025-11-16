
// --- Kartonagnick/compile                                     [test-cpp14.cpp]
// [2025-11-16][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                        [test-cpp14.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                    [test-cpp14.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_CPP14
#include <compile/support.hpp>
#ifdef dHAS_CPP14

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_CPP14
#define dTEST_TAG tdd

#ifndef dHAS_CONSTEXPR_CPP14
    #error must be defined
#endif

//==============================================================================
//==============================================================================

namespace 
{
    template<class s>
    dCONSTEXPR_CPP14 size_t len(s&& text) noexcept
    {
        assert(text);
        const auto* p = text;
        while (*p != 0)
            ++p;
        return static_cast<size_t>(p - text);
    }
    constexpr const char* text = "1234";
    static_assert(len(text) == 4, "expected 4");

} // namespace

//==============================================================================
//==============================================================================
#endif // dHAS_CPP14
#endif // TEST_SUPPORT_CPP14
