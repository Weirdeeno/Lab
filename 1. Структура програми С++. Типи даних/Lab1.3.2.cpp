//2.�� ����� ������������ ��������� �����: 0 - �����, 1 - ��������, 2 - �������, ..., 6 - ������. 
//���� ���� ����� K , �� ������ � ������� 1-365.
//��������� ����� ��� ����� ��� K - �� ��� ����, ���� �����, �� ����� ���� 1 ���� ���� ���������.    

#include<iostream>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Russian");
 int K;
 cout << "������� ����� �� 1 �� 365: ";
 cin >> K;
 if (K > 0 && K < 366)
 {
  cout << "���� ������ - ";
  switch (K % 7)
  {
  case 0:
   cout << "�����";
   break;
  case 1:
   cout << "�������";
   break;
  case 2:
   cout << "�������";
   break;
  case 3:
   cout << "�������";
   break;
  case 4:
   cout << "�����������";
   break;
  case 5:
   cout << "�����������";
   break;
  case 6:
   cout << "�������";
   break;
  }
 }
 else cout << "������� ����� �� 1 �� 365 ";
 system("pause");
 return 0;
}