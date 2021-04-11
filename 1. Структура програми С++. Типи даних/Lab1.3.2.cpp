//2.Дні тижня пронумеровані наступним чином: 0 - неділя, 1 - понеділок, 2 - вівторок, ..., 6 - субота. 
//Дано ціле число K , що лежить в діапазоні 1-365.
//Визначити номер дня тижня для K - го дня року, якщо відомо, що цього року 1 січня було четвергом.    

#include<iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Russian");
 int K;
 cout << "Введите число от 1 до 365: ";
 cin >> K;
 if (K > 0 && K < 366)
 {
  cout << "День недели - ";
  switch (K % 7)
  {
  case 0:
   cout << "Среда";
   break;
  case 1:
   cout << "Четверг";
   break;
  case 2:
   cout << "Пятница";
   break;
  case 3:
   cout << "Суббота";
   break;
  case 4:
   cout << "Воскресенье";
   break;
  case 5:
   cout << "Понедельник";
   break;
  case 6:
   cout << "Вторник";
   break;
  }
 }
 else cout << "Введите число от 1 до 365 ";
 system("pause");
 return 0;
}