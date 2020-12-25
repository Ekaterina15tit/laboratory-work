#include <iostream>
#include <conio.h>
#include <cstring>
#include <cctype>
#include <Windows.h>
using namespace std;
void Print(char* str)
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char* begin = str;  //начало текущего слова
    int counter = 0;    //счетчик цифр
    while (true)
    {
        //текущий символ - цифра
        if (*str >= '0' && *str <= '9')
        {
            counter++;
            str++;
            continue;
        }

        //текущий символ - конец слова
        if (*str == ' ' || *str == '\0') {
            //если в слове 1 цифра
            if (counter == 1) {
                //вывод слова в консоль
                while (begin < str) {
                    cout << *begin;
                    begin++;
                }
                cout << endl;
            }
            //Если конец строки - завершить поиcк
            if (*str == '\0')
                break;
            //Поиск следующего слова
            Print(++str);
            break;
        }
        //переход к следующему символу
        str++;
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char str[256];
    cout << "Enter sentence: ";

    cin.getline(str, 255);
    str[255] = '\0';
    Print(str);
    system("pause");
}
