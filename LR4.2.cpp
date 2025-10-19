// Lab_04_2.cpp
// Татарський Василь Петрович
// Лабораторна робота №4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, A, B, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "y" << " |" << endl;
    cout << "----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        // Обчислення A в залежності від діапазону x
        if (x <= -5)
        {
            A = 1.0 / tan(exp(x));  // ctg(e^x)
        }
        else if (x > -5 && x < 0)
        {
            A = (x * x) / (2.1 + sin(abs(x)));
        }
        else // x >= 0
        {
            A = log(sqrt(abs(x) - x * x / 2.0));
        }

        // Обчислення B в залежності від діапазону x
        if (x <= -5)
        {
            B = 0;  // для ctg(e^x) немає додаткового доданка
        }
        else if (x > -5 && x < 0)
        {
            B = 2.0 - (x * x * x) / (abs(x) + 1);
        }
        else // x >= 0
        {
            B = 0;  // для ln немає додаткового доданка
        }

        y = A + B;

        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "----------------------------" << endl;

    return 0;
}