// Lab_03_1.cpp
// <Молотюк СофіяЮ
// Лабораторна №3.1
// Розгалуження, задане формулою: функція однієї змінної
// Варіант 16

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double x; // вхідний параметр
    double y; // результат обчисленя
    double A; // 
    double B; //
    cout << "x = "; cin >> x;
    A = 5 * exp(3 * x);
    // Спосіб1: розгалуження в скороченій формі
    if (x < -1)
        B = sqrt(2) * pow(x, 3) - 7;
    if (-1 <= x && x <= 3)
        B = 2 * log10(1 - x / 4);
    if (x >= 3)
        B = cos(abs(x));
    y = A + B;
    cout << endl;
    cout << "1) y=" << y << endl;
    // Спосіб2: розгалуження в повній формі
    if (x < -1)
        B = sqrt(2) * pow(x, 3) - 7;
    else if (x >= 3)
        B = cos(abs(x));
    else B= 2 * log10(1 - x / 4);
    y = A + B;
    cout << "2) y=" << y << endl;
    cin.get();
    return 0;
}



