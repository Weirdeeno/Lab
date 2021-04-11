/*
3.	Описати функцію Mean (X, Y, AMean, GMean), яка обчислює середнє арифметичне AMean = (X + Y) / 2
і середнє геометричне GMean = (X · Y) 1/2 двох позитивних чисел X і Y (X і Y - вхідні , AMean і GMean - вихідні параметри дійсного типу).
За допомогою цієї функції знайти середнє арифметичне і середнє геометричне для пар (A, B), (A, C), (A, D), якщо дані A, B, C, D.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
void Mean(double x, double y, double& AMean, double& GMean)
{
    AMean = (x + y) / 2.;
    GMean = sqrt(x * y);
}
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c, d, AM, GM;
    cout << "Введите A - "; cin >> a;
    cout << "Введите B - "; cin >> b;
    cout << "Введите C - "; cin >> c;
    cout << "Введите D - "; cin >> d;
    Mean(a, b, AM, GM);
    cout << "Для пары AB, среднее арифметическое = " << AM << "; Среднее геометрическое = " << GM << endl;
    Mean(a, c, AM, GM);
    cout << "Для пары AC, среднее арифметическое = " << AM << "; Среднее геометрическое = " << GM << endl;
    Mean(a, d, AM, GM);
    cout << "Для пары AD, среднее арифметическое = " << AM << "; Среднее геометрическое = " << GM << endl;
    return 0;
}