
// --- Kartonagnick/compile                               [test-trait_const.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                  [test-trait_const.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)              [test-trait_const.cpp]
//     [2021-02-26][06:07:32] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_TRAIT_CONST

#define dTEST_COMPONENT compile, supoort
#define dTEST_METHOD TRAIT_CONST
#define dTEST_TAG tdd

#include <compile/support.hpp>

#if dHAS_TYPE_TRAITS
    #include <type_traits>
#endif

#ifdef __GNUC__
    #pragma GCC diagnostic ignored "-Weffc++"
#endif

namespace tools
{
    template <class t, t val> struct integral_constant 
    {
        enum { value = val };

        typedef t value_type;

        typedef integral_constant 
            type;

        dCONSTEXPR_CPP11
        operator value_type() const noexcept
            { return value; }

        dNODISCARD dCONSTEXPR_CPP11
        value_type operator()() const noexcept
            { return value; }
    };

    typedef integral_constant<bool, true> 
        true_type;

    typedef integral_constant<bool, false>
        false_type;

} // namespace tools

namespace unit_test
{
    namespace detail
    {
        template<class a, class b> struct is_same_
            { enum { value = 0 }; };

        template<class t> struct is_same_<t, t>
            { enum { value = 1 }; };

    } // namespace detail

    template <class a, class b> struct is_same
        : dTRAIT_CONST(is_same_<a, b>)
    {};

} // namespace unit_test

TEST_COMPONENT(000)
{
    typedef unit_test::is_same<int, bool>
        issame_t;
    const bool v = issame_t::value;
    ASSERT_FALSE(v);
}

//==============================================================================
//==============================================================================
#endif // TEST_SUPPORT_TRAIT_CONST
