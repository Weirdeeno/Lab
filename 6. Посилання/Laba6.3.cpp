/*
3.	�������: �������� ������� ��� ���������� ������� ����, ����� ���� � �ᒺ�� ���, ���� ������ ����� (������� �� ������� ���������, �������� ��������� �� ����������); 
��������� ���� �������.
�� ��������� ������� �������� ������� ����, ����� ���� � �ᒺ� ��� �� ������ ������ ��������.
*/

#include <iostream>
using namespace std;

int Prototype(float R)
{
	float &rsomeint = R;
	if (rsomeint < 0)
		return 0;
	cout << "Lenght = " << 2 * 3.14 * rsomeint << endl;
	cout << "Radius = " << 3.14 * (rsomeint * rsomeint) << endl;
	cout << "Volume = " << (4 * 3.14 * (rsomeint * rsomeint))/3 << endl;
	system("pause");
	return(0);

}
int main()
{
	int a;
	int &rage = a;
	cout << "Enter number : ";
	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		cout << Prototype(rage) << endl;
	}
	system("pause");
	return 0;
 }