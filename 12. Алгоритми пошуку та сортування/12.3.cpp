//3. ϳ��� ��������� ������ �������� �������� ����� ������ :
//1)  ������� ��������;
//2)  ������� �����.


#include <iostream>
#include <stdlib.h>
#include <ctime> // �������� time()

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int  sizeArray = 100;

	int z = 0, q = 0;

	int arr[sizeArray];

	for (int i = 0; i < sizeArray; i++)
	{
		arr[i] = rand() % 100 - 100;
	}
	cout << "����� �������: " << endl;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < sizeArray - 1; i++)
	{
		for (int j = (sizeArray - 1); j > i; j--) // ��� ���� ��������� ����� i-���
		{
			if (arr[j - 1] < arr[j]) // ���� ������� ������� ������ �����������
			{
				int temp = arr[j - 1]; // ������ �� �������
				arr[j - 1] = arr[j];
				arr[j] = temp;
				q++;
			}
			z++;
		}
	}
	cout << "�������������� ����� �� ����������� : " << endl;

	for (int i = 0; i < sizeArray; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	cout << "���������� ������� : " << z << endl;
	cout << "���������� ��������� : " << q << endl;

}
