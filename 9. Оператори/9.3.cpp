//3. * **Змініть клас Circle з першого завдання так, щоб itsX, itsY, itsRadius створювалися у вільній пам'яті. 
//Відкорегуйте конструктори, деструктори і інші методи цього класу. 
//Напишіть конструктор копіювання для класу Circle. Розробіть оператор = для класу Circle.


#include <iostream>

using namespace std;

class Circle
{
protected:
	float* itsX;
	float* itsY;
	float* itsRadious;
public:
	Circle()
	{
		itsX = new float(100);
		itsY = new float(100);
		itsRadious = new float(20);
	};
	~Circle() {};


	float getX()
	{
		return *itsX;
	}

	float getY()
	{
		return *itsY;
	}

	float getRadius()
	{
		return *itsRadious;
	}

	float operator +(Circle& nextCircle)
	{
		return *itsRadious + *nextCircle.itsRadious;
	}

	bool operator ==(Circle& nextCircle)
	{
		return *itsRadious == *nextCircle.itsRadious;
	}
	bool operator < (Circle& nextCircle)
	{
		return *itsRadious < *nextCircle.itsRadious;
	}

	void operator =(Circle& nextCircle)
	{
		*this->itsX = *nextCircle.itsX;
		*this->itsY = *nextCircle.itsY;
		*this->itsRadious = *nextCircle.itsRadious;
	};

};

int main()
{
	Circle Obj1; // x, y, radius
	Circle Obj2(Obj1); 	//Obj2 - копия Obj1, их значения одинаковы
	Circle Obj3;

	Obj1.operator+(Obj2);
	Obj2.operator<(Obj3);
	Obj3.operator==(Obj1);



}