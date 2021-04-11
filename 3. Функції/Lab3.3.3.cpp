/*
3.	ќписати функц≥ю DigitN (K, N) ц≥лого типу, €ка повертаЇ N-у цифру ц≥лого позитивного числа K (цифри в числ≥ нумеруютьс€ справа нал≥во). 
якщо к≥льк≥сть цифр в числ≥ K менше N, то функц≥€ повертаЇ -1. 
ƒл€ кожного з п'€ти даних ц≥лих позитивних чисел K1, K2, ..., K5 викликати функц≥ю DigitN з параметром N, що зм≥нюютьс€ в≥д 1 до 5.
*/


#include <iostream>
using namespace std;

int DigitN(int& K, int N)
{
    int i, ch = 0;
    while (K) {
        ch++;
        if (ch == N) {
            for (i = 1; i <= ch - 1; i++) {
                K /= 10;
                if (i == ch - 1) K %= 10;
            }
            return K;
        }
    }
    return -1;
}

int main()
{
    setlocale(0, "rus");
    int K, N;
    cout << "N : ";
    cin >> N;
    for (int i = 0; i <= 4; i++) {
        cout << "K" << i + 1 << "= ";
        cin >> K;
        cout << "DigitN = " << DigitN(K, N) << endl;
    }
    system("pause");
    return 0;
}