/*
 3 ���� ���� ����� N (> 0).
 �������������� �������� ������ ��� ������ � ������ ������� �� ������, ������ �����, �������� ��� ��������� ����� N ������ �����.
*/

# include <iostream>
# include <cmath>


using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	int N;
	int R = 0;
	cout << "�������  ����� ����� N : ";
	cin >> N;
	while (N > 0) {
		int M = N % 10;
		R = R * 10 + M;
		N /= 10;
	}
	cout << "����� ���������� ��� ��������� ����� N ������ ������: " << R << endl;

	system("pause");
	return 0;
}

