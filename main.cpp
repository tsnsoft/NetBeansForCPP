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

