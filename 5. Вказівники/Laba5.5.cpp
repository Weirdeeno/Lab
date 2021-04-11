/*
5.	Опишіть функцію Power23(N, N2, N3) для пошуку квадрату і куба даного цілого числа   N, яка не повертає результат.
Увага! Передачу параметрів N2 і N3 забезпечити за вказівкою. 
За допомогою функції Power23(N, N2, N3) знайти і вивести квадрати і куби п’яти цілих чисел.
*/

#include <iostream> 
using namespace std;

void Power23(int N, int *N2, int *N3);

int main()
{
	int N, a, b;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter N : ";
		cin >> N;
		Power23(N, &a, &b);
		cout << "Square N = " << a << "\nCube N = " << b << endl;
	}

	system("pause");
	return 0;
}
void Power23(int N, int* N2, int* N3)
{
	*N2 = N * N;
	*N3 = N * N * N;
}
