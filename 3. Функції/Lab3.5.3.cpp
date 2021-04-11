/*
3.	Описати функцію Even (K) логічного типу, яка повертає True, якщо цілий параметр K є парним, і False в іншому випадку.
З її допомогою знайти кількість парних чисел в наборі з 10 цілих чисел.


*/

#include <iostream>
using namespace std;


bool even(int k)
{
    return !(k & 1);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int number, count = 0;
    cout << "Введите 10 четных чисел: " << endl;
    for (int i = 0; i < 10; ++i)
    {
        cin >> number;
        if (even(number))
        {
            ++count;
        }
    }
    cout << " Считаются четные числа : " << count << endl;
    return 0;
}