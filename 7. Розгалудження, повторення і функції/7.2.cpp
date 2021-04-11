/*
2.Створіть програму обчислення
1) без використання власних функцій;
2) для обчислення реалізувати функції піднесення двійки до степеня і знаходження факторіалу числа.
*/

float Pow(int n)
{
    float S = 1;
    for (int i = 0; i < n; i++)
    {
        S *= -2;
    }
    return S;
}
float Fact(int n)
{
    float S = 1;
    for (int i = 2; i <= n; i++)
    {
        S *= i;
    }
    return S;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    float S;
    cout << "Input n: " << endl;
    cin >> n;
    S = Pow(n) / Fact(n);
    cout << "S = " << S << endl;
    system("pause");
    return 0;
}