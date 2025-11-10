[H]: ../README.md  "на главную"
[R]: icons/release.png
[V]: icons/version.png
[P]: icons/progress.png
[S]: icons/success.png
[B]: icons/bug.png

[![S]][H] **История изменений**  
--------------------------------------------------------------------------------

16 сентября 2025, 03:50:00. Зарегистрирован в локальном `develop`  
16 сентября 2025, 02:21:37. Основан [Идрисовым Денисом][Denis]  

[Denis]: https://github.com/Kartonagnick

|    дата    |  время   |        событие        |  
|:----------:|:--------:|:---------------------:|  
| 2025-09-16 | 03:50:00 | регистрация git-local |  
| 2025-09-16 | 02:21:37 | дата рождения проекта |  

--------------------------------------------------------------------------------

[![P]][H] **v0.0.4 (dev)**
--------------------------------------------------------------------------------
[![V]][VE004] [![2025-11-10 21:10]][VE004]  

[2025-11-10 21:10]: https://img.shields.io/static/v1?label=2025-11-10&message=21:10&color=yellowgreen
[VE004]: changelog.md#-v004-dev

|    дата    | время |     ветка     | статус |  
|:----------:|:-----:|:-------------:|:------:|  
| 2025-11-10 | 21:00 | [#4-dev-warn] | DONE   |  
| 2025-11-10 | 19:30 | [#4-dev-warn] | BEGIN  |  

1. upd: `docs`  
   - upd: `logo.png`         (004) PRE  
   - upd: `changelog.md`     (004) PRE  
   - upd: `history.md`       (004) PRE  
   - upd: `chrono.md`        (004) PRE  
   - upd: `docs.md`          (004) PRE  
2. add: `docs/docs`  
   - add: `magic.md`         (001) PRE  
   - add: `warning.md`       (001) PRE  
3. upd: `test/include`  
   - upd: `test-stable.hpp`  (002) PRE  
   - upd: `test-develop.hpp` (002) PRE  
4. add: `test/sources/pragma`  
   - add: `test-warning.cpp` (002) PRE  
   - add: `test-magic.cpp`   (002) PRE  
5. upd: `test/sources`  
   - upd: `test.ver`         (003) PRE  
6. upd: `include/compile`  
   - upd: `compile.ver`      (003) PRE  
   - add: `warning.hpp`      (003) PRE  
   - add: `magic.hpp`        (001) PRE  
7. upd: `project.root`       (004) PRE  

[#4-dev-warn]: tasks/2025-11-10-0004-dev-warn.md
<div/>


[![S]][H] **v0.0.3 (dev)**
--------------------------------------------------------------------------------
[![V]][VE003] [![2025-11-06 18:10]][VE003]  

[2025-11-06 18:10]: https://img.shields.io/static/v1?label=2025-11-06&message=18:10&color=yellowgreen
[VE003]: changelog.md#-v003-dev

|    дата    | время |     ветка     | статус |  
|:----------:|:-----:|:-------------:|:------:|  
| 2025-11-06 | 18:00 | [#3-dev-info] | DONE   |  
| 2025-11-06 | 10:00 | [#3-dev-info] | BEGIN  |  

1. upd: `docs`  
   - upd: `chrono.md`      003  
   - upd: `logo.png`       003  
   - upd: `changelog.md`   003  
   - upd: `history.md`     003  
   - upd: `chrono.md`      003  
   - upd: `docs.md`        003  
2. add: `docs/docs`  
   - add: `info.md`        001  
3. upd: `include/compile`  
   - upd: `compile.ver`    002  
   - add: `message.hpp`    001  
   - add: `info.hpp`       001  
4. add: `include/compile/private`  
   - add: `show.hpp`       003  
   - add: `select.hpp`     001  
   - add: `cplusplus.hpp`  003  
   - add: `compilers.hpp`  001  
   - add: `bit-alt.hpp`    001  
   - add: `bit.hpp`        001  
5. upd: `include/compile/private/compilers`  
   - upd: `msvc.hpp`       015  
   - add: `msvc_tag.hpp`   004  
   - add: `msvc.hpp`       015  
   - add: `gcc.hpp`        003  
   - add: `clang.hpp`      003  
   - add: `mingw.hpp`      003  
   - add: `zfinal.hpp`     002  
6. upd: `test/sources`  
   - upd: `test.ver`       002  
   - upd: `pch.hpp`        002  
7. upd: `project.root`     003  

[#3-dev-info]: tasks/2025-11-06-0003-dev-info.md
<div/>


[![S]][H] **v0.0.2 (dev)**
--------------------------------------------------------------------------------
[![V]][VE002] [![2025-11-06 08:10]][VE002]  

[2025-11-06 08:10]: https://img.shields.io/static/v1?label=2025-11-06&message=08:10&color=yellowgreen
[VE002]: changelog.md#-v002-dev

|    дата    | время |     ветка      | статус |  
|:----------:|:-----:|:--------------:|:------:|  
| 2025-11-06 | 08:00 | [#2-dev-frame] | DONE   |  
| 2025-11-06 | 07:00 | [#2-dev-frame] | BEGIN  |  

1. upd: `docs`  
   - upd: `logo.png`          002  
   - upd: `changelog.md`      002  
   - upd: `history.md`        002  
   - upd: `chrono.md`         002  
   - upd: `docs.md`           002  
2. add: `include/compile`  
   - add: `compile.ver`       001  
3. add: `test/include`  
   - add: `test-develop.hpp`  001  
   - add: `test-stable.hpp`   001  
4. add: `test/sources/first`  
   - add: `test-origin.cpp`   001  
   - add: `test-modern.cpp`   003  
   - add: `test-classic.cpp`  003  
5. add: `test/sources`  
   - add: `main.cpp`          001  
   - add: `pch.hpp`           001  
   - add: `test.ver`          001  
6. add: `deploy`  
   - add: `ver.bat`           001  
   - add: `make-debug.bat`    001  
   - add: `compilers.bat`     001  
   - add: `run-IDE.bat`       001  
   - add: `make.bat`          001  
7. add: `deploy/cmake`  
   - add: `setup.cmake`       001  
   - add: `CMakeLists.txt`    001  
8. upd: `project.root`        002  

[#2-dev-frame]: tasks/2025-11-06-0002-dev-frame.md
<div/>


[![S]][H] **v0.0.1 (rep)**
--------------------------------------------------------------------------------
[![V]][VE001] [![2025-11-06 06:50]][VE001]  

[2025-11-06 06:50]: https://img.shields.io/static/v1?label=2025-11-06&message=06:50&color=yellowgreen
[VE001]: changelog.md#-v001-rep

|    дата    | время |     ветка      | статус |  
|:----------:|:-----:|:--------------:|:------:|  
| 2025-11-06 | 06:40 | [#1-rep-first] | DONE   |  
| 2025-11-06 | 06:20 | [#1-rep-first] | BEGIN  |  

1. add: `docs`  
   - add: `logo.png`       001  
   - add: `changelog.md`   001  
   - add: `chrono.md`      001  
   - add: `history.md`     001  
   - add: `docs.md`        001  
   - add: `icons` ...      002  
2. add: `docs/other`  
   - add: `calendar.md`  
   - add: `problem.md`     001  
3. add: `.gitlab-ci.yml`   001  
4. add: `.gitignore`       001  
5. add: `project.root`     001  
6. fix: `README.md`  
7. add: `LICENSE`  

[#1-rep-first]: tasks/2025-11-06-0001-rep-first.md
<div/>
