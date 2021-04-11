//1. ��������� �� ���������� ��������� ���������� ������� ������ � 100 ����� ����� :
//1) ������� ����� �� ����������;
//2) ������� ������ �� ���������;
//3) ������� ������� �� ����������.


#include <iostream>
#include <stdlib.h>
#include <ctime> // �������� time()
#include <iomanip>



using namespace std;

void exchangesSort(int*, int); //������� ����� �� ����������
void choicesSort(int*, int); // �������� ������� ���������� �������
void insertionSort(int*, int); // ���������� ���������


int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int  sizeArray = 100;
	int* sorted_array = new int[sizeArray]; // ���������� ������������ ������
	for (int i = 0; i < sizeArray; i++)
	{
		sorted_array[i] = rand() % 1000 + 1;
	}
	cout << "����� �������: " << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << sorted_array[i] << " ";
	}
	cout << endl;

	//---------------

	exchangesSort(sorted_array, sizeArray);

	cout << "�������������� ����� ������� ������� �� ����������� : " << endl;
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; 
	}
	cout << endl;

	//-------------

	choicesSort(sorted_array, sizeArray); // ����� ������� ���������� �������

	cout << "�������������� ����� ������� ������ �� �������� : " << endl;
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // ������ ���������������� �������
	}
	cout << endl;
	//-------------

	cout << "�������������� ����� ������� ��������� �� ����������� : " << endl;
	insertionSort(sorted_array, sizeArray);
	for (int counter = 0; counter < sizeArray; counter++)
	{
		cout << setw(2) << sorted_array[counter] << "  "; // ������ ���������������� �������
	}
	cout << endl;
	//-------------

	cout << "\n";
	delete[] sorted_array; // ������������ ������
	system("pause");
	return 0;
}

void exchangesSort(int* arrayPtr, int sizeArray)
{
	for (int i = 0; i < sizeArray - 1; i++)
	{
		int temp = arrayPtr[0]; // ��������� ���������� ��� �������� �������� ������������
		for (int j = (sizeArray - 1); j > i; j--) // ��� ���� ��������� ����� i-���
		{
			if (arrayPtr[j - 1] > arrayPtr[j]) // ���� ������� ������� ������ �����������
			{
				temp = arrayPtr[j - 1]; // ������ �� �������
				arrayPtr[j - 1] = arrayPtr[j];
				arrayPtr[j] = temp;
			}
		}
	}
}

void choicesSort(int* arrayPtr, int length_array) // ���������� �������
{
	for (int repeat_counter = 0; repeat_counter < length_array; repeat_counter++)
	{
		int temp = arrayPtr[0]; // ��������� ���������� ��� �������� �������� ������������
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

void insertionSort(int* arrayPtr, int length) // ���������� ���������
{
	int temp, // ��������� ���������� ��� �������� �������� �������� ������������ �������
		item; // ������ ����������� ��������
	for (int counter = 1; counter < length; counter++)
	{
		temp = arrayPtr[counter]; // �������������� ��������� ���������� ������� ��������� �������� �������
		item = counter - 1; // ���������� ������ ����������� �������� �������
		while (item >= 0 && arrayPtr[item] > temp) // ���� ������ �� ����� 0 � ���������� ������� ������� ������ ��������
		{
			arrayPtr[item + 1] = arrayPtr[item]; // ������������ ��������� �������
			arrayPtr[item] = temp;
			item--;
		}
	}
}