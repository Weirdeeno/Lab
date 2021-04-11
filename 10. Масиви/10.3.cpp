//3.	Дано масив розміру N.Знайти номер мінімального і номер максимального елементів цього масиву.
//Обнулити елементи масиву, розташовані між його мінімальним і максимальним елементами(не включаючи мінімальний і максимальний елементи).
//Розв’язати задачу з використанням адресної арифметики.

#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int N = 25;

	int arr[N];
	int B[N];

	int max = 0, min = 1, a = 0;

	for (int i = 0; i < N; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	cout << "Вывод массива:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < N; i++)
	{
		arr[i];
		if (arr[i] > max) 
		{
			max = arr[i];
			B[a] = i;
			a++;
		}
	}

	cout << " \n" << endl;
	cout << "Максимальный элемент массива: " << max << " ";
	for (int i = 0; i < N; i++)
	{
		arr[i];
		if (arr[i] <= min)
		{
			min = arr[i];
			B[a] = i;
			a++;
		}
	}

	cout << " \n" << endl;
	cout << "Минимальный элемент массива: " << min << " ";

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == min || arr[i] == max)
		{
			arr[i] = arr[i];
		}
		else
		{
			arr[i] = 0;
		}
	}
	cout << " \n" << endl;
	cout << "Вывод массива:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

}