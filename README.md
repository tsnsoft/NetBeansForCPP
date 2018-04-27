# NetBeansForCPP
Использование NetBeans для программирования на C++ 

1) **Нужно установить привязку NetBeans к пакету С++ (устанавливается отдельно от NetBeans):**

![screenshot](/screenshots/screenshot1.png)


2) Необходимо установить в настройках проекта значение типа консоли: "Внешний терминал" или "Стандартные выходные данные", чтобы в среде NetBeans запускались консольные программы: 

![screenshot](/screenshots/screenshot2.png)

![screenshot](/screenshots/screenshot2b.png)

***При выборе значения "Стандартные выходные данные" будет использоваться встроенный  в NetBeans терминал, но не будет работать отладчик! Поэтому лучше использовать "Внешний терминал"***



3) Необходимо установить проекту правильную кодировку для использования русских букв в терминальном выводе:

![screenshot](/screenshots/screenshot3.png)



4) Необходимо настроить проект на режим упаковки всех нужных библиотек в один готовый исполняемый файл (добавить флаги компоновщика: -static-libstdc++ -static-libgcc):

![screenshot](/screenshots/screenshot3b.png)

![screenshot](/screenshots/screenshot3c.png)



(!) Тестовая программа:
```
#include <cstdlib>
#include<iostream>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
    char name[12];
    cout << "Введите свое имя: ";
    cin >> name;
    cout << "Привет, " << name << "!\n";
    return 0;
}
```
:+1: 

![screenshot](/screenshots/screenshot4.png)

PS: Установщик MinGW можно скачать с сайта http://www.mingw.org/ , точнее с https://sourceforge.net/projects/mingw/files/latest/download?source=files

После чего с помощью этого загрузчика нужно закачать следующие компоненты:
![screenshot](/screenshots/screenshot5.png)

**(!) Далее для Windows-систем необходимо добавить в переменную окружения ссылку на две папки MinGW:  ";D:\MinGW\bin;D:\MinGW\MSYS\1.0\bin)"**
![screenshot](/screenshots/screenshot6.png)

*В данном примере MinGW установлен в корень диска "D:\"*

***Если эти ссылки не добавить, то не будет работать отладчик в NetBeans!***

