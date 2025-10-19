// Lab_04_4cpp
// Татарський Василь Петрович
// Лабораторна робота №4.4
// Табуляція функції, заданої графіком
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    double R, x, xk, dx, y;

    cout << "R = "; cin >> R;
    cout << "x_поч = "; cin >> x;
    cout << "x_кін = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "----------------------------" << endl;
    cout << "|" << setw(7) << "x" << " | " << setw(10) << "y" << " |" << endl;
    cout << "----------------------------" << endl;

    while (x <= xk)
    {
        if (x <= -8 - R)
            y = -R;
        else if (-8 - R <= x && x <= -8 + R)
            y = -R + sqrt(R * R - (x + 8) * (x + 8));
        else if (-8 + R <= x && x <= 2)
            y = (((x + 8 - R) * (R + 2)) / (10 - R)) - R;
        else if (2 <= x && x <= 6)
            y = 0;
        else
            y = (x - 6) * (x - 6);

        cout << "|" << setw(7) << setprecision(2) << x
            << " | " << setw(10) << setprecision(3) << y << " |" << endl;

        x = x + dx;
    }

    cout << "----------------------------" << endl;

    return 0;
}