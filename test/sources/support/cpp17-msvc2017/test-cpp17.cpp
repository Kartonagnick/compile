
// --- Kartonagnick/compile                                     [test-cpp14.cpp]
// [2025-11-16][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                        [test-cpp17.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                    [test-cpp17.cpp]
//     [2021-02-25][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_CPP17
#include <compile/support.hpp>
#ifdef dHAS_CPP17

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_CPP17
#define dTEST_TAG tdd

#include <string>

//==============================================================================
//==============================================================================

namespace 
{
    [[nodiscard]] int foo() { return 1; }    
    dNODISCARD    int bar() { return 1; }

    struct book
    {
        std::string title;
        unsigned year;
    };

    book getBook()
    {
        return { "123", 1997 };
    }

} // namespace

//==============================================================================
//==============================================================================

TEST_COMPONENT(001) 
{
    ASSERT_TRUE(bar() == 1);
    ASSERT_TRUE(foo() == 1);

    auto [title, year] = getBook();
    ASSERT_TRUE(title == "123");
    ASSERT_TRUE(year  == 1997 );
}

//==============================================================================
//==============================================================================
#endif // dHAS_CPP17
#endif // TEST_SUPPORT_CPP17
