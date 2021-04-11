//2.	Дано масив розміру N.Вивести його елементи в зворотному порядку.
//Вивести всі непарні числа, що містяться в даному масиві, в порядку зростання їх індексів, а також їх кількість K.


#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int  N = 25;
	cout << "N = ";

	int arr[N];

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 + 1;
	}


	cout << "Вывод массива:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	cout << " \n" << endl;
	cout << "Вывод массива в обратном порядке:" << endl;
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << " \n" << endl;
	cout << "Вывод всех нечетных элементов массива:" << endl;
	int B[N], a = 0, k = 0;
	for (int i = 0; i < N; ++i)
	{
		if (arr[i] % 2 == 1) {
			B[a] = i;
			a++;
		}
		cout << arr[i] << " ";
	}


	cout << " \n" << endl;
	cout << "Вывод индексов всех нечетных элементов массива:" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << B[i] << " ";
		k++;
	}
	cout << " \n" << endl;
	cout << "Количество нечетных элементов массива = " << k << endl;
}