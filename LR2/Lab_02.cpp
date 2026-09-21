// Lab_02.cpp
// Кіц Роман
// Лабораторна робота №2.
// Лінійні програми.
// Варіант 12

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double Pi = 4 * atan(1.); // константа pi

    double a; // вхідний параметр

    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "a = "; cin >> a;

    z1 = (sin(4 * a) / (1 + cos(4 * a))) * (cos(2 * a) / (1 + cos(2 * a)));

    z2 = 1.0 / tan(1.5 * Pi - a);
       
    cout << endl;

    cout << "z1 = " << z1 << endl; // Виведення результату обрахунку формули z1
    cout << "z2 = " << z2 << endl;  // Виведення результату обрахунку формули z2

    cin.get();
    return 0;
}
