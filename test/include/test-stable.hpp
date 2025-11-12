
// --- Kartonagnick/compile                                    [test-stable.hpp]
// [2025-11-12][19:00:00] 005 Kartonagnick PRE
// [2025-11-11][04:30:00] 004 Kartonagnick
// [2025-11-10][21:10:00] 003 Kartonagnick
// [2025-11-06][18:10:00] 002 Kartonagnick
// [2025-11-06][06:50:00] 001 Kartonagnick
//==============================================================================
//==============================================================================

#pragma once
#ifndef dTEST_STABLE_USED_ 
#define dTEST_STABLE_USED_ 5

//=============================================================|||===||=========
//=== modern/classic/origin ===================================|||===||=========
    #define TEST_MODERN                                        003   // ready
    #define TEST_CLASSIC                                       003   // ready
    #define TEST_ORIGIN                                        001   // ready
//=== warning/magic ===========================================|||===||=========
    #define TEST_PRAGMA_MAGIC                                  002   // ready
    #define TEST_PRAGMA_WARNING                                002   // ready
//=============================================================|||===||=========
//=== compile/dfunction =======================================|||===||=========
    #define TEST_COMPILE_DFUNCTION                             001   // ready
//=============================================================|||===||=========
//=== compile/info ============================================|||===||=========
    #define TEST_COMPILE_X64_X86                               002   // ready
//=============================================================|||===||=========
//=== compile/support =========================================|||===||=========
    #define TEST_SUPPORT_NULLPTR                               002   // ready
    #define TEST_SUPPORT_TYPE_TRAITS                           002   // ready
    #define TEST_SUPPORT_DECLTYPE                              001   // ready
    #define TEST_SUPPORT_CSTDINT                               001   // ready
    #define TEST_SUPPORT_LAMBDA                                001   // ready
    #define TEST_SUPPORT_HASH                                  001   // ready
    #define TEST_SUPPORT_ATOMIC                                001   // ready
    #define TEST_SUPPORT_NOCOPYABLE                            001   // ready
    #define TEST_SUPPORT_NOEXCEPT                              001   // ready
    #define TEST_SUPPORT_STATIC_CHECK                          001   // ready
    #define TEST_SUPPORT_STATIC_ASSERT                         001   // ready
    #define TEST_SUPPORT_VARIADIC_TEMPLATE                     001   // ready
    #define TEST_SUPPORT_ENUM                                  001   // ready
    #define TEST_SUPPORT_HAS_EMPLACE                           001   // ready
    #define TEST_SUPPORT_HAS_USING_ALIAS                       001   // ready
    #define TEST_SUPPORT_TRAIT_CONST                           001   // ready
    #define TEST_SUPPORT_CHRONO                                001   // ready
//==============================================================================
//==============================================================================

#endif // dTEST_STABLE_USED_
