/*
2.	Розробіть методи класу, що дозволяють виконувати введення / виведення всіх членів-даних класу "Студент" та перевірте їх в головній програмі.
Напишіть кілька конструкторів і деструктор для класу "Студент". Змініть код для оголошення класу "Студент", закривши в ньому члени-дані.
Напишіть методи доступу до полів класу "Студент". Напишіть програму, в якій створюються два об'єкти типу "Студент".
Встановіть їх вік, стать і стипендію за допомогою методів доступу. Роздрукуйте значення окремих членів-даних об'єктів на екрані, використовуючи методи доступу.
Визначте і роздрукуйте середній вік і сумарну стипендію цих двох студентів.
*/

#include <iostream>
using namespace std;
class Student
{
private:
	string name;
	int age;
	char gender;
	float grant;
public:
	~Student();
	//void in_st();
	void out_st();
	int Age()
	{
		int* Age = &age;
		return *Age;
	}
	float Grant()
	{
		float* Grant = &grant;
		return *Grant;
	}
	Student()
	{
		name = " ";
		age = 0;
		gender = ' ';
		grant = 0;
	}
	Student(string Name, int Age, char Gender, int Grant)
	{
		name = Name;
		age = Age;
		gender = Gender;
		grant = Grant;
	}
};
/*void Student::in_st()
{
	cout << "Input name: ";
	cin >> name;
	cout << "Input age: ";
	cin >> age;
	cout << "Input gender: ";
	cin >> gender;
	cout << "Input grant: ";
	cin >> grant;
}*/
void Student::out_st()
{
	cout << "Name: " << name << endl;
	cout << "Age = " << age << endl;
	cout << "Gender: " << gender << endl;
	cout << "Grant = " << grant << endl;
}
Student::~Student()
{
	cout << "destractor" << name << endl;
}
int main()
{
	int Age;
	float Grant, avg_age, avg_grant;
	string Name;
	char Gender;

	Student s1 = Student("Maryna", 20, 'F', 1600);
	s1.out_st();
	cout << "Input name: " << endl;
	cin >> Name;
	cout << "Input age: " << endl;
	cin >> Age;
	cout << "Input gender(F/M): " << endl;
	cin >> Gender;
	cout << "Input grant: " << endl;
	cin >> Grant;
	Student s2 = Student(Name, Age, Gender, Grant);
	//s1.in_st();
	//s2.in_st();
	s2.out_st();
	avg_age = (float)(s1.Age() + s2.Age()) / 2;
	cout << "Average age: " << avg_age << endl;
	avg_grant = (float)(s1.Grant() + s2.Grant()) / 2;
	cout << "Average grant: " << avg_grant << endl;
	return 0;
}