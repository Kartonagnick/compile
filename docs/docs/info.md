[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![S]][H] compile/info v0.0.1
=============================
Отвечает за вывод краткой информации о сборке,  
а так же предоставляет макро-функции для вывода текста в лог сборки.  

Краткоая информация о сборке:  
  - краткое описание конфигурации сборки.  
  - используемый стандарт языка с++,  
  - используемая платформа, 
  - используемая IDE

В лог сборки выводится информация вида:  
```
1>------------------------------------[sample]
1>__cplusplus ....... 201703L
1>c++17 ............. enabled
1>msvc2019 .......... 16.11.19
1>_MSC_FULL_VER ..... 192930146
1>_MSVC_LANG ........ 201703L
1>_MSC_EXTENSIONS ... enabled
1>  ---
1>[sample] disabled -> pch
1>[sample] STABLE-DEBUG
1>[sample] MTd (debug-static runtime c++)
1>[sample] 0.0.5, x86-debug-MTd, stable
1>  ---
```
<br/>

Публичное API:  
  - `dCOMPILER_MESSAGE(...)` не отключаемый  
  - `dPRAGMA_MESSAGE(...)`   отключаемый  
  - `dSHOW_BUILD(title, name)` информация о сборке  
<br/>

message
-------
Пример вывода в лог сборки значения `__cplusplus `  

```cpp
    // -- не отключаемый макрос
    dCOMPILER_MESSAGE("с++ version: " dSSTRINGIZE(__cplusplus))

    // -- опции для подавления вывода текста
    // #define dHIDE_MSVC_MESSAGES 1
    // #define dHIDE_CLANG_MESSAGES 1
    // #define dHIDE_MINGW_MESSAGES 1
    // #define dHIDE_GCC_MESSAGES 1

    // -- вывод текста можно отключить
    dPRAGMA_MESSAGE("с++ version: " dSSTRINGIZE(__cplusplus))
```

Пример использования макро-функции `dSHOW_BUILD`  

```cpp
#include <sample/sample.ver>
#include <build_summary/info.hpp>
dSHOW_BUILD("[sample]", dSAMPLE)
```

Где, содержимое версионного файла имеет вид:  

```cpp
// содержимое sample.ver
#pragma once
#define dSAMPLE_MAJOR 0
#define dSAMPLE_MINOR 0
#define dSAMPLE_PATCH 1
```

Таким образом, `dSAMPLE` - это префикс,  
с помощью которого определяются тройки чисел версии.  
<br/>


manual
------
Если дефайн препроцессора `dMANUAL_SHOW_COMPILER_VERSION` не определен,  
тогда макрос `dSHOW_BUILD` автоматически вызывает `dSHOW_COMPILER_VERSION`,  
что полностью соответствует обычному поведению.  

Но если пользователь определил дефайн `dMANUAL_SHOW_COMPILER_VERSION`,  
тогда макрос `dSHOW_BUILD` выведет только: 
```
6>  ---
6>[sample] disabled -> pch
6>[sample] STABLE-DEBUG
6>[sample] MTd (debug-static runtime c++)
6>[sample] 0.0.5, x86-debug-MTd, stable
6>  ---
```
В этом случае, что бы увидеть информацию о версии компилятора,  
пользователю нужно будет вызывать макрос `dSHOW_COMPILER_VERSION` вручную.  

about
-----
Пример использования dABOUT_CONFIG:  

```cpp
#include <compile/compile.ver>
#include <compile/info.hpp>

#include <iostream>

int main()
{
    std::cout << "VERSION: " << dABOUT_CONFIG(dCOMPILE) << '\n';
}

```

Вывод в консоль:  

```
VERSION: 0.0.2, x86-debug-MTd, stable
```
<br/>


История изменений 
-----------------

|  ID  |    дата    | время |     ветка      | status  | длительность |
|:----:|:----------:|:-----:|:--------------:|:-------:|:------------:|
| 0001 | 2025-11-06 | 18:10 | [#3-dev-info]  | VERSION | 1 час 10 мин |

[#3-dev-info]: ../history.md#-v003-dev
