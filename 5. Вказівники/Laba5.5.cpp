/*
5.	������� ������� Power23(N, N2, N3) ��� ������ �������� � ���� ������ ������ �����   N, ��� �� ������� ���������.
�����! �������� ��������� N2 � N3 ����������� �� ��������. 
�� ��������� ������� Power23(N, N2, N3) ������ � ������� �������� � ���� ���� ����� �����.
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
