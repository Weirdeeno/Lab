//2.	Дана матриця розміру M × N.Знайти кількість її рядків, елементи яких впорядковані за зростанням.


#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()

using namespace std;

int main()
{
	srand(unsigned int(time(NULL)));
	setlocale(LC_ALL, "rus");

	const int M = 6, N = 3;

	int matrix[M][N];

	int temp, k = 0;

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
	for (int c = 0; c <= (M * N); c++)
	{
		for (int i = 0; i < M; i++)
		{
			for (int j = 0; j < N - 1; j++)
			{
				if (matrix[i][j] > matrix[i][j + 1])
				{
					temp = matrix[i][j];
					matrix[i][j] = matrix[i][j + 1];
					matrix[i][j + 1] = temp;
				}
			}
		}
	}
	cout << endl;

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
		k++;
	}

	cout << "Количество строк в матрице: " << k;

	cin.get();
	return 0;
}