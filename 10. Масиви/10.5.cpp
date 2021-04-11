//5.	Дано масив розміру N, що складається з об’єктів класу Circle(використовуйте опис класу з лабораторної 9).
//Зауваження: в класі Circle необхідно перевантажити оператор == (два кола вважати рівними, якщо їх радіуси рівні).
//Видалити з масиву всі сусідні однакові елементи, залишивши їх перші входження.
//Вивести кількість елементів в отриманому масиві.


#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()

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
		itsX = rand() % 100 + 1;
		itsY = rand() % 100 + 1;
		itsRadius = rand() % 100 + 1;
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

	float getX() { return itsX; }
	float getY() { return itsY; }
	float getRadius() { return itsRadius; }
	
	bool operator ==(Circle& nextCircle)
	{
		return itsRadius == nextCircle.itsRadius;
	}
};

int main()
{
	const int N = 5;
	int k = 0;

	Circle arr[N];
	Circle arr2[N];

	for (int i = 0; i < N; i++)
	{
		arr[i].operator==(arr[i + 1]);

		if (arr[i] == arr[i + 1])
		{
			arr2[i] = arr[i];
			k++;
		}
	}

	cout << "Количество одинаковых элементов в обоих массивах: " << k << endl;
	system("pause");
	return 0;
}