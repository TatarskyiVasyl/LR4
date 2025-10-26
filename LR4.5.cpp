// Lab_04_5.cpp
// Татарський Василь Петрович
// Лабораторна робота №4.5
// ”Подання” у плоску фігуру
// Варіант 28

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
    double x, y, R;

    cout << "R = "; cin >> R;

    srand((unsigned)time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((y * y <= R * R - x * x && x >= 0) ||
            (y >= -x && y <= R && x <= 0) ||
            (y <= x && y >= -R && x <= 0))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    for (int i = 0; i < 10; i++)
    {
        x = 2 * R * rand() / RAND_MAX - R;
        y = 2 * R * rand() / RAND_MAX - R;

        if ((y * y <= R * R - x * x && x >= 0) ||
            (y >= -x && y <= R && x <= 0) ||
            (y <= x && y >= -R && x <= 0))

            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "no" << endl;
    }

    return 0;
}