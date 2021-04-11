/*
2.	Створіть: прототип функції для обчислення квадрата, куба і зворотного значення дійсного числа (функція не повертає результат, передача параметрів за посиланням);
реалізацію цієї функції.
За допомогою функції обчисліть квадрат, куб і зворотне значення чотирьох чисел.
*/

#include <iostream>
using namespace std;

void Func(float x, float &x2, float &x3, float &x4);

int main()
{
	float x, x2, x3, x4;
	for (int i = 0; i < 5; i++); {
	cout << "Enter number : ";
	cin >> x;
	Func(x, x2, x3, x4);
	cout << x2 << endl;
	cout << x3 << endl;
	cout << x4 << endl;
}
	return 0;
}

void Func(float x, float &x2, float &x3, float &x4) 
{
	x2 = x * x;
	x3 = x2 * x;
	x4 = 1 / x;
}