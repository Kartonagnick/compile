[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![S]][H] warning v0.0.3
========================
Кросс-платформенный инмструмент для подавления предупреждений компиляторов  

Синопсис:  

```cpp
#if defined(__GNUC__) || defined(__MINGW__) || defined(__MINGW32__)
    #define dWRN_UNUSED                  "-Wunused"
    #define dWRN_UNUSED_FUNCTION         "-Wunused-function"
    #define dWRN_UNUSED_VARIABLE         "-Wunused-variable"
    #define dWRN_UNUSED_PARAMETER        "-Wunused-parameter"
#elif defined(_MSC_VER)
    #define dWRN_UNUSED                  1
    #define dWRN_UNUSED_FUNCTION         1
    #define dWRN_UNUSED_VARIABLE         4101
    #define dWRN_UNUSED_PARAMETER        4100
#else
    error: compiler not support
#endif
```

Использование в клиетском коде:  

```cpp
dPRAGMA_PUSH
dPRAGMA_DISABLE(dWRN_UNUSED_VARIABLE)

int main()
{
    int val;
}

dPRAGMA_POP
```
<br/>


Нюансы
------
Некоторые предупреждения, такие как `unused-function` действуют на весь файл  
Подавлять такие предупреждения тоже нужно в рамках всего файла.  
Т.е., их нужно подавлять не используя dPRAGMA_PUSH/dPRAGMA_POP  

Следующий код иллюстрирует неправильное использование:  

```cpp
dPRAGMA_PUSH
dPRAGMA_DISABLE(dWRN_UNUSED_FUNCTION)

static void unreferenced(int){}

dPRAGMA_POP
```

Дело в том, что когда компилятор увидет `dPRAGMA_POP`,  
то он отменит подавление `dWRN_UNUSED_FUNCTION`,  
После чего заметит, что в файле присутствует неиспользуемая функция,  
и уже ничего не помешает ему сгенерировать предупреждение.  

Правильное использование:  

```cpp
// не используется dPRAGMA_PUSH/dPRAGMA_POP

dPRAGMA_DISABLE(dWRN_UNUSED_FUNCTION)
static void unreferenced(int){}
```
<br/>

История изменений 
-----------------

|  ID  |    дата    | время |     ветка      | status  | длительность |
|:----:|:----------:|:-----:|:--------------:|:-------:|:------------:|
| 0001 | 2025-11-10 | 21:10 | [#4-dev-warn]  | VERSION | 1 час 50 мин |

[#4-dev-warn]: ../history.md#-v004-dev
