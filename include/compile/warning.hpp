
// --- Kartonagnick/compile                                [compile/warning.hpp]
// [2025-11-10][21:10:00] 003 Kartonagnick    
//   --- CastleOfDreams/compile                            [compile/warning.hpp]
//   [2023-07-20][15:00:00] 003 Kartonagnick
//   [2023-06-27][19:00:00] 002 Kartonagnick
//   [2023-06-15][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-frized (closed)               [pragma/warning.hpp]
//     [2020-09-05] Idrisov Denis R.
//     [2019-04-12] Idrisov Denis R.
//       --- Kartonagnick/tools-fixed (closed)              [pragma/warning.hpp]
//       [2020-09-05] Idrisov Denis R.
//       [2019-04-12] Idrisov Denis R.

#pragma once
#ifndef dCOMPILE_WARNING_USED_ 
#define dCOMPILE_WARNING_USED_ 3

//==============================================================================
//==============================================================================

#if defined(__GNUC__)                                                   // [gcc]

    #define dPRAGMA_GCC_(x) _Pragma (#x)

    #define dPRAGMA_DISABLE(id_warning) \
        dPRAGMA_GCC_(GCC diagnostic ignored id_warning)

    #define dPRAGMA_PUSH _Pragma("GCC diagnostic push")
    #define dPRAGMA_POP  _Pragma("GCC diagnostic pop")

#elif defined(_MSC_VER)                                                // [msvc]

    #define dPRAGMA_DISABLE(id_warning) \
        __pragma(warning(disable: id_warning))

    #define dPRAGMA_PUSH  __pragma(warning(push))
    #define dPRAGMA_POP   __pragma(warning(pop))
#else                                                                // [others]
    error: compiler not support
#endif

//==============================================================================
//=== WARNINGS =================================================================

#if defined(__GNUC__) || defined(__MINGW__) || defined(__MINGW32__)
    #define dWRN_UNUSED                  "-Wunused"
    #define dWRN_UNUSED_FUNCTION         "-Wunused-function"
    #define dWRN_UNUSED_VARIABLE         "-Wunused-variable"
    #define dWRN_UNUSED_PARAMETER        "-Wunused-parameter"

    #define dWRN_UNUSED_LOCAL_TYPEDEFS   "-Wunused-local-typedefs"
    #define dWRN_DELETE_NON_VIRTUAL_DTOR "-Wdelete-non-virtual-dtor"
    #define dWRN_NON_VIRTUAL_DTOR        "-Wnon-virtual-dtor"
    #define dWRN_CTOR_DTOR_PRIVACY       "-Wctor-dtor-privacy"
    #define dWRN_CONVERSION_NULL         "-Wconversion-null"
    #define dWRN_OLD_STYLE_CAST          "-Wold-style-cast"
    #define dWRN_CONVERSION              "-Wconversion"
    #define dWRN_PEDANTIC                "-Wpedantic"
    #define dWRN_EFFC_CPP                "-Weffc++"
#elif defined(_MSC_VER)
    #define dWRN_UNUSED                  1

    // warning C4505: 'pammdb::getToken_': unreferenced function with internal linkage has been removed
    #define dWRN_UNUSED_FUNCTION         4505

    // warning C4101: 'identifier' : unreferenced local variable
    #define dWRN_UNUSED_VARIABLE         4101
    #define dWRN_UNUSED_PARAMETER        4100

    #define dWRN_NON_VIRTUAL_DTOR        4265
    #define dWRN_UNREACHABLE_CODE        4702
    #define dWRN_FORCE_VALUE_TO_BOOL     4800
#else
    error: compiler not support
#endif

//==============================================================================
//==============================================================================
#endif // dCOMPILE_WARNING_USED_




//==============================================================================
//=== example ==================================================================

#if 0
    // usage:
    int main()
    {
        dPRAGMA_PUSH
        dPRAGMA_DISABLE(dWRN_UNUSED_VARIABLE)
        {
            int val;
        }
        dPRAGMA_POP
    }
#endif

//..............................................................................

#if 0
    #ifdef __GNUC__
        #pragma GCC diagnostic push
        #pragma GCC diagnostic ignored "-Wold-style-cast"
    #endif

        // code...

    #ifdef __GNUC__
        #pragma GCC diagnostic pop
    #endif
#endif

//..............................................................................

#if 0
    #ifdef _MSC_VER
        #pragma warning(push)
        // warning C4521: 'Arg' : multiple copy constructors specified
        #pragma warning(disable : 4521)
    #endif

        // code...

    #ifdef _MSC_VER
        #pragma warning(pop)
    #endif
#endif

    
