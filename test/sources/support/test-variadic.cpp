
// --- Kartonagnick/compile                                  [test-variadic.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                     [test-variadic.cpp]
//   [2023-03-08][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                 [test-variadic.cpp]
//     [2021-02-28][01:43:52] Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_VARIADIC_TEMPLATE

#include <compile/support.hpp>

#ifdef dHAS_VARIADIC_TEMPLATE

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_VARIADIC_TEMPLATE
#define dTEST_TAG tdd

#include <string>

//==============================================================================
//==============================================================================

namespace
{
    template<class Val> struct swither
    {
        swither(const Val& v)
            :val(v)
        {}

        void operator()() const noexcept {}

        template <class E, class F, class ...Args>
        void operator()(E&& e, F&& f, Args&& ...args) const 
        {
            if(e == std::string(val))
                f(); 
            else
                (*this)(std::forward<Args>(args)...);
        }
    private:
        Val val;
    };

    template<class Val> swither<Val> Swith(const Val& v)
        { return swither<Val>(v); }

    #define dCASE(n) n,[]()

    int result = 0;

} // namespace

TEST_COMPONENT(001)
{
    auto x = "any";
    Swith(x) (
        dCASE("ololo")   { result = 1; },
        dCASE("trololo") { result = 2; }
    );
    ASSERT_TRUE(result == 0);
}

TEST_COMPONENT(002)
{
    auto x = "trololo";
    Swith(x) (
        dCASE("ololo")   { result = 1; },
        dCASE("trololo") { result = 2; }
    );
    ASSERT_TRUE(result == 2);
}

TEST_COMPONENT(003)
{
    auto x = "ololo";
    Swith(x) (
        dCASE("ololo")   { result = 1; },
        dCASE("trololo") { result = 2; }
    );
    ASSERT_TRUE(result == 1);
}

//==============================================================================
//==============================================================================
#endif // dHAS_VARIADIC_TEMPLATE
#endif // TEST_SUPPORT_VARIADIC_TEMPLATE
