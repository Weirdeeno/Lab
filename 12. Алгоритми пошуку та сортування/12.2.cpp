//2. Згенерувати масив розмірності 100 елементів:
//1)  відсортований за зростанням;
//2)  з випадковими елементами(від - 100 до 100);
//3)  відсортований за спаданням.


#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int  sizeArray = 100;

	int arr[sizeArray]; 

	for (int i = 0; i < sizeArray; i++)
	{
		arr[i] = rand() % 100 - 100;
	}
	cout << "Вывод массива: " << endl;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = (sizeArray - 1); j > i; j--) // для всех элементов после i-ого
		{
			if (arr[j - 1] < arr[j]) // если текущий элемент меньше предыдущего
			{
				int temp = arr[j - 1]; // меняем их местами
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Отсортированый масив по возрастанию : " << endl;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = (sizeArray - 1); j > i; j--) // для всех элементов после i-ого
		{
			if (arr[j - 1] > arr[j]) // если текущий элемент меньше предыдущего
			{
				int temp = arr[j - 1]; // меняем их местами
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Отсортированый масив по убыванию : " << endl;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << arr[i] << " ";
	}

}