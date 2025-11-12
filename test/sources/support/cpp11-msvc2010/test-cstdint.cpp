
// --- Kartonagnick/compile                                   [test-cstdint.cpp]
// [2025-11-12][19:00:00] 001 Kartonagnick PRE
//   --- CastleOfDreams/compile (frized)                      [test-cstdint.cpp]
//   [2023-02-23][19:00:00] 001 Kartonagnick
//     --- Kartonagnick/tools-features (closed)               [test-cstdint.cpp]
//     [2021-03-10][13:28:40] 003 Idrisov Denis R.
//     [2020-06-01][20:00:00] 002 Idrisov Denis R.

#include <mygtest/modern.hpp>
//==============================================================================
//==============================================================================

#ifdef TEST_SUPPORT_CSTDINT
#include <compile/support.hpp>
#ifdef dHAS_CSTDINT

#define dTEST_COMPONENT compile, support
#define dTEST_METHOD HAS_CSTDINT
#define dTEST_TAG tdd

#include <cstdint>

//==============================================================================
//==============================================================================

static_assert(
    sizeof(std::uint8_t) == 1,
    "ERROR_INVALID_SIZE_MUST_BE_8BIT"
);

static_assert(
    sizeof(std::uint16_t) == 2,
    "ERROR_INVALID_SIZE_MUST_BE_16BIT"
);

static_assert(
    sizeof(std::uint32_t) == 4,
    "ERROR_INVALID_SIZE_MUST_BE_32BIT"
);

static_assert(
    sizeof(std::int64_t) == 8,
    "ERROR_INVALID_SIZE_MUST_BE_64BIT"
);

//==============================================================================
//==============================================================================
#endif // dHAS_CSTDINT
#endif // TEST_SUPPORT_CSTDINT
