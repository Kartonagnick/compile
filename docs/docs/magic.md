[![logo](../logo.png)](../docs.md)  

[M]: #main       "головной файл документации"
[H]: ../docs.md      "на главную"
[P]: ../icons/progress.png  "в процессе..."
[S]: ../icons/success.png   "ошибок не обнаружено"
    
<a name="main"></a>
[![P]][H] magic v0.0.1
======================
Добавленна в кодовую базу как дань уважения истории.  
На бою никогда не использовалась.  

Содержимое макроса попадает и в исходный код, и в лог сборки.  
Пример использования:  

```cpp
#include <iostream>
#include <cassert>
#include <compile/magic.hpp>

int main()
{
    dMAGIC(std::cout << "Fedya = " << Fedya << '\n');
    dMAGIC(sample<int, bool>::type) var = 10;
    assert(var == 10);
}
```

Вывод в лог сборки:  

```
std::cout << "Fedya = " << Fedya << '\n'
sample<int, bool>::type
```

Вывод в консоль приложения:  

```
Fedya = 40
```

<br/>

История изменений 
-----------------

|  ID  |    дата    | время |     ветка      | status  | длительность |
|:----:|:----------:|:-----:|:--------------:|:-------:|:------------:|
| 0001 | 2025-11-10 | 21:10 | [#4-dev-warn]  | VERSION | 1 час 50 мин |

[#4-dev-warn]: ../history.md#-v004-dev
