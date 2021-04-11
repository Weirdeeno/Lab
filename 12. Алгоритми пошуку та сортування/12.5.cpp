//5. Відсортувати лінійний масив, що складається з об’єктів класу Student
//(з двома членами - даними itsName – прізвище студента, itsMark – оцінка) 
//за спаданням оцінок.


#include <iostream>
#include <algorithm>

using namespace std;

class Student 
{
private:
	string itsName;
	float itsMark;
public:
	Student()
	{
		itsName = " ";
		itsMark = 60;
	}
	Student(string Sname, float Sage)
	{
		itsName = Sname;
		itsMark = Sage;
	}
	~Student() {};

	void setName(string newName)
	{
		itsName = newName;
	}
	void setMark(float newMark)
	{
		itsMark = newMark;
	}
	string getName() { return itsName; }
	float getMark() { return itsMark; }
	void printName()
	{
		cout << "Имя студента: " << itsName << endl;
	}
	void printScolarship()
	{
		cout << "Оценка: " << itsMark << "\n" << endl;
	}
};

int main()
{
	Student s[6];

	s[0].setName("Андрей");
	s[1].setName("Александр");
	s[2].setName("Иван");
	s[3].setName("Сергей");
	s[4].setName("Николай");
	s[5].setName("Дмитрий");

	s[0].setMark(47);
	s[1].setMark(56);
	s[2].setMark(24);
	s[3].setMark(68);
	s[4].setMark(74);
	s[5].setMark(98);

	int max, arrMark[6];

	for (int i = 0; i < 6; i++)
	{
		arrMark[i] = s[i].getMark();
	}

	for (int i = 0; i < 6; i++)
	{
		for (int j = 6-1; j > i; j--) // для всех элементов после i-ого
		{
			if (arrMark[j - 1] < arrMark[j]) // если текущий элемент меньше предыдущего
			{
				int temp = arrMark[j - 1]; // меняем их местами
				arrMark[j - 1] = arrMark[j];
				arrMark[j] = temp;
			}
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << arrMark[i] << "	  ";
	}
}