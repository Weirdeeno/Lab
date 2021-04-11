//2.Перевірити істинність висловлювання: «Серед трьох даних цілих чисел є хоча б одна пара взаємно протилежних».

#include <math.h>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Введите третье число: ";
	cin >> c;
	bool d;
	d = ((a == -b) || (a == -c) || (b == -c) || (b == -a)) || (c == -b) || (c == -a);
	cout << boolalpha;
	cout << d;
	cin.get();
	cin.get();
}