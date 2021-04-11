//2.Дана маса M в кілограмах. Використовуючи операцію цілочисельного ділення, знайти кількість повних тон (1 тонна = 1000 кг).
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int M;
	cout << "Введите массу М: ";
	cin >> M;
	cout << "Масса М в киллограмах = " << M / 1000 << endl;
	cin.get();
	cin.get();
	system("pause");
	return 0;
}
