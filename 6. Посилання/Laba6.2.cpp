/*
2.	�������: �������� ������� ��� ���������� ��������, ���� � ���������� �������� ������� ����� (������� �� ������� ���������, �������� ��������� �� ����������);
��������� ���� �������.
�� ��������� ������� �������� �������, ��� � �������� �������� �������� �����.
*/

#include <iostream>
using namespace std;

void Func(float x, float &x2, float &x3, float &x4);

int main()
{
	float x, x2, x3, x4;
	for (int i = 0; i < 5; i++); {
	cout << "Enter number : ";
	cin >> x;
	Func(x, x2, x3, x4);
	cout << x2 << endl;
	cout << x3 << endl;
	cout << x4 << endl;
}
	return 0;
}

void Func(float x, float &x2, float &x3, float &x4) 
{
	x2 = x * x;
	x3 = x2 * x;
	x4 = 1 / x;
}