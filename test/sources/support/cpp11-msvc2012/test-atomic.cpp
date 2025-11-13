
// --- Kartonagnick/compile                                    [test-atomic.cpp]
// [2025-11-13][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                       [test-atomic.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)                [test-atomic.cpp]
//     [2021-02-22][04:21:08] 002 Idrisov Denis R.
//     [2020-05-21][02:00:00] 001 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_ATOMIC
#include <compile/support.hpp>
#ifdef dHAS_ATOMIC

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_ATOMIC
#define dTEST_TAG tdd

//==============================================================================
//==============================================================================

#include <atomic>
#include <future>
#include <thread>
#include <mutex>

namespace 
{
    std::atomic<size_t> value;
    void loop(const bool dir, const size_t limit)
    {
        dprint(std::cout << "started: " << dir << " " << limit << std::endl);
        for (size_t i = 0; i < limit; ++i)
            if (dir)
                ++value;
            else
                --value;
    }

} // namespace

TEST_COMPONENT(001)
{
    // --- check std::atomic with std::async

    const size_t payload = 1000;
    const size_t count = payload * 100;
    const size_t total = 10;

    for (size_t i = 0; i != total; ++i)
    {
        value = 0;
        dprint(std::cout << "generation(" << count << "): " 
            << i + 1 << "/" << total << '\n');
        const auto mode = std::launch::async;
        auto f = std::async(mode, std::bind(loop, true, 2 * count));
        loop(false, count);
        f.wait();
        ASSERT_TRUE(value == count);
    }
}

//==============================================================================
//==============================================================================
#endif // dHAS_ATOMIC
#endif // TEST_SUPPORT_ATOMIC
