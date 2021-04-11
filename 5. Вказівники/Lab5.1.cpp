/*
1.	Напишіть програму, в якій оголошуються ціле Age і вказівник на ціле pAge. 
Задайте адресу цілого вказівнику. 
За допомогою вказівника встановіть значення цілої змінної 25. 
Виведіть значення змінної Age двома способами.
*/

#include <iostream> 
using namespace std;

int main() {
	int Age = 20;
	int *pAge = &Age;
	*pAge = 25;

	cout << pAge << endl;
	cout << *pAge << endl;

	system("pause");
	return 0;
}