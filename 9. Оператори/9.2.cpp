//1.	Напишіть оголошення закритого класу MyTime з наступними змінними - членами: години, хвилини(itsHour, itsMin).
//Включіть в клас конструктори, деструктор і методи доступу.
//Створіть в класі MyTime префіксний і постфіксний оператори інкремента і оператор + для додавання об'єктів типу MyTime. 
//Створіть в класі MyTime оператори != і = = для порівняння об'єктів типу MyTime.
//В головній функції створіть три об’єкта, продемонструйте роботу операторів інкремента, +, != і = = .*/


#include <iostream>
#include <string>

using namespace std;

class MyTime 
{
protected:
	int itsHour;
	int itsMin;
public:
	MyTime()
	{
		itsHour = 1;
		itsMin = 1;
	}

	~MyTime();

	int setHour(int newHour)
	{
		itsHour = newHour;
	}
	int setMin(int newMin)
	{
		itsMin = newMin;
	}
	int getHour() { return itsHour; }
	int getMin() { return itsMin; }

	MyTime operator ++()
	{
		++itsHour;
		return *this;
	}
	MyTime operator ++(int)
	{
		itsHour++;
		return *this;
	}

	float operator+(MyTime& nextHour)
	{
		return itsHour + nextHour.itsHour;
	}

	float operator!=(MyTime& nextHour)
	{
		return itsHour != nextHour.itsHour;
	}

	bool operator==(MyTime& nextHour)
	{
		return itsHour == nextHour.itsHour;
	}

};

int main()
{
	MyTime t1;
	MyTime t2;

	cout << t1.getHour() << "\t" << t1.getMin() << endl;
	t1++;
	cout << t1.getHour() << "\t" << t1.getMin() << endl;

	cout << t2.operator!=(t1);
	cout << t1.operator+(t2);
	cout << t2.operator==(t1);

}