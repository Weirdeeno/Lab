/*
7.	Описати рекурсивну функцію GCD (A, B) цілого типу, яка знаходить найбільший спільний дільник (НСД, greatest common divisor) двох цілих позитивних чисел A і B, використовуючи алгоритм Евкліда:
НСД (A, B) = НСД (B, A mod B), B ≠ 0; НСД (A, 0) = A,
де «mod» позначає операцію взяття залишку від ділення. За допомогою цієї функції знайти НСД (A, B), НCД (A, C), НCД (A, D), якщо дано числа A, B, C, D.
*/


#include <iostream>

using namespace std;
int NOD(int a, int b);

int main()
{

    int a, b;
    cout << "A = ";
    cin >> a;

    cout << "B = ";
    cin >> b;

    if (b == 0)
        cout << a << endl;
    else
        cout << NOD(a, b) << endl;

    system("pause");
    return 0;
}

int NOD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}