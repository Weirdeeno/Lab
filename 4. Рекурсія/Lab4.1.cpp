/*
1.	Описати рекурсивну функцію Fact (N) дійсного типу, яка обчислює значення факторіала
N! = 1 · 2 · ... · N
(N> 0 - параметр цілого типу). За допомогою цієї функції обчислити факторіали п'яти даних чисел.
*/

#include <iostream>
using namespace std;

long double fact(int N)
{
    if (N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

int main()
{
    int N;
    setlocale(0, "rus"); 
    cout << "Введите число для вычисления факториала: ";
    cin >> N;
    cout << "Факториал для числа " << N << " = " << fact(N) << endl << endl; 
    return 0;
}