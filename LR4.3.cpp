// Lab_04_3cpp
// Татарський Василь Петрович
// Лабораторна робота №4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 28


#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double a, b, c, x, xk, dx, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "X_поч = "; cin >> x;
    cout << "X_кін = "; cin >> xk;
    cout << "dX = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------" << endl;
    cout << "|" << setw(7) << "x" << " | " << setw(10) << "F" << " |" << endl;
    cout << "----------------------------" << endl;

    while (x <= xk)
    {
        if (c < 0 && a != 0)
            F = -a * x * x;
        else if (c > 0 && a == 0)
        {
            if (x != 0)
                F = (a - x) / (c * x);
            else
                F = 0;
        }
        else
        {
            if (c != 0)
                F = x / c;
            else
                F = 0;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << " | " << setw(10) << setprecision(3) << F << " |" << endl;

        x = x + dx;
    }

    cout << "----------------------------" << endl;

    return 0;
}