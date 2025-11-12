
// --- Kartonagnick/compile                                 [test-char_typedef.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick    

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_SUPPORT_CHAR_TYPE
#include <compile/support.hpp>

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD char_typedef
#define dTEST_TAG tdd

#ifdef dHAS_CHAR16_TYPEDEF
static int bar(char16_t)
{
    dprint(std::cout << "foo(char16_t)\n");
    return 6;
}
#endif

#ifdef dHAS_CHAR32_TYPEDEF
static int bar(char32_t)
{
    dprint(std::cout << "foo(char32_t)\n");
    return 7;
}
#endif

//==============================================================================
//==============================================================================
    
TEST_COMPONENT(001)
{
    #ifdef dHAS_CHAR16_TYPEDEF
    char16_t a = 0;
    ASSERT_TRUE(bar(a) == 6);
    #endif

    #ifdef dHAS_CHAR32_TYPEDEF
    char32_t b = 0;
    ASSERT_TRUE(bar(b) == 7);
    #endif
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_CHAR_TYPE
