/*
3.Створіть програму обчислення
Для обчислення реалізувати функцію піднесення числа до степеня.
*/

#include <iostream>
using namespace std;

float Pow(int l)
{
    float S = 1;
    for (int i = 0; i < l; i++)
    {
        S *= l;
    }
    return S;
}

int main() {
    float S = 0;
    int n;
    cout << "Input n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        S += 1 / (1 + Pow(i));
    }
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}