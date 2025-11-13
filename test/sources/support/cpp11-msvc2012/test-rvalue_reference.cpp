
// --- Kartonagnick/compile                          [test-rvalue_reference.cpp]
// [2025-11-13][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)             [test-rvalue_reference.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)         [test-rvalue_reference.cpp]
//     [2021-02-22][04:21:08] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_RVALUE_REFERENCE
#include <compile/support.hpp>
#ifdef dHAS_RVALUE_REFERENCES

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_RVALUE_REFERENCES
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

#include <string>

namespace 
{
    void foo(std::string&& rval, const std::string& etalon)
    {
        std::string dst = std::move(rval);
        ASSERT_TRUE(dst == etalon);
    }

} // namespace

TEST_COMPONENT(001)
{
    #if defined(_MSC_VER) && _MSC_VER == 1600                      // msvc[2010]
        // has bug: error: from "const char [4]" to "std::string &&"
        // use workaround:
        std::string v = "111";
        foo(std::move(v), "111");
    #else
        foo("111", "111");
    #endif
}

TEST_COMPONENT(002)
{
    int v = 0;
    int&& rv = std::move(v);
    ASSERT_TRUE(rv == 0);
}

//==============================================================================
//==============================================================================
#endif // dHAS_RVALUE_REFERENCES
#endif // TEST_SUPPORT_RVALUE_REFERENCE
