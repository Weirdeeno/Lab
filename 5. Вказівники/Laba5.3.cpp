/*
3.	Напишіть програму, в якій створюються три об'єкти дійсного типу середній бал студента у вільній пам'яті;
введіть їх значення з консолі;
знайдіть об’єм виділеної пам’яті; 
роздрукуйте значення середнього балу кожного студента.
Увага! Після виведення обов’язково звільніть пам’ять від об’єктів.
*/

#include <iostream> 
using namespace std;

int main() {
	
	int *page1 = new int;
	int *page2 = new int;
	int *page3 = new int;

	cout << "Enter average score of 1 student : ";
	cin >> *page1;
	cout << "Enter average score of 2 student : ";
	cin >> *page2;
	cout << "Enter average score of 3 student : ";
	cin >> *page3;
	
	cout <<"The amout of allocated memory = "<< sizeof(*page1) * sizeof(*page2) * sizeof(*page3) << " bytes" << endl;

	cout << "Average score = " << (*page1 + *page2 + *page3) / 3 << endl;

	delete page1;
	page1 = 0;
	delete page2;
	page2 = 0;
	delete page3;
	page3 = 0;

	system("pause");
}