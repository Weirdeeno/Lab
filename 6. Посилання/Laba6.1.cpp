/*
1.	������� ��'��� ������ ���� � �����. ������� ��������� � �������� �� �����.
������ �������� � ������.
�������� �������� �� 5 �� ��������� ���������. 
������� �������� ����� ��'���� �� ��������� ��������� �� ���������.
*/

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int *px = &x;
	int &rage = x;
	cout << "Enter number : ";
	cin >> x;
	rage = rage + 5;
	cout << *px << "\nObject value = " << rage << endl;

	system("pause");
	return 0;
}