/*
2.	Напишіть програму, в якій оголошуються беззнакове коротке ціле Num і вказівник на нього  pNum. 
Задайте адресу цілого вказівнику.
Виведіть на екран значення змінних і адреси кожної змінної у шістнадцятиричній і десятковій системі числення. 
Порівняйте отримані результати. Зробіть висновки.
*/

#include <iostream> 
using namespace std;

int main() {
	unsigned short int Num;
	unsigned short int*pNum = &Num;

	cout << Num << endl;
	cout << &Num << endl;
	cout << *pNum << endl;
	cout << pNum << endl;

	system("pause");
	return 0;
}