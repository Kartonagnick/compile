
// --- Kartonagnick/compile                              [pragma/test-magic.cpp]
// [2025-11-10][21:10:00] 002 Kartonagnick PRE
//   --- CastleOfDreams/compile                          [pragma/test-magic.cpp]
//   [2023-06-15][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_PRAGMA_MAGIC

#define dTEST_COMPONENT compile
#define dTEST_METHOD magic
#define dTEST_TAG tdd

#include <compile/magic.hpp>

//==============================================================================
//==============================================================================

namespace
{
    const char* foo(int, int) { return "test";  }

    template<class, class> struct sample
    {
        typedef int type;
    };

} // namespace

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    int Fedya = 40;
    dMAGIC(std::cout << "Fedya = " << Fedya << '\n');
}

TEST_COMPONENT(002)
{
    dMAGIC(std::cout << "Name: Fedya, Age: 40\n");
}

TEST_COMPONENT(003)
{
    dMAGIC(std::cout << foo(1, 2) << '\n');
}

TEST_COMPONENT(004)
{
    dMAGIC(sample<int, bool>::type) var = 10;
    ASSERT_TRUE(var == 10);
}

//==============================================================================
//==============================================================================
#endif // TEST_PRAGMA_MAGIC

