
// --- Kartonagnick/compile                                [compile/support.hpp]
// [2025-11-11][25:50:00] 009 Kartonagnick    
//   --- CastleOfDreams/compile (frized)                  [compile/features.hpp]
//   [2023-06-16][19:00:00] 008 Kartonagnick REL
//   [2023-06-15][19:00:00] 007 Kartonagnick
//   [2023-06-14][19:00:00] 006 Kartonagnick
//   [2023-03-19][19:00:00] 005 Kartonagnick
//   [2023-03-08][19:00:00] 004 Kartonagnick
//   [2023-03-02][19:00:00] 003 Kartonagnick
//   [2023-02-23][19:00:00] 002 Kartonagnick
//   [2022-08-17][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-types (closed)                [tools/features.hpp]
//     [2021-04-04][07:05:55] 118 Idrisov Denis R.
//     [2021-04-03][22:59:27] 117 Idrisov Denis R.
//     [2021-04-02][00:39:44] 116 Idrisov Denis R.
//     [2021-03-31][01:56:33] 115 Idrisov Denis R.
//     [2021-03-30][03:40:56] 114 Idrisov Denis R.
//     [2021-03-20][19:41:07] 113 Idrisov Denis R.
//     [2021-03-20][02:13:22] 112 Idrisov Denis R.
//     [2021-03-19][16:14:09] 111 Idrisov Denis R.
//     [2021-03-17][23:19:45] 110 Idrisov Denis R.
//     [2021-03-15][18:28:44] 109 Idrisov Denis R.
//     [2021-03-10][23:23:35] 108 Idrisov Denis R.
//     [2021-02-05][18:41:19]     Idrisov Denis R.
//       --- Kartonagnick/tools-features (closed)           [tools/features.hpp]
//       [2020-06-01][20:00:00] 003 Idrisov Denis R.
//       [2020-05-21][02:00:00] 002 Idrisov Denis R.
//       [2020-05-19][23:00:00] 001 Idrisov Denis R.
//==============================================================================
//==============================================================================

#pragma once
#ifndef dCOMPILE_SUPPORT_USED_ 
#define dCOMPILE_SUPPORT_USED_ 9

#define dEXTRA(...) __VA_ARGS__
#define dEXPAND(...) dEXTRA(__VA_ARGS__)

#define dSTRINGIZE(...) #__VA_ARGS__
#define dSSTRINGIZE(x) dSTRINGIZE(x)

//==============================================================================
//=== dHAS_NULLPTR =============================================================

#ifdefined__GNUC__
  #if __GNUC__ * 10 + __GNUC_MINOR__ >= 46                      // gcc[460: new]
    #define dHAS_NULLPTR 1
  #endif
#endif

#if __cplusplus >= 201103L                                      // c++[11 - new]
    #define dHAS_NULLPTR 1
#endif

#if defined(_MSC_VER) && _MSC_VER >= 1600                    // msvc[2010 - new]
    #define dHAS_NULLPTR 1
#endif

#if defined(__clang__)
    #if __has_feature(cxx_nullptr)
        #define dHAS_NULLPTR 1
    #endif
#endif

// #ifdef dHAS_NULLPTR
//     typedef decltype(nullptr) nullptr_t;
// #else
//     #define nullptr 0
// #endif

#ifndef dHAS_NULLPTR
    #define nullptr 0
#endif

//==============================================================================
//=== msvc2010 =================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1600            // msvc[2010 - new]; other

    // [WARNING] msvc2010 has bug with reference
    //   bug: can be "std::tr1::_Remove_reference<_Ty&&>"
    //   bug: or "std::tr1::_Remove_reference<_Ty&>"
    // [WARNING] msvc2010 has bug with rvalue
    //   example error: from "const char [4]" to "std::string &&"

    #define dHAS_RVALUE_REFERENCES 1
    #define dHAS_TYPE_TRAITS 1
    #define dHAS_DECLTYPE 1
    #define dHAS_CSTDINT 1
    #define dHAS_LAMBDA 1
    #define dHAS_HASH 1
#endif

//==============================================================================
//=== dTRAIT ===================================================================

#ifdef dHAS_TYPE_TRAITS
    #define dTRAIT std
#else
    #define dTRAIT tools
#endif

#define dTRAIT_CONST(...)                    \
    public ::dTRAIT::integral_constant<bool, \
        detail::__VA_ARGS__::value           \
    >

//==============================================================================
//=== dSTATIC_ASSERT ===========================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1600            // msvc[2010 - new]; other

    // new compiler

    #define dHAS_STATIC_ASSERT 1

    #define dSTATIC_ASSERT(msg, ...) \
        static_assert((__VA_ARGS__), #msg)

    #define dSTATIC_CHECK(msg, ...)  \
        static_assert((__VA_ARGS__), #msg)
#else                                                        // msvc[old - 2008]

    // old compiler

    #define dSTATIC_ASSERT_3(msg, ...) \
        struct msg { int static_assert_ : !!(__VA_ARGS__); }

    #define dSTATIC_ASSERT_2(msg, L, C, ...) \
        dSTATIC_ASSERT_3(msg##_##L##_##C , __VA_ARGS__)

    #define dSTATIC_ASSERT_1(msg, L, C, ...) \
        dSTATIC_ASSERT_2(msg, L, C, __VA_ARGS__)

    #define dSTATIC_ASSERT(msg, ...) \
        dSTATIC_ASSERT_1(msg, __LINE__, __COUNTER__, __VA_ARGS__)

    #ifndef dSTATIC_CHECK
        namespace tools
        {
            template<bool> struct static_assert_;
            template<> struct static_assert_<true> {};
        }

        #define dSTATIC_CHECK(msg, ...)                 \
        {                                               \
            ::tools::static_assert_<(__VA_ARGS__)> msg; \
            (void) msg;                                 \
        } void()
    #endif
#endif

//==============================================================================
//=== msvc2012 =================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1700            // msvc[2012 - new]; other
    #define dHAS_ARRAY_EMPTY_SIZE 1
    #define dHAS_ENUM_CLASS 1
    #define dHAS_EMPLACE 1    
    #define dHAS_ATOMIC 1
#endif

//==============================================================================
//=== CHRONO ===================================================================

#if defined(_MSC_VER) && _MSC_VER >= 1700             // msvc[2012 - new]; other
    #define dHAS_CHRONO 1
#endif

#ifdef __GNUC__
    #if __GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__ >= 510
        #define dHAS_CHRONO 1
    #endif
#endif

//==============================================================================
//=== msvc2013 =================================================================

#if (defined(_MSC_VER) && _MSC_VER >= 1800) || __cplusplus >= 201103L
    // msvc[2013 - new]; c++[11 - new]
    #define dHAS_TEMPLATE_FUNCTION_DEFAULT_PARAM 1
    #define dHAS_AGGREGATE_INITIALIZE 1
    #define dHAS_VARIADIC_TEMPLATE 1
    #define dCAN_DELETE_FUNCTION 1
    #define dHAS_USING_ALIAS 1
#endif

//==============================================================================
//=== dNOCOPYABLE ==============================================================

#ifdef dCAN_DELETE_FUNCTION                   // msvc[2013 - new]; c++[11 - new]
    #define dNOCOPYABLE(Class)                   \
        Class(const Class&)            = delete; \
        Class(Class&&)                 = delete; \
        Class& operator=(const Class&) = delete; \
        Class& operator=(Class&&)      = delete
#else                                                // msvc[old - 2012]; c++old
    #define dNOCOPYABLE(Class) \
        Class(const Class&);   \
        Class& operator=(const Class&)
#endif

//==============================================================================
//=== dHAS_USING_ALIAS_STD =====================================================

#if defined(_MSC_VER) && defined (dHAS_USING_ALIAS)          // msvc[2013 - new]
    #define dHAS_USING_ALIAS_STD 1
#endif

#ifdef __GNUC__                                               //  gcc(485 - new]
    #if __GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__ > 485
        #define dHAS_USING_ALIAS_STD 1
    #endif
#endif

//==============================================================================
//=== dHAS_NOEXCEPT ============================================================

#ifdef __clang__
    #if __has_feature(cxx_noexcept)
        #define dHAS_NOEXCEPT 1
    #endif
#endif

#ifdef __GXX_EXPERIMENTAL_CXX0X__
    #if __GNUC__ * 10 + __GNUC_MINOR__ >= 46
        #define dHAS_NOEXCEPT 1
    #endif
#endif

#if defined(_MSC_VER) && _MSC_VER >= 1900                    // msvc[2015 - new]
    #define dHAS_NOEXCEPT 1
#endif
                
#ifndef dHAS_NOEXCEPT
    #define noexcept throw()
#endif

//==============================================================================
//=== dTHREAD_LOCAL ============================================================

#ifdef _MSC_VER
    #define dTHREAD_LOCAL_EXTENSION __declspec(thread)
#else
    #define dTHREAD_LOCAL_EXTENSION __thread
#endif

#if defined (_MSC_VER) && _MSC_VER >= 1900            // msvc[2015 - new]; other
    #define dHAS_THREAD_LOCAL 1
#elif __cplusplus >= 201103L                                    // c++[11 - new]
    #define dHAS_THREAD_LOCAL 1
#endif

//==============================================================================
//=== dHAS_CPP11 ===============================================================

#if defined(_MSC_VER) && _MSC_VER >= 1900             // msvc[2015 - new]; other
    #define dHAS_CPP11 1
#elif __cplusplus >= 201103L                                    // c++[11 - new]
    #define dHAS_CPP11 1
#endif

#ifdef dHAS_CPP11
    #define dCONSTEXPR_CPP11 constexpr
    #define dHAS_TRAILING_RETURN_TYPE 1
    #define dHAS_AUTO_RETURN_TYPE 1
    #define dHAS_CONSTEXPR_CPP11 1
    #define dHAS_ABOMINABLE 1
#else 
    #define dCONSTEXPR_CPP11 inline
#endif

#ifdef dHAS_CONSTEXPR_CPP11
    #define dCONSTANT constexpr
#else
    #define dCONSTANT const
#endif

//==============================================================================
//=== binary literal ===========================================================

#ifdef _MSC_VER
    #if _MSC_VER >= 1900                                     // msvc[2015 - new]
        #define dHAS_BINARY_LITERAL 1
    #endif
#elif defined(__GNUC__)
    #if __GNUC__ * 100 + __GNUC_MINOR__ * 10 + __GNUC_PATCHLEVEL__ >= 486
        #define dHAS_BINARY_LITERAL 1                          // gcc[486 - new]
    #endif
#else
    #define dHAS_BINARY_LITERAL 1                              //          other
#endif

//==============================================================================
//=== dHAS_CPP14 ===============================================================

#if defined(_MSC_VER) && _MSC_VER >= 1910             // msvc[2017 - new]; other
    #define dHAS_CPP14 1
#elif __cplusplus >= 201402L                                    // c++[14 - new]
    #define dHAS_CPP14 1
#endif

#ifdef dHAS_CPP14
    #define dHAS_CONSTEXPR_CPP14 1
    #define dCONSTEXPR_CPP14 constexpr
#else
    #define dCONSTEXPR_CPP14 inline
#endif

//==============================================================================
//=== dHAS_RVALUE_ARRAY ========================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1910            // msvc[2017 - new]; other
    #define dHAS_RVALUE_ARRAY 1
#endif

//==============================================================================
//=== dHAS_CPP17 ===============================================================

#if defined(_MSVC_LANG) && _MSVC_LANG >= 201703L                // c++[17 - new]
    #define dHAS_CPP17 1
#elif __cplusplus >= 201703L
    #define dHAS_CPP17 1
#endif

//==============================================================================
//=== dNODISCARD ===============================================================

#ifdef dHAS_CPP17                                               // c++[17 - new]
    #define dNODISCARD [[nodiscard]]
#else
    #define dNODISCARD
#endif

//==============================================================================
//=== dHAS_ZERO_SIZE_ARRAY =====================================================

#ifndef _MSC_VER
    #define dHAS_ZERO_SIZE_ARRAY 1
#endif 

//==============================================================================
//=== u8 literal ===============================================================

#ifdef _MSC_VER 
    #if _MSC_VER >= 1900                                     // msvc[2015 - new]
        #define dHAS_U8_LITERAL  1
        #define dHAS_U16_LITERAL 1
        #define dHAS_U32_LITERAL 1
    #endif
#else                                                                   // other
    #define dHAS_U8_LITERAL  1
    #define dHAS_U16_LITERAL 1
    #define dHAS_U32_LITERAL 1
#endif

//==============================================================================
//=== char8_t/char16_t/char32_t ================================================

#ifdef __cpp_char8_t                                         //  by standart c++
    #define dHAS_CHAR8_TYPE 1
#endif

#if defined(_MSC_VER) && _MSC_VER >= 1920                    // msvc[2019 - new]
    #define dHAS_CHAR8_TYPE 1
#endif

#ifdef __cpp_unicode_character                                // by standart c++
    #define dHAS_CHAR16_TYPE 1
    #define dHAS_CHAR32_TYPE 1
#endif
                 
#if defined(_MSC_VER) && _MSC_VER >= 1900                    // msvc[2015 - new]
    #define dHAS_CHAR16_TYPE 1
    #define dHAS_CHAR32_TYPE 1
#endif

#ifdef _MSC_VER
    #if _MSC_VER >= 1600 && _MSC_VER <= 1800                // msvc[2010 - 2013]
        #define dHAS_CHAR16_TYPEDEF 1
        #define dHAS_CHAR32_TYPEDEF 1
    #endif
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_SUPPORT_USED_
