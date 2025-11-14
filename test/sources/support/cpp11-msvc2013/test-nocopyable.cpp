
// --- Kartonagnick/compile                                   [test-nocopyable.cpp]
// [2025-11-14][19:00:00] 001 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                      [test-nocopyable.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)               [test-nocopyable.cpp]
//     [2021-02-25][04:21:08] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.
//     [2020-05-21][02:00:00] 001 Idrisov Denis R.

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_SUPPORT_NOCOPYABLE
#include <compile/support.hpp>

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD NOCOPYABLE
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================
namespace 
{
    struct alone
    {
        dNOCOPYABLE(alone);
        alone(){}
    };

    #ifdef dCAN_DELETE_FUNCTION
    struct Class
    {
        Class(){}
        Class(const Class&)            = delete;
        Class(Class&&)                 = delete;
        Class& operator=(const Class&) = delete;
        Class& operator=(Class&&)      = delete;
    };
    #endif

} // namespace

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_NOCOPYABLE
