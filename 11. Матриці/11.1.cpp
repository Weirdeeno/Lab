//1.	Дана матриця розміру M × N.Заповнити її випадковими числами з діапазону від 0 до 10.
//Перший раз вивести елементи матриці у звичайному порядку(по рядкам).
//Другий раз вивести елементи матриці в наступному порядку : перший рядок зліва направо, другий рядок справа наліво,
//третій рядок зліва направо, четвертий рядок справа наліво і т.д.


#include <iostream>
#include <cstdlib>
#include <ctime> // содержит time()

using namespace std;

int main()
{
	const int M = 6, N = 3;

	int matrix[M][N];

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = rand() % 10 - 0, rand() % 10 - 0;
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

	cout << endl;


	for (int i = 0; i < M; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < N; j++)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
		else 
		{
			for (int j = N - 1; j >= 0; j--)
			{
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	
	}


	cin.get();
	return 0;
}