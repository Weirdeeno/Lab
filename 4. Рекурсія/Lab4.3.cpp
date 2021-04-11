/*
3.	Описати рекурсивну функцію PowerN (X, N) дійсного типу, яка знаходить значення N-го степеня числа X за формулами:
X⁰ = 1,
Xͯᴺ= (Xͯᴺ՛֔֔²)² при парних N> 0,
Xͯᴺ= X · Xᴺˉ¹ при непарних N> 0,
Xͯ= 1 / Xˉᴺ при N <0
(X ≠ 0 - дійсне число, N - ціле; у формулі для парних N повинна використовуватися операція цілочисельного ділення).
За допомогою цієї функції знайти значення X N для даного X при п'яти даних значеннях N.
*/

#include <iostream>
using namespace std;


int Power(long int x, unsigned int N)
{
    if (N == 0)
        return 1;
    else if (N < 0)
        return 1 / x ^ (-N);
    else if (N % 2 > 0)
        return x ^ (N / 2) ^ 2;
    else
        return x * x ^ (N - 1);
}
int main()
{
    int x, N;
    cout << "Enter x : " << endl;
    cin >> x;
    cout << "Entet N : " << endl;
    cin >> N;

    cout << Power(x, N) << endl;

    return 0;
}