#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    double a, b, c, d, e, f, h;
    cout << " Введите a: " << endl;
    cin >> a;
    cout << " Введите b: " << endl;
    cin >> b;
    c = pow(a + b, 3); d = pow(a, 3) + 3 * pow(a, 2) * b;
    e = 3 * a * pow(b, 2) + pow(b, 3);
    cout << "Ваш результат :" << (double)(c - d) / e  << endl;
}