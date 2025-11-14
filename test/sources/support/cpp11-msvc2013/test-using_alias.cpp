
// --- Kartonagnick/compile                               [test-using_alias.cpp]
// [2025-11-14][19:00:00] 003 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                  [test-using_alias.cpp]
//   [2023-06-15][19:00:00] 003 Kartonagnick
//   [2023-06-14][19:00:00] 002 Kartonagnick
//   [2023-03-08][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_HAS_USING_ALIAS
#include <compile/support.hpp>
#ifdef dHAS_USING_ALIAS

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_USING_ALIAS
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

template <class t> using sample = t;

#ifdef dHAS_USING_ALIAS_STD
    using xx = std::remove_reference_t<int&>;
#else
    using xx = std::remove_reference<int&>::type;
#endif

#ifdef dHAS_USING_ALIAS_STD                  // msvc[2013 - new]; gcc(485 - new]

    template<class t> 
    using test_degradate_t = std::remove_cv_t<
        std::remove_reference_t<t> 
    >;

#else                                        // msvc[old - 2012]; gcc[old - 485]

    template<class t> using test_degradate_t 
        = typename std::remove_cv<
            typename std::remove_reference<t>::type 
        >::type;

#endif

using zz = test_degradate_t<int&&>;
using issame = std::is_same<int, zz>;
static_assert(issame::value, "expected: int");

//==============================================================================
//==============================================================================
#endif // dHAS_USING_ALIAS
#endif // TEST_SUPPORT_HAS_USING_ALIAS

