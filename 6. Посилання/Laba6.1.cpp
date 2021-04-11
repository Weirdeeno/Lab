/*
1.	Створіть об'єкт цілого типу в стеку. Створіть посилання і вказівник на нього.
Введіть значення з консолі.
Збільшіть значення на 5 за допомогою посилання. 
Виведіть значення цього об'єкта за допомогою вказівника та посилання.
*/

#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	int *px = &x;
	int &rage = x;
	cout << "Enter number : ";
	cin >> x;
	rage = rage + 5;
	cout << *px << "\nObject value = " << rage << endl;

	system("pause");
	return 0;
}