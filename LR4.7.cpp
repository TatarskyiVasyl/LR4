// Lab_04_7.cpp
// Татарський Василь Петрович
// Лабораторна робота №4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних
// Варіант 28

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

int main()
{
    double xp, xk, x, dx, eps, a = 0, R = 0, S = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << setw(7) << "x"
        << setw(12) << "arctg(x)"
        << setw(12) << "S"
        << setw(7) << "n" << endl;

    x = xp;
    while (x <= xk)
    {
        n = 0;                  // лічильник ітерацій
        a = -1.0 / x;             // перший доданок в сумі: -1/x
        S = PI / 2.0;             // початкова сума S₀ = π/2
        do {
            S += a;             // додаємо доданок
            n++;
            R = -(2 * n - 1) / ((2 * n + 1) * x * x);  // рекурентне співвідношення
            a *= R;
        } while (abs(a) >= eps);

        cout << setw(7) << setprecision(2) << x
            << setw(12) << setprecision(7) << atan(x)
            << setw(12) << setprecision(7) << S
            << setw(7) << n << endl;

        x += dx;
    }

    return 0;
}