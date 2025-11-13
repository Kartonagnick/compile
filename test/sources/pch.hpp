
// --- Kartonagnick/compile                                            [pch.hpp]
// [2025-11-13][19:00:00] 005 Kartonagnick PRE
// [2025-11-12][19:00:00] 004 Kartonagnick
// [2025-11-11][04:30:00] 003 Kartonagnick
// [2025-11-06][18:10:00] 002 Kartonagnick
// [2025-11-06][06:50:00] 001 Kartonagnick
// [2025-11-06][06:16:06] register repo on github
// [2025-11-06][04:38:47] birthday of the project
//==============================================================================
//==============================================================================

#pragma once

#if defined(_MSC_VER) && !defined(WIN32_LEAN_AND_MEAN)
    #define WIN32_LEAN_AND_MEAN
#endif

//==============================================================================
//=== [pch] ====================================================================

#include "test.ver"
#include <compile/compile.ver>

#ifdef dCOMPILE_LIBRARY_USED_
    #include <compile/info.hpp>

    #define dEXAMPLE_MAJOR 1
    #define dEXAMPLE_MINOR 2
    #define dEXAMPLE_PATCH 3

    #pragma message("[example] " dABOUT_CONFIG(dEXAMPLE))
    dSHOW_BUILD("[example]" , dEXAMPLE)
    dSHOW_BUILD("[compile]" , dCOMPILE)
    dSHOW_BUILD("[test.exe]", dTEST)
#endif

//==============================================================================
//==============================================================================

#include <mygtest/mygtest.hpp>
#include <compile/support.hpp>
#include <compile/wchar.hpp>

#ifdef dHAS_TYPE_TRAITS
    #include <type_traits>
#endif

#ifdef dHAS_ATOMIC
    #include <atomic>
    #include <future>
    #include <thread>
    #include <mutex>
#endif

#ifdef dHAS_CHRONO
    #include <chrono>
#endif

#include <stdexcept>
#include <iostream>
#include <iomanip>
#include <cassert>
#include <sstream>
#include <utility>
#include <string>
#include <vector>
#include <map>


//==============================================================================
//==============================================================================
