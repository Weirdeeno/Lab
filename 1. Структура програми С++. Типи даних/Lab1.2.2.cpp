//2.���� ��������� �����. ������� �����, �������� ��� ������������ ���� ��������� �����.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ���������� ����� : ";
	cin >> a;
	cout << a / 10 + (a % 10) * 10 << endl;
	return 0;
}