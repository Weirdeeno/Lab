//2.��������� ��������� �������������: ������ ����� ����� ����� ����� � ���� � ���� ���� ������ ������������.

#include <math.h>
#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ������ �����: ";
	cin >> c;
	bool d;
	d = ((a == -b) || (a == -c) || (b == -c) || (b == -a)) || (c == -b) || (c == -a);
	cout << boolalpha;
	cout << d;
	cin.get();
	cin.get();
}