/*
5.	Створіть у вільній пам’яті три об'єкта цілого типу, присвойте їм відповідно значення 10, 20, 30. 
Замініть вказівники посиланнями і виконайте обробку цих об’єктів з використанням посилань (збільшіть значення удвічі). 
Звільніть вільну пам’ять, застосовуючи вказівники.
*/

#include <iostream>
using namespace std;

int main()
{
	 int *page1 = new int(1);
	 int *page2 = new int(2);
	 int *page3 = new int(3);

	 *page1 = 10;
	 *page2 = 20;
	 *page3 = 30;

	 int &ra1 = *page1;
	 int &ra2 = *page2;
	 int &ra3 = *page3;

	 cout << ra1 << " , " << ra2 << " , " << ra3 << endl;
	 cout << ra1*2 << " , " << ra2*2 << " , " << ra3*2 << endl;

	 delete page1;
	 page1 = 0;
	 delete page2;
	 page2 = 0;
	 delete page3;
	 page3 = 0;

	 system("pause");
	 return 0;
}