
// --- Kartonagnick/compile                          [test-template_default.cpp]
// [2025-11-14][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)             [test-template_default.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)         [test-template_default.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_TEMPLATE_DEFAULT
#include <compile/support.hpp>
#ifdef dHAS_TEMPLATE_FUNCTION_DEFAULT_PARAM

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_TEMPLATE_FUNCTION_DEFAULT_PARAM
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

namespace 
{
    template<class T, size_t n = T::count>
    void foo(T) {}

} // namespace

TEST_COMPONENT(001)
{
    struct some
    {
        enum { count = 1 };
    };

    some obj;
    foo(obj);
}

//==============================================================================
//==============================================================================
#endif // dHAS_TEMPLATE_FUNCTION_DEFAULT_PARAM
#endif // TEST_SUPPORT_TEMPLATE_DEFAULT
