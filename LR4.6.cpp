// Lab_04_6.cpp
// Татарський Василь Петрович
// Лабораторна робота №4.6
// Вкладені цикли
// Варіант 28

#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double P, S;
    int i, k;

    // Метод 1: while(...) { ... while(...) {...} ...};
    P = 1;
    i = 2;
    while (i <= 10)
    {
        S = 0;
        k = 1;
        while (k <= (20 - i))
        {
            S += (double)i / k;
            k++;
        }
        P *= (1 + S) / (1 + S * S);
        i++;
    }
    cout << "Метод 1 (while-while): P = " << P << endl;

    // Метод 2: do{... do{...} while(...) ...} while(...);
    P = 1;
    i = 2;
    do
    {
        S = 0;
        k = 1;
        do {
            S += (double)i / k;
            k++;
        } while (k <= (20 - i));
        P *= (1 + S) / (1 + S * S);
        i++;
    } while (i <= 10);
    cout << "Метод 2 (do-do-while): P = " << P << endl;

    // Метод 3: for(...; ...; n++) { ... for(...; ...; k++) {...} ...};
    P = 1;
    for (i = 2; i <= 10; i++)
    {
        S = 0;
        for (k = 1; k <= (20 - i); k++)
        {
            S += (double)i / k;
        }
        P *= (1 + S) / (1 + S * S);
    }
    cout << "Метод 3 (for-for): P = " << P << endl;

    // Метод 4: for(...; ...; n--) { ... for(...; ...; k--) {...} ...};
    P = 1;
    for (i = 10; i >= 2; i--)
    {
        S = 0;
        for (k = (20 - i); k >= 1; k--)
        {
            S += (double)i / k;
        }
        P *= (1 + S) / (1 + S * S);
    }
    cout << "Метод 4 (for зворотній): P = " << P << endl;

    return 0;
}