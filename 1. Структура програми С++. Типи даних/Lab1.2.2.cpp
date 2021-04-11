//2.Дано двозначне число. Вивести число, отримане при перестановці цифр вихідного числа.
#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите двузначное число : ";
	cin >> a;
	cout << a / 10 + (a % 10) * 10 << endl;
	return 0;
}