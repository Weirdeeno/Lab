//3.	Дана матриця розміру M × N.Поміняти місцями стовпці, що містять мінімальну і максимальну суму елементів.


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	setlocale(LC_ALL, "rus");

	const int M = 6, N = 3;

	int matrix[M][N];

	int k[N];

	int sum, max = k[0];


	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 100 - 0, rand() % 100 - 0;
		}
	}

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	for (int j = 0; j < N; j++)
	{
		sum = 0;
		for (int i = 0; i < M; i++)
		{
			sum += matrix[i][j];
		}
		k[j] = sum;
	}

	for (int j = 0; j < N / 2; j++)
	{
		for (int i = 0; i < M; i++)
		{
			int t = matrix[i][j];
			matrix[i][j] = matrix[i][N - 1 - j];
			matrix[i][N - 1 - j] = t;
		}
		j++;
	}
	cout << endl;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}