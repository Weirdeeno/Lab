//2.	���� ����� ������ N.������� ���� �������� � ���������� �������.
//������� �� ������ �����, �� �������� � ������ �����, � ������� ��������� �� �������, � ����� �� ������� K.


#include <iostream>
#include <stdlib.h>
#include <ctime> // �������� time()

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


	cout << "����� �������:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";
	}

	cout << " \n" << endl;
	cout << "����� ������� � �������� �������:" << endl;
	for (int i = N - 1; i >= 0; i--)
	{
		cout << arr[i] << " ";
	}

	cout << " \n" << endl;
	cout << "����� ���� �������� ��������� �������:" << endl;
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
	cout << "����� �������� ���� �������� ��������� �������:" << endl;
	for (int i = 0; i < a; i++)
	{
		cout << B[i] << " ";
		k++;
	}
	cout << " \n" << endl;
	cout << "���������� �������� ��������� ������� = " << k << endl;
}