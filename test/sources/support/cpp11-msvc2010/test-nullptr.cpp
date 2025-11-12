
// --- Kartonagnick/compile                                   [test-nullptr.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                      [test-nullptr.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)               [test-nullptr.cpp]
//     [2021-02-22][04:21:08] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_NULLPTR
#include <compile/support.hpp>

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_NULLPTR
#define dTEST_TAG tdd
    
//==============================================================================
//==============================================================================

static void foo(char* p)
{
    ASSERT_FALSE(p);
}

#ifdef dHAS_NULLPTR
static void bar(std::nullptr_t p)
{
    void* a = p;
    ASSERT_TRUE(p == 0);
    ASSERT_FALSE(a);
}
#endif

//==============================================================================
//==============================================================================

TEST_COMPONENT(001)
{
    char* p = nullptr;
    foo(p);
}

#ifdef dHAS_NULLPTR
TEST_COMPONENT(002)
{
    bar(nullptr);
}
#endif

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_NULLPTR
