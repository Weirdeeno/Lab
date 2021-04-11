//5.	���� ��������� ������� ������� M.
//1)������ ������������ ������� ��� ����� �� �������, ���������� ������(��������� � ������������� ������� A1, 1).
//2) �������� �������� �������, �� ������ ��������� ����� ������� �������(��������� �� ��������) � ����� ������ �������(����� ��������� �� ��������).
//������� �������� �� ���������������.


#include <iostream>
#include <cstdlib>
#include <ctime> // �������� time()

using namespace std;

int main()
{
	srand(unsigned int(time(NULL)));
	setlocale(LC_ALL, "rus");

	const int M = 5;

	int** matrix = new int* [M];

	int temp, k = 0;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % 100 - 0;
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int max[2 * M - 1];

	cout << endl;
	int z = 0;
	for (int k = M - 1; k >= -M + 1; k--) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < M; j++) {
				if (i == j + k) {
					if (matrix[i][j] > max[z]) {
						max[z] = matrix[i][j];

					}
				}
			}
		}
		z++;
	}

	for (int i = 0; i < (2 * M - 1); i++)
	{
		cout << max[i] << " ";
	}


	for (int i = 1; i < M / 2; i++)
	{
		for (int j = M - i; j < M; j++)
		{
			matrix[i, j] = 0;
		}
	}

	for (int i = M / 2; i < M - 1; i++) 
	{
		for (int j = i + 1; j < M; j++) 
		{
			matrix[i, j] = 0;
		}
	}

	//
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	//

	for (int i = M / 2; i < M; i++)
	{
		for (int j = i - 1; j < M; j++)
		{
			matrix[i][j] = 0;
		}
	}
	cout << endl;

	//
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

