[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![P]][H] wchar v0.0.1
======================
Определеяет размер `wchar_t`  
Синопсис:  
 
```cpp
#if WCHAR_MAX == INT8_MAX
    #define dWCHAR_8BIT
#elif WCHAR_MAX == INT16_MAX
    #define dWCHAR_16BIT
#elif WCHAR_MAX == INT32_MAX
    #define dWCHAR_32BIT
#elif WCHAR_MAX == INT64_MAX
    #define dWCHAR_64BIT
#elif WCHAR_MAX == UINT8_MAX 
    #define dWCHAR_8BIT
#elif WCHAR_MAX == UINT16_MAX
    #define dWCHAR_16BIT
#elif WCHAR_MAX == UINT32_MAX
    #define dWCHAR_32BIT
#elif WCHAR_MAX == UINT64_MAX
    #define dWCHAR_64BIT
#else
    #error "unknown size of wchar_t"
#endif
```

<br/>

История изменений 
-----------------

|  ID  |    дата    | время |      ветка       | status  | длительность |
|:----:|:----------:|:-----:|:----------------:|:-------:|:------------:|
| 0001 | 2025-11-11 | 23:50 | [#6-dev-support] | VERSION | 4 часа       |

[#6-dev-support]: ../history.md#-v006-dev
