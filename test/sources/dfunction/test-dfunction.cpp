
// --- Kartonagnick/compile                                 [test-dfunction.cpp]
// [2025-11-11][04:30:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile                             [test-dfunction.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                [test-dfunction.cpp]
//     [2021-02-25][02:24:11] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_COMPILE_DFUNCTION

#define dTEST_COMPONENT compile
#define dTEST_METHOD dFUNCTIOn
#define dTEST_TAG tdd

#include <compile/dfunction.hpp>
#include <cassert>
#include <string>

//==============================================================================
//==============================================================================

static void check(const std::string& name, const char* part)
{
    assert(part);
    const size_t pos = name.find(part);
    ASSERT_TRUE(pos != std::string::npos);
}

static const char* dfunction() { return dFUNCTION; }

namespace xxx
{
    static const char* foo() { return dFUNCTION; }
}

//==============================================================================
//==============================================================================

TEST_COMPONENT(000) 
{
    dprint(std::cout << xxx::foo()  << '\n');
    dprint(std::cout << dfunction() << '\n');
    check(dfunction(), "dfunction");
    check(xxx::foo(), "foo");
}

//==============================================================================
//==============================================================================
#endif // TEST_COMPILE_DFUNCTION
