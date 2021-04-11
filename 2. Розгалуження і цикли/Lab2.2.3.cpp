/*
3. Елементи кола пронумеровані в такий спосіб: 1 - радіус R, 2 - діаметр D = 2 • R, 3 - довжина L = 2 • π • R, 4 - площа кола S = π • R2.
Дано номер одного з цих елементів і його значення. Вивести значення інших елементів даного кола (в тому ж порядку).
Значення π вважати рівним 3.14.*/

#include <cmath>
#include <iostream>


int main()
{
    setlocale(LC_ALL, "Russian");
    double x, R, D, L, S;
    const double PI = 3.14;
    int n;
    std::cout << "Введите номер элемента круга: ";
    std::cin >> n;
    std::cout << "Введите значение эллемента круга: ";
    std::cin >> x;

    switch (n) {
    case 1: {
        R = x;
        D = 2 * R;
        L = 2 * PI * R;
        S = PI * R * R;
        break;
    }
    case 2: {
        D = x;
        R = D / 2;
        L = 2 * PI * R;
        S = PI * R * R;
        break;
    }
    case 3: {
        L = x;
        R = L / (2 * PI);
        D = 2 * R;
        S = PI * R * R;
        break;
    }
    case 4: {
        S = x;
        R = sqrt(S / PI);
        D = 2 * R;
        L = 2 * PI * R;
        break;
    }
    default: {
        std::cout << "Неправильный номер!\n";
        return -1;
    }
    }
    std::cout << R << '\n' << D << '\n' << L << '\n' << S << '\n';
    return 0;
}