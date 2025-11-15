
// --- Kartonagnick/compile                              [test-thread_local.cpp]
// [2025-11-15][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                 [test-thread_local.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)             [test-thread_local.cpp]
//     [2021-03-04][19:34:26] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_THREAD_LOCAL
#include <compile/support.hpp>
#ifdef dHAS_THREAD_LOCAL

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_THREAD_LOCAL
#define dTEST_TAG tdd

#include <string>

//==============================================================================
//==============================================================================

namespace
{
    #ifdef dHAS_THREAD_LOCAL
        static thread_local int xxx = 11;

        // mingw810 has bug
        // application test.exe return -1073741819
        static thread_local std::string txt = "11";
    #endif        

    dTHREAD_LOCAL_EXTENSION int val = 10;
}

TEST_COMPONENT(001)
{
    #ifdef dHAS_THREAD_LOCAL
        ASSERT_TRUE(xxx == 11);
        ASSERT_TRUE(txt == "11");
    #endif

    ASSERT_TRUE(val == 10);
}

//==============================================================================
//==============================================================================
#endif // dHAS_THREAD_LOCAL
#endif // TEST_SUPPORT_THREAD_LOCAL



