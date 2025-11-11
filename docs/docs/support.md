[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![S]][H] support v0.0.9
========================
Файл `compile/support.hpp` содержит множество макросов,  
с помощью которых можно определить,  
какие возможности поддерживает компилчтор  

--------------------------------------------------------------------------------

|  ID  | с++11, msvc2010                             |         описание        |    дополнительно            |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0001 | [dHAS_NULLPTR][001]                         | nullptr_t и nullptr     | gcc460                      |
| 0002 | [dHAS_TYPE_TRAITS][002]                     | `#include<type_traits>` | dTRAIT, dTRAIT_CONST        |
| 0003 | [dHAS_DECLTYPE][003]                        | decltype                |                             |
| 0004 | [dHAS_CSTDINT][004]                         | `#include<cstdint>`     |                             |
| 0005 | [dHAS_LAMBDA][005]                          | лямбды                  |                             |
| 0006 | [dHAS_HASH][006]                            | std::hash               |                             |
| 0007 | [dHAS_STATIC_ASSERT][007]                   | static_assert           |                             |
| 0008 | [dSTATIC_ASSERT][008]                       | static_assert           | полный аналог               |
| 0009 | [dSTATIC_CHECK][009]                        | static_assert           | только для функций          |
| 0010 | [dHAS_CHAR16_TYPEDEF][010]                  | typedef char16_t        |                             |
| 0011 | [dHAS_CHAR32_TYPEDEF][011]                  | typedef char32_t        |                             |

|  ID  | с++11, msvc2012                             |         описание        |    дополнительно            |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0012 | [dHAS_RVALUE_REFERENCES][012]               | `T&& ref`               |                             |
| 0013 | [dHAS_ARRAY_EMPTY_SIZE][013]                | `T empty[]`             |                             |
| 0014 | [dHAS_ENUM_CLASS][014]                      | enum class              |                             |
| 0015 | [dHAS_EMPLACE][015]                         | `vec.emplace(args...)`  |                             |
| 0016 | [dHAS_ATOMIC][016]                          | `#include<atomic>`      |                             |
| 0017 | [dHAS_CHRONO][017]                          | `#include<chrono>`      | gcc510                      |

|  ID  | с++11, msvc2013                             |         описание        |    дополнительно            |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0018 | [dHAS_TEMPLATE_FUNCTION_DEFAULT_PARAM][018] | параметры по умолчанию  |                             |
| 0019 | [dHAS_AGGREGATE_INITIALIZE][019]            | `vec { "1", "2", "3"}`  |                             |
| 0020 | [dCAN_DELETE_FUNCTION][020]                 | `func = delete`         | dNOCOPYABLE                 |
| 0021 | [dNOCOPYABLE][021]                          | `func = delete`         |                             |
| 0022 | [dHAS_VARIADIC_TEMPLATE][022]               | `template<class...>`    |                             |
| 0023 | [dHAS_USING_ALIAS][023]                     | `using type = t`        |                             |
| 0024 | [dHAS_USING_ALIAS_STD][024]                 | `std::remove_cv_t`      | gcc486                      |

|  ID  | с++11, msvc2015                             |         описание        |        дополнительно        |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0025 | [dHAS_NOEXCEPT][025]                        | noexcept                | gcc460                      |
| 0026 | [dHAS_THREAD_LOCAL][026]                    | thread local            |                             |
| 0027 | [dHAS_CPP11][027]                           | полная поддержка с++11  |                             |
| 0028 | [dHAS_CONSTEXPR_CPP11][028]                 | constexpr уровня с++11  | dCONSTANT, dCONSTEXPR_CPP11 |
| 0029 | [dHAS_TRAILING_RETURN_TYPE][029]            | `auto foo() -> int`     |                             |
| 0030 | [dHAS_AUTO_RETURN_TYPE][030]                | `auto foo()`            |                             |
| 0031 | [dHAS_ABOMINABLE][031]                      | поддержка abominable    |                             |
| 0032 | [dHAS_BINARY_LITERAL][032]                  | бинарные литералы       |                             |
| 0033 | [dHAS_U8_LITERAL][033]                      | u8 literal              |                             |
| 0034 | [dHAS_U16_LITERAL][034]                     | u16 literal             |                             |
| 0035 | [dHAS_U32_LITERAL][035]                     | u32 literal             |                             |
| 0036 | [dHAS_CHAR8_TYPE][036]                      | char8_t                 |                             |
| 0037 | [dHAS_CHAR16_TYPE][037]                     | char16_t                |                             |
| 0038 | [dHAS_CHAR32_TYPE][038]                     | char32_t                |                             |

|  ID  | c++14, msvc2017                             |         описание        |        дополнительно        |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0039 | [dHAS_CPP14][039]                           | полная поддержка с++14  |                             |
| 0040 | [dHAS_CONSTEXPR_CPP14][040]                 | constexpr уровня с++14  | dCONSTEXPR_CPP14            |

|  ID  | c++17, msvc2017                             |         описание        |        дополнительно        |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0041 | [dHAS_CPP17][041]                           | полная поддержка с++17  |                             |
| 0042 | [dHAS_RVALUE_ARRAY][042]                    | `std::move(arr)`        |                             |
| 0043 | [dNODISCARD][043]                           | `[[nodiscard]]`         |                             |

|  ID  | расширение                                  |          msvc           |        gcc                  |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0044 | [dTHREAD_LOCAL_EXTENSION][044]              | `__declspec(thread)`    | `__thread`                  |

|  ID  | msvc                                        |         описание        |       дополнительно         |
|:----:|:-------------------------------------------:|:-----------------------:|:---------------------------:|
| 0045 | [dHAS_ZERO_SIZE_ARRAY][045]                 | `int arr[0]`            |                             |


dHAS_NULLPTR
------------
`с++11; msvc2010; gcc460`  
Если определен, значит компилятору доступно `nullptr_t` и `nullptr`  
<br/>


dHAS_TYPE_TRAITS
----------------
`с++11; msvc2010`  
Определен, если компилятору доступен заголовок `#include<type_traits>`  
В зависимости от `dHAS_TYPE_TRAITS` дополнительно определяются макросы:  

```
#ifdef dHAS_TYPE_TRAITS
    #define dTRAIT std
#else
    #define dTRAIT tools
#endif

#define dTRAIT_CONST(...)                    \
    public ::dTRAIT::integral_constant<bool, \
        detail::__VA_ARGS__::value           \
    >
```

Макросы `dTRAIT` и `dTRAIT_CONST` предназначены для реализации `tools`  
Идея в том, что бы использовать:
  - для старых компиляторов `#include <tools/traits.hpp>`  
  - для новых компиляторов `#include <type_traits>`  
<br/>


dHAS_DECLTYPE
-------------
`с++11; msvc2010`  
Определен, если компилятору доступно: `deltype(expr)`  
<br/>


dHAS_CSTDINT
------------
`с++11; msvc2010`  
Определен, если компилятору доступен заголовок `#include<cstdint>`  
<br/>


dHAS_LAMBDA
-----------
`с++11; msvc2010`  
Определен, если компилятору доступны лямбды:  

```cpp
auto lambda = [](const auto& v) 
{
    std::cout << v << '\n';
};
```
<br/>


dHAS_HASH
---------
`с++11; msvc2010`  
Определен, если компилятору доступен `std::hash`  
<br/>


dHAS_STATIC_ASSERT
------------------
`с++11; msvc2010`  
Определен, если компилятору доступен `static_assert`  
В зависимости от этого макроса определяются:  
  - `dSTATIC_ASSERT` и `dSTATIC_CHECK`  
<br/>


dSTATIC_ASSERT
--------------
Для новых компиляторов макрос раскрывается в стандартный `static_assert`  
А для старых компиляторов используется велосипед,  
который можно применять везде, где можно применять  
стандартный `static_assert`  
<br/>


dSTATIC_CHECK
-------------
Для новых компиляторов макрос раскрывается в стандартный static_assert  
А для старых компиляторов используется велосипед,  
который можно применять только в области действия функций  
<br/>


dHAS_CHAR16_TYPEDEF
-------------------
`msvc[2010 - 2013]`  
Определен, если `char16_t` - это `typedef` фундаментального типа  
<br/>


dHAS_CHAR32_TYPEDEF
-------------------
`msvc[2010 - 2013]`  
Определен, если `char32_t` - это `typedef` фундаментального типа  
<br/>


dHAS_RVALUE_REFERENCES
----------------------
`с++11; msvc2012`  
Определен, если компилятор поддерживает rvalue-reference `T&& ref`  
<br/>


dHAS_ARRAY_EMPTY_SIZE
---------------------
`с++11; msvc2012`  
Определен, если компилятор поддерживает массивы  
без указания размеров `T empty[]`  

```cpp
typedef int arr1[];
typedef int arr2[][1];
```
Формально, такие массивы не по стандарту языка.  
Однако, некоторые компилятора поддерживают их в качестве расширения.  
<br/>


dHAS_ENUM_CLASS
---------------
`с++11; msvc2012`  
Определен, если компилятор поддерживает `enum class`  

```cpp
enum eFLAGS1       : int { eSAMPLE  = 0 };
enum class eFLAGS2 : int { eEXAMPLE = 0 };
```
Так же, макрос может использоваться для проверки  
доступности `std::underlying_type`  
<br/>


dHAS_EMPLACE
------------
`с++11; msvc2012`  
Определен, если стандартным контейнерам доступны  
методы `emplace` или `emplace_back`  

```cpp
std::vector<int> vec;
vec.emplace_back(1);

std::map<int, int> map;
map.emplace(1, 1);
```
Для старых компиляторов используется `push_back`  
<br/>


dHAS_ATOMIC
-----------
`с++11; msvc2012`  
Определен, если компилятору доступно `#include<atomic>`  
Что характерно: если компилятору доступны атомики,
то ему так же доступны мьютексы, треды, и фьючи:  

```cpp
#include <future>
#include <thread>
#include <mutex>
```
<br/>


dHAS_CHRONO
------------
`с++11; msvc2012`  
Определен, если компилятору доступно `#include<chrono>`  
<br/>


dHAS_TEMPLATE_FUNCTION_DEFAULT_PARAM
------------------------------------
`с++11; msvc2013`  
Определен, если компилятор поддерживает  
параметры по умолчанию в шаблонах функций  

```cpp
template<class T, size_t n = T::count>
void foo(T) {}
```
Для старых компиляторов параметры по умолчанию доступны  
только для шаблонов классов  
<br/>


dHAS_AGGREGATE_INITIALIZE
-------------------------
`с++11; msvc2013`  
Определен, если компилятор поддерживает агрегатную инициализацию:  

```cpp
std::list<std::string> example = { "aaabbb", "cccddd", "fffggg" };
```
<br/>


dCAN_DELETE_FUNCTION
--------------------
`с++11; msvc2013`  
Определен, если компилятор поддерживает удаление функций/методов  
в зависимости от макроса `dCAN_DELETE_FUNCTION`  
определяется макрос `dNOCOPYABLE`  

```cpp
#ifdef dCAN_DELETE_FUNCTION                   
    // msvc[2013 - new]; c++[11 - new]
    #define dNOCOPYABLE(Class)                   \
        Class(const Class&)            = delete; \
        Class(Class&&)                 = delete; \
        Class& operator=(const Class&) = delete; \
        Class& operator=(Class&&)      = delete
#else           
    // msvc[old - 2012]; c++old
    #define dNOCOPYABLE(Class) \
        Class(const Class&);   \
        Class& operator=(const Class&)
#endif
```
<br/>


dNOCOPYABLE
-----------
Делает класс некопируемым.  
Для новых компиляторов использует удаление конструкторов копии/перемешенеия,  
и соответствующие `operator=`:  

```cpp
#define dNOCOPYABLE(Class)                   \
    Class(const Class&)            = delete; \
    Class(Class&&)                 = delete; \
    Class& operator=(const Class&) = delete; \
    Class& operator=(Class&&)      = delete
```
Для старых компиляторов объявляет конструктор копии и `operator=`,  
но у них нет реализации, поэтому попытка их использовать приведет к ошибке линковки.  
Для старых компиляторов желательно использовать макрос в приватной секции класса:  

```cpp
#define dNOCOPYABLE(Class) \
    Class(const Class&);   \
    Class& operator=(const Class&)
```
<br/>


dHAS_VARIADIC_TEMPLATE
----------------------
`с++11; msvc2013`  
Определен, если компилятор поддерживает шаблоны с переменным кол-вом параметров  
<br/>


dHAS_USING_ALIAS
----------------
`с++11; msvc2013`  
Определен, если компилятор поддерживает шаблоно-алиасы типов:  

```cpp
template<class t> using degradate_t 
    = typename std::remove_cv<
        typename std::remove_reference<t>::type 
    >::type;
```
<br/>


dHAS_USING_ALIAS_STD
--------------------
`с++11; msvc2013`  
Определен, если компилятор для стандартных метафункций  
поддерживает шаблоно-алиасы c суффиксом `_t`  

```cpp
template<class t> 
using degradate_t = std::remove_cv_t<
    std::remove_reference_t<t> 
>;
```
<br/>


dHAS_NOEXCEPT
-------------
`с++11; msvc2015; gcc460`  
Определен, если компилятор поддерживает `noexcept`  
Для старых компиляторов определяется `#define`:  

```cpp
#ifndef dHAS_NOEXCEPT
    #define noexcept throw()
#endif
```
<br/>


dHAS_THREAD_LOCAL
-----------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `thread local`  
<br/>


dHAS_CPP11
----------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `с++11` в полном объеме  
<br/>


dHAS_CONSTEXPR_CPP11
--------------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `constexpr с++11`  
Дополнительно определяются макросы:  

```cpp
#ifdef dHAS_CONSTEXPR_CPP11
    #define dCONSTEXPR_CPP11 constexpr
    #define dCONSTANT constexpr    
#else 
    #define dCONSTEXPR_CPP11 inline
    #define dCONSTANT const    
#endif
```
Макросы позволяют писать код,  
который для новых компиляторов будут использовать `constexpr`  
А для старых компиляторов - `const` и `inline`  
<br/>


dHAS_TRAILING_RETURN_TYPE
-------------------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает возможность  
указать справа тип возвращаемого значения:  

```cpp
template<typename L, typename R>
auto add(const L& lhs, const R& rhs) -> decltype(lhs + rhs)
    { return lhs + rhs; }
```
<br/>


dHAS_AUTO_RETURN_TYPE
---------------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает возможность  
указать auto в качестве возвращаемого типа:  

```cpp
template<typename L, typename R>
auto add(const L& lhs, const R& rhs)
    { return lhs + rhs; }
```
<br/>


dHAS_ABOMINABLE
---------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает отвратительные типы.  
Отвратительный тип - это тип функции с квалификатором.  

```cpp
typedef void func() const;
```
Такие типы имеют ограниченный способ использования:  

```cpp
typedef void func() const;

struct some
{
    void foo() const 
    {
        std::cout << __func__ << '\n';
    }
    func m_method;
};

func some::*m_method =  &some::foo;

int main()
{
    some s;
    (s.*m_method)();
}
```
<br/>


dHAS_BINARY_LITERAL
-------------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает бинарные литералы:  

```cpp
int x = 0b00010000;
```
<br/>


dHAS_U8_LITERAL
---------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `u8 литерал`:  

```cpp
const auto* text = u8"привет"; // utf8
```
<br/>


dHAS_U16_LITERAL
---------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `u литерал`:  

```cpp
const auto* text = u"привет"; // utf16
```
<br/>


dHAS_U32_LITERAL
---------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `U литерал`:  

```cpp
const auto* text = U"привет"; // utf32
```
<br/>


dHAS_CHAR8_TYPE
---------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `char8_t`  

```cpp
char8_t v = u8'м'; // utf8
```
<br/>


dHAS_CHAR16_TYPE
----------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `char16_t`  

```cpp
char16_t v = u'м'; // utf16
```
<br/>


dHAS_CHAR32_TYPE
----------------
`с++11; msvc2015`  
Определен, если компилятор поддерживает `char32_t`  

```cpp
char32_t v = u'м'; // utf32
```
<br/>


dHAS_CPP14
----------
`c++14; msvc2017`  
Определен, если компилятор поддерживает `c++14` в полном объеме  
<br/>


dHAS_CONSTEXPR_CPP14
--------------------
`c++14; msvc2017`  
Определен, если компилятор поддерживает constexpr уровня `c++14`  
Т.е., без ограничений `с++11`  

```cpp
#ifdef dHAS_CONSTEXPR_CPP14
    #define dCONSTEXPR_CPP14 constexpr
#else
    #define dCONSTEXPR_CPP14 inline
#endif
```

Например, в `c++14` можно делать constexpr функции с использованием циклов.  
А для `с++11` такая возможность недоступна.  
<br/>


dHAS_CPP17
----------
`c++17; msvc2017`  
Определен, если компилятор поддерживает `c++17` в полном объеме  
<br/>


dHAS_RVALUE_ARRAY
-----------------
`c++17; msvc2017`  
Определен, если компилятор поддерживает `rvalue-reference`  
```cpp
int arr[2];
int(&&ref)[2] = std::move(arr);
```
<br/>


dNODISCARD
----------
`c++17; msvc2017`  
Определен, если компилятор поддерживает `[[nodiscard]]`

```cpp
dNODISCARD summ(int a, int b);
```
<br/>


dTHREAD_LOCAL_EXTENSION
-----------------------
`msvc; gcc`  
Старые компиляторы используют расширение для `thread local`  
Компилятор msvc использует `__declspec(thread)`  
Компилятор gcc/mingw использует `__thread`  
<br/>


dHAS_ZERO_SIZE_ARRAY
--------------------
`msvc`  
Компиляторы `msvc` поддерживают массивы с нулевым кол-вом элементов:  

```cpp
using arr = int[0];
```
Такие массивы не по стандарту,  
однако msvc поддерживают их в качестве расширения  
<br/>


История изменений 
-----------------

|  ID  |    дата    | время |      ветка       | status  | длительность |
|:----:|:----------:|:-----:|:----------------:|:-------:|:------------:|
| 0001 | 2025-11-11 | 23:50 | [#6-dev-support] | VERSION | 4 часа       |

[#6-dev-support]: ../history.md#-v006-dev

[001]: #dhas_nullptr
[002]: #dhas_type_traits
[003]: #dhas_decltype
[004]: #dhas_cstdint
[005]: #dhas_lambda
[006]: #dhas_hash
[007]: #dhas_static_assert
[008]: #dstatic_assert
[009]: #dstatic_check
[010]: #dhas_char16_typedef
[011]: #dhas_char32_typedef

[012]: #dhas_rvalue_references
[013]: #dhas_array_empty_size
[014]: #dhas_enum_class
[015]: #dhas_emplace
[016]: #dhas_atomic
[017]: #dhas_chrono

[018]: #dhas_template_function_default_param
[019]: #dhas_aggregate_initialize
[020]: #dhas_delete_function
[021]: #dnocopyable
[022]: #dhas_variadic_template
[023]: #dhas_using_alias
[024]: #dhas_using_alias_std

[025]: #dhas_noexcept
[026]: #dhas_thread_local
[027]: #dhas_cpp11
[028]: #dhas_constexpr_cpp11
[029]: #dhas_trailing_return_type
[030]: #dhas_auto_return_type
[031]: #dhas_abominable
[032]: #dhas_binary_literal
[033]: #dhas_u8_literal
[034]: #dhas_u16_literal
[035]: #dhas_u32_literal
[036]: #dhas_char8_type
[037]: #dhas_char16_type
[038]: #dhas_char32_type

[039]: #dhas_cpp14
[040]: #dhas_constexpr_cpp14

[041]: #dhas_cpp17
[042]: #dhas_rvalue_array
[043]: #dnodiscard

[044]: #dthread_local_extension
[045]: #dhas_zero_size_array
