/*
3.	Створіть програму обчислення
 .
Для обчислення реалізувати функцію піднесення числа до степеня.

*/

#include<iostream>
using namespace std;

unsigned getReverse(int n) {
    unsigned r = n % 10;
    while (n /= 10) {
        r = r * 10 + n % 10;
    }
    return r;
}

bool isPalindrom(int n) {
    return n == getReverse(n);
}

bool isSimple(int n)
{
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {

            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout << "Input n: " << endl;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (isSimple(i) && isPalindrom(i))
        {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}
