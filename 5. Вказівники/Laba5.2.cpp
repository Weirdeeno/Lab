/*
2.	�������� ��������, � ��� ������������ ���������� ������� ���� Num � �������� �� �����  pNum. 
������� ������ ������ ���������.
������� �� ����� �������� ������ � ������ ����� ����� � ���������������� � ��������� ������ ��������. 
��������� ������� ����������. ������ ��������.
*/

#include <iostream> 
using namespace std;

int main() {
	unsigned short int Num;
	unsigned short int*pNum = &Num;

	cout << Num << endl;
	cout << &Num << endl;
	cout << *pNum << endl;
	cout << pNum << endl;

	system("pause");
	return 0;
}