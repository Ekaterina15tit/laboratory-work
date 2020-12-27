#include <cmath>
#include <iostream>
using namespace std;

double f(double x);
double g(double x);

int main()
{
    double eps = 0.0001; // вводим данные
    double xn = 0.0;
    double xk = 2.0;
    for (double x = (xn + xk) / 2;  // в качестве начального приближения отрезка
        eps < fabs(f(x)); x = g(x))
        cout << "\rx = " << x << " f(x) = " << f(x) << "\t\t";
    cin.get();
    return 0;
}

double f(double x)
{
    return x + 0.25 * pow(x, 3) - 1.2502;
}

double g(double x)
{
    return -(0.25 * pow(x, 3) - 1.2502);
}