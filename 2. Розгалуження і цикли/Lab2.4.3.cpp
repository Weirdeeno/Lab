/*
 3 Дано ціле число N (> 0).
 Використовуючи операції ділення без остачі і взяття залишку від ділення, знайти число, отримане при прочитанні числа N справа наліво.
*/

# include <iostream>
# include <cmath>


using namespace std;

int main()

{
	setlocale(LC_ALL, "Russian");
	int N;
	int R = 0;
	cout << "Введите  целое число N : ";
	cin >> N;
	while (N > 0) {
		int M = N % 10;
		R = R * 10 + M;
		N /= 10;
	}
	cout << "Число полученное при прочтении числа N справа налево: " << R << endl;

	system("pause");
	return 0;
}

