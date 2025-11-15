
// --- Kartonagnick/compile                                [test-abominable.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                   [test-abominable.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)               [test-abominable.cpp]
//     [2021-02-26][06:07:32] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_ABOMINABLE 
#include <compile/support.hpp>
#ifdef dHAS_ABOMINABLE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_ABOMINABLE
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

namespace
{
    typedef void func() const;

    struct some
    {
        void foo() const 
        {
            dprint(std::cout << __func__ << '\n');
        }
        func m_method;
    };

    func some::*m_method =  &some::foo;

} // namespace

TEST_COMPONENT(001)
{
    some s;
    (s.*m_method)();
}

//==============================================================================
//==============================================================================
#endif // dHAS_ABOMINABLE
#endif // TEST_SUPPORT_ABOMINABLE
