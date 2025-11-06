
// --- Kartonagnick/compile                                      [test-x86-x64.cpp]
// [2025-11-06][18:10:00] 002 Kartonagnick PRE
//   --- CastleOfDreams/compile                                  [test-x86-x64.cpp]
//   [2023-03-19][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_COMPILE_X64_X86

#define dTEST_COMPONENT compile
#define dTEST_METHOD bit
#define dTEST_TAG tdd

#include <compile/private/bit.hpp>

//==============================================================================
//==============================================================================
    
TEST_COMPONENT(001)
{
    enum { sz = sizeof(void*) };

    #if defined(dX32)
        dprint(std::cout << "BIT: x32\n");
        ASSERT_TRUE(sz == 4);
    #elif defined(dX64)
        dprint(std::cout << "BIT: x64\n");
        ASSERT_TRUE(sz == 8);
    #else
        #error  'dX32' or 'x64' must be enabled
    #endif
}

//==============================================================================
//==============================================================================
#endif // TEST_COMPILE_X64_X86

