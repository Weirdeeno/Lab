/*
1.	Напишіть код для оголошення класу "Студент" з такими відкритими членами-даними: вік, стать, стипендія. Напишіть програму, в якій створюються два об'єкти типу "Студент" .
Встановіть їх вік, стать і стипендію. Роздрукуйте значення членів-даних об'єктів на екрані.
*/

#include <iostream>
using namespace std;

class student {
public:
	int age;
	char gender;
	float grant;
};

int main() {

	student st1;
	student st2;

	st1.age = 25;
	st2.age = 21;

	st1.gender = 'f';
	st2.gender = 'm';

	st1.grant = 1600.00;
	st2.grant = 1320.00;

	cout << "st1 - " << st1.age << endl;
	cout << "st2 - " << st2.age << endl;
	cout << "st1 - " << st1.gender << endl;
	cout << "st2 - " << st2.gender << endl;
	cout << "st1 - " << st1.grant << endl;
	cout << "st2 - " << st2.grant << endl;

	system("pause");
	return 0;
}
