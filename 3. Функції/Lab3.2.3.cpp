/*
3.	Описати функцію CircleS (R) дійсного типу, яка знаходить площу круга радіуса R (R - дійсне).
За допомогою цієї функції знайти площі трьох кіл з даними радіусами. 
Площа круга радіуса R обчислюється за формулою S = π · R2. Як значення π вважати рівним 3.14.
*/

#include <stdio.h>
#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;

void main() {
    double CirleS();
    {
        double r, i, result, PI = 3.14;
        setlocale(LC_ALL, "ru");
        for (i = 0;i < 3;i++)
        {
            cout << "Введите радиус окружности: ";
            cin >> r;
            result = PI * r * r;
            cout << " Пощадь окружности: " << result << endl << endl;
        }
        system("pause");
  
    }
}