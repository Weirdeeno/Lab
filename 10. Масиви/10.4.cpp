//4.	���� ��� ������ A � B ������ N, �������� ���� ����������� �� ����������.
//��'������ �� ������ ���, ��� ������������ ����� C (������ 2*N) ��������� ������������� �� ����������.


#include <iostream>
#include <stdlib.h>
#include <ctime> // �������� time()

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int sizeArray = 25;
	const int doubleArray = 2 * sizeArray;
	int A[sizeArray], B[sizeArray], C[doubleArray];

	int temp;

	for (int i = 0; i < sizeArray; i++)
	{
		A[i] = rand() % 100 + 1;
	}

	cout << "����� ������� �:" << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << A[i] << " ";
	}
	

	for (int i = 0; i < sizeArray; i++)
	{
		B[i] = rand() % 100 + 1;
	}

	cout << " \n" << endl;
	cout << "����� ������� �:" << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << B[i] << " ";
	}

	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = 0; j < sizeArray - i - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}

	cout << " \n" << endl;
	cout << "����� ��������������� ������� �:" << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << A[i] << " ";
	}

	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = 0; j < sizeArray - i - 1; j++)
		{
			if (B[j] > B[j + 1])
			{
				temp = B[j];
				B[j] = B[j + 1];
				B[j + 1] = temp;
			}
		}
	}

	cout << " \n" << endl;
	cout << "����� ��������������� ������� �:" << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		cout << B[i] << " ";
	}

	cout << " \n" << endl;
	for (int i = 0; i < sizeArray; i++)
	{
		C[i] = A[i];
	}
	for (int i = sizeArray; i < doubleArray; i++)
	{
		C[i] = B[i - sizeArray];
	}

	for (int i = 0; i < doubleArray - 1; i++)
	{
		for (int j = 0; j < doubleArray - i - 1; j++)
		{
			if (C[j] > C[j + 1])
			{
				temp = C[j];
				C[j] = C[j + 1];
				C[j + 1] = temp;
			}
		}
	}
	cout << "����� ������� A + B:" << endl;
	for (int i = 0; i < doubleArray; i++)
	{
		cout << C[i] << " ";
	}
}