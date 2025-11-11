[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![S]][H] dfunction v0.0.2
==========================
Макрос `dFUNCTION` раскрывается в название функции,  
внутри которой он был запущен:  

```cpp
#include <compile/dfunction.hpp>
#include <iostream>

namespace xxx
{
    static const char* foo() { return dFUNCTION; }
}

int main()
{
    std::cout << xxx::foo()  << '\n';
}
```

Вывод в консоль приложения:  

```
const char *__cdecl xxx::foo(void)
```

<br/>

История изменений 
-----------------

|  ID  |    дата    | время |     ветка      | status  | длительность |
|:----:|:----------:|:-----:|:--------------:|:-------:|:------------:|
| 0001 | 2025-11-11 | 04:30 | [#5-dev-dfunc] | VERSION | 1 час 10 мин |

[#5-dev-dfunc]: ../history.md#-v005-dev
