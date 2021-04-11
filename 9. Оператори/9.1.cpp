//1.	�������� ���������� ��������� ����� Circle � ���������� ������� - �������: ���������� ������ � �����(itsX, itsY, itsRadius).  +
//�������� � ���� ������������, ���������� � ������ �������.  +
//������� � ���� Circle �������� + ��� ��������� ��'���� ���� Circle. +
//��������� �������� ����� �������� ������ itsRadius.  +
//������� � ���� Circle ��������� < � = = ��� ��������� ��'���� ���� Circle �� ��������� ������ itsRadius. +
//� ������� ������� ������� ��� �ᒺ���, ��������������� ������ ��������� + , < � = = .  +

#include <iostream>

using namespace std;

class Circle
{
protected:
	float itsX;
	float itsY;
	float itsRadius;
public:
	Circle()
	{
		itsX = 1;
		itsY = 1;
		itsRadius = 5;
	};
	~Circle() {};

	void setX(float newX)
	{
		itsX = newX;
	}

	void setY(float newY)
	{
		itsY = newY;
	}

	void setRadius(float newRadius)
	{
		itsRadius = newRadius;
	}

	float getX()
	{
		return itsX;
	}

	float getY()
	{
		return itsY;
	}

	float getRadius()
	{
		return itsRadius;
	}

	float operator +(Circle& nextCircle)
	{
		return itsRadius + nextCircle.itsRadius;
	}

	bool operator ==(Circle& nextCircle)
	{
		return itsRadius == nextCircle.itsRadius;
	}
	bool operator < (Circle& nextCircle)
	{
		return itsRadius < nextCircle.itsRadius;
	}

};

int main()
{
	Circle Obj1; // x, y, radius
	Circle Obj2;
	Circle Obj3;

	Obj1.operator+(Obj2);
	Obj2.operator<(Obj3);
	Obj3.operator==(Obj1);



}