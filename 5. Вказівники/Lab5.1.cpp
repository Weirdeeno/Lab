/*
1.	�������� ��������, � ��� ������������ ���� Age � �������� �� ���� pAge. 
������� ������ ������ ���������. 
�� ��������� ��������� ��������� �������� ���� ����� 25. 
������� �������� ����� Age ����� ���������.
*/

#include <iostream> 
using namespace std;

int main() {
	int Age = 20;
	int *pAge = &Age;
	*pAge = 25;

	cout << pAge << endl;
	cout << *pAge << endl;

	system("pause");
	return 0;
}