
// --- Kartonagnick/compile                                           [main.cpp]
// [2025-11-06][06:50:00] 001 Kartonagnick PRE
// [2025-11-06][06:16:06] register repo on github
// [2025-11-06][04:38:47] birthday of the project
//==============================================================================
//==============================================================================

#include <mygtest/main.hpp>

GTEST_API_ int main(int argc, char** argv)
{
    // example settings:
    //   test.ext --gtest_filter=tools.stopwatch* --stress
    //   testing::GTEST_FLAG(filter) = "tools.stopwatch_*";
    return ::testing::run(argc, argv);
}

//==============================================================================
//==============================================================================
