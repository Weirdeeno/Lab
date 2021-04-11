//1. Розробити та реалізувати алгоритми сортування лінійного масиву зі 100 цілих чисел :
//1) методом обмінів за зростанням;
//2) методом вибору за спаданням;
//3) методом вставок за зростанням.


#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()
#include <iomanip>



using namespace std;

void exchangesSort(int*, int); //методом обмінів за зростанням
void choicesSort(int*, int); // прототип функции сортировки выбором
void insertionSort(int*, int); // сортировка вставками


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int  sizeArray = 100;
	int* sorted_array = new int[sizeArray]; // одномерный динамический массив
	for (int i = 0; i < sizeArray; i++)
	{
		sorted_array[i] = rand() % 1000 + 1;
	}
	cout << "Вывод массива: " << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << sorted_array[i] << " ";
	}
	cout << endl;

	//---------------

	exchangesSort(sorted_array, sizeArray);

	cout << "Отсортированый масив методом обменов по возрастанию : " << endl;
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; 
	}
	cout << endl;

	//-------------

	choicesSort(sorted_array, sizeArray); // вызов функции сортировки выбором

	cout << "Отсортированый масив методом выбора по убыванию : " << endl;
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	//-------------

	cout << "Отсортированый масив методом вставками по возрастанию : " << endl;
	insertionSort(sorted_array, sizeArray);
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	//-------------

	cout << "\n";
	delete[] sorted_array; // высвобождаем память
	system("pause");
	return 0;
}

void exchangesSort(int* arrayPtr, int sizeArray)
{
	for (int i = 0; i < sizeArray - 1; i++)
	{
		int temp = arrayPtr[0]; // временная переменная для хранения значения перестановки
		for (int j = (sizeArray - 1); j > i; j--) // для всех элементов после i-ого
		{
			if (arrayPtr[j - 1] > arrayPtr[j]) // если текущий элемент меньше предыдущего
			{
				temp = arrayPtr[j - 1]; // меняем их местами
				arrayPtr[j - 1] = arrayPtr[j];
				arrayPtr[j] = temp;
			}
		}
	}
}

void choicesSort(int* arrayPtr, int length_array) // сортировка выбором
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // временная переменная для хранения значения перестановки
		for (int element_counter = repeat_counter + 1; element_counter < length_array; element_counter++)
		{
			if (arrayPtr[repeat_counter] < arrayPtr[element_counter])
			{
				temp = arrayPtr[repeat_counter];
				arrayPtr[repeat_counter] = arrayPtr[element_counter];
				arrayPtr[element_counter] = temp;
			}
		}
	}
}

void insertionSort(int* arrayPtr, int length) // сортировка вставками
{
	int temp, // временная переменная для хранения значения элемента сортируемого массива
		item; // индекс предыдущего элемента
	for (int counter = 1; counter < length; counter++)
	{
		temp = arrayPtr[counter]; // инициализируем временную переменную текущим значением элемента массива
		item = counter - 1; // запоминаем индекс предыдущего элемента массива
		while (item >= 0 && arrayPtr[item] > temp) // пока индекс не равен 0 и предыдущий элемент массива больше текущего
		{
			arrayPtr[item + 1] = arrayPtr[item]; // перестановка элементов массива
			arrayPtr[item] = temp;
			item--;
		}
	}
}