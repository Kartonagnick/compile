
// --- Kartonagnick/compile                                    [test-char_type.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                          [test-char_t.cpp]
//   [2023-06-15][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_SUPPORT_CHAR_TYPE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD char_t
#define dTEST_TAG tdd

#include <compile/support.hpp>
#include <string>

namespace 
{
    int foo(char)
    {
        dprint(std::cout << "foo(char)\n");
        return 1;
    }

    int foo(wchar_t)
    {
        dprint(std::cout << "foo(wchar_t)\n");
        return 2;
    }

    #ifdef dHAS_CHAR8_TYPE
    int foo(char8_t)
    {
        dprint(std::cout << "foo(char8_t)\n");
        return 3;
    }
    #endif

    #ifdef dHAS_CHAR16_TYPE
    int foo(char16_t)
    {
        dprint(std::cout << "foo(char16_t)\n");
        return 4;
    }
    #endif

    #ifdef dHAS_CHAR32_TYPE
    int foo(char32_t)
    {
        dprint(std::cout << "foo(char32_t)\n");
        return 5;
    }
    #endif


    #ifdef dHAS_CHAR16_TYPEDEF
    int bar(char16_t)
    {
        dprint(std::cout << "foo(char16_t)\n");
        return 6;
    }
    #endif

    #ifdef dHAS_CHAR32_TYPEDEF
    int bar(char32_t)
    {
        dprint(std::cout << "foo(char32_t)\n");
        return 7;
    }
    #endif

} // namespace 

//==============================================================================
//==============================================================================
    
TEST_COMPONENT(001)
{
    char     ch1 =   'a';  
    wchar_t  ch2 =  L'a';
    ASSERT_TRUE(foo(ch1) == 1);
    ASSERT_TRUE(foo(ch2) == 2);

    #ifdef dHAS_U8_LITERAL
    char     ch3 { u8'a' };
    ASSERT_TRUE(foo(ch3) == 1);
    #endif

    #ifdef dHAS_CHAR8_TYPE
    char8_t  ch4 {  'a' };    
    char8_t  ch5 { u'a' };    
    ASSERT_TRUE(foo(ch4) == 3);
    ASSERT_TRUE(foo(ch5) == 3);
    #endif
    
    #ifdef dHAS_CHAR16_TYPE
    char16_t ch6 { u'a' };
    ASSERT_TRUE(foo(ch6) == 4);
    #endif

    #ifdef dHAS_CHAR32_TYPE
    char32_t ch7 {  U'a' };
    ASSERT_TRUE(foo(ch7) == 5);
    #endif
}

TEST_COMPONENT(002)
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
