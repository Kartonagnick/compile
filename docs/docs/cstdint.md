[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![P]][H] cstdint v0.0.1
========================
Для новых компиляторов используется стандартный `#include <cstdint>`  

```cpp
// all; msvc{old-2008}

#if !defined (_MSC_VER) || _MSC_VER >= 1600               
    #define dHAS_CSTDINT 1
    #include <cstdint>
#endif
```

Для старых компиляторов определяются константы:  

```cpp
#define INT8_MIN    (-127i8 - 1)
#define INT16_MIN   (-32767i16 - 1)
#define INT32_MIN   (-2147483647i32 - 1)
#define INT64_MIN   (-9223372036854775807i64 - 1)
#define INT8_MAX    127i8
#define INT16_MAX   32767i16
#define INT32_MAX   2147483647i32
#define INT64_MAX   9223372036854775807i64
#define UINT8_MAX   0xffui8
#define UINT16_MAX  0xffffui16
#define UINT32_MAX  0xffffffffui32
#define UINT64_MAX  0xffffffffffffffffui64
```
<br/>

История изменений 
-----------------

|  ID  |    дата    | время |      ветка       | status  | длительность |
|:----:|:----------:|:-----:|:----------------:|:-------:|:------------:|
| 0001 | 2025-11-11 | 23:50 | [#6-dev-support] | VERSION | 4 часа       |

[#6-dev-support]: ../history.md#-v006-dev
