/*
1.	������� ���������� ������� Fact (N) ������� ����, ��� �������� �������� ���������
N! = 1 � 2 � ... � N
(N> 0 - �������� ������ ����). �� ��������� ���� ������� ��������� ��������� �'��� ����� �����.
*/

#include <iostream>
using namespace std;

long double fact(int N)
{
    if (N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}

int main()
{
    int N;
    setlocale(0, "rus"); 
    cout << "������� ����� ��� ���������� ����������: ";
    cin >> N;
    cout << "��������� ��� ����� " << N << " = " << fact(N) << endl << endl; 
    return 0;
}