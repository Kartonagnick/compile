
// --- Kartonagnick/compile                               [pragma/test-warning.cpp]
// [2025-11-10][21:10:00] 002 Kartonagnick    
//   --- CastleOfDreams/compile                                  [test-warning.cpp]
//   [2023-06-15][19:00:00] 001 Kartonagnick

#include <mygtest/modern.hpp>
//=================================================================================
//=================================================================================

#ifdef TEST_PRAGMA_WARNING

#define dTEST_COMPONENT compile
#define dTEST_METHOD warning
#define dTEST_TAG tdd

#include <compile/warning.hpp>

//==============================================================================
//==============================================================================

// некоторые предупреждения действуют на весь файл
// подавлять такие предупреждения тоже нужно в рамках всего файла
dPRAGMA_DISABLE(dWRN_UNUSED_FUNCTION)

namespace
{
    dPRAGMA_PUSH
    dPRAGMA_DISABLE(dWRN_UNUSED_PARAMETER)

    // эта строка не имеет смысла
    // потому что ближайший dPRAGMA_POP отменит её действие
    // и компилятор опять заметит неиспользуемую функцию
    dPRAGMA_DISABLE(dWRN_UNUSED_FUNCTION)

    void unreferenced(int v){}

    dPRAGMA_POP
}

//==============================================================================
//==============================================================================

dPRAGMA_PUSH
dPRAGMA_DISABLE(dWRN_UNUSED_VARIABLE)

// на практике встречались компиляторы, в документации которых сказанно,
// что pragma push/pop нужно указывать в глобальной области файла
// такой подход дефакто работает всегда

TEST_COMPONENT(001)
{
    int val;
}

dPRAGMA_POP

#if !defined(_MSC_VER) || _MSC_VER >= 1900            // msvc[2015 - new]; other

TEST_COMPONENT(002)
{
    // однако для относительно новых компиляторов 
    // можно использовать не только глобально
    // но и в локальных областях функций

    dPRAGMA_PUSH    
    dPRAGMA_DISABLE(dWRN_UNUSED_VARIABLE)
    {
        int val;
    }
    dPRAGMA_POP    
}

#endif 

//==============================================================================
//==============================================================================
#endif // TEST_PRAGMA_WARNING
