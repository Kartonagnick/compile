
// --- Kartonagnick/compile                          [test-auto_return_type.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)             [test-auto_return_type.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_AUTO_RETURN_TYPE
#include <compile/support.hpp>
#ifdef dHAS_ARRAY_EMTY_SIZE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_AUTO_RETURN_TYPE
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

namespace
{
    template<typename Lhs, typename Rhs>
    auto add(const Lhs& lhs, const Rhs& rhs)
        { return lhs + rhs; }
}

TEST_COMPONENT(001) 
{
    auto re = add(1, 1.2);
    using x = decltype(re);
    using check = std::is_same<x, double>;
    static_assert(check::value, "must be double");
    EXPECT_DOUBLE_EQ(re, 2.2);
}

//==============================================================================
//==============================================================================
#endif // dHAS_ARRAY_EMTY_SIZE
#endif // TEST_SUPPORT_AUTO_RETURN_TYPE

