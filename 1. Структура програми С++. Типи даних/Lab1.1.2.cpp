//2.���� ���� M � ���������. �������������� �������� �������������� ������, ������ ������� ������ ��� (1 ����� = 1000 ��).
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int M;
	cout << "������� ����� �: ";
	cin >> M;
	cout << "����� � � ����������� = " << M / 1000 << endl;
	cin.get();
	cin.get();
	system("pause");
	return 0;
}
