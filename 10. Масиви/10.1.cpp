//1.	���� ���� ����� N(> 1), � ����� ������ ���� A � ������ D ����������� �������.
//���������� � ������� ����� ������ N, �� ������ N ������ ����� ���� ������� : A, A + D, A + 2 � D, A + 3 � D, .....


#include <iostream>

using namespace std;

int main()
{
	int N, A, D;
	cout << "N = ";
	cin >> N;
	cout << "A = ";
	cin >> A;
	cout << "D = ";
	cin >> D;

	int arr[100];

	for (int i = 0; i < N; i++)
	{
		arr[i] = A + D * i;
	}

	for (int i = 0; i < N; i++)
	{
		cout << "[arr " << arr[i] << "]" << endl;
	}
}