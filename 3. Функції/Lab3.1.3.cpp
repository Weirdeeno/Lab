/*
3.	������� ������� Mean (X, Y, AMean, GMean), ��� �������� ������ ����������� AMean = (X + Y) / 2
� ������ ����������� GMean = (X � Y) 1/2 ���� ���������� ����� X � Y (X � Y - ����� , AMean � GMean - ������ ��������� ������� ����).
�� ��������� ���� ������� ������ ������ ����������� � ������ ����������� ��� ��� (A, B), (A, C), (A, D), ���� ��� A, B, C, D.
*/

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
void Mean(double x, double y, double& AMean, double& GMean)
{
    AMean = (x + y) / 2.;
    GMean = sqrt(x * y);
}
int main()
{
    setlocale(LC_ALL, "rus");
    double a, b, c, d, AM, GM;
    cout << "������� A - "; cin >> a;
    cout << "������� B - "; cin >> b;
    cout << "������� C - "; cin >> c;
    cout << "������� D - "; cin >> d;
    Mean(a, b, AM, GM);
    cout << "��� ���� AB, ������� �������������� = " << AM << "; ������� �������������� = " << GM << endl;
    Mean(a, c, AM, GM);
    cout << "��� ���� AC, ������� �������������� = " << AM << "; ������� �������������� = " << GM << endl;
    Mean(a, d, AM, GM);
    cout << "��� ���� AD, ������� �������������� = " << AM << "; ������� �������������� = " << GM << endl;
    return 0;
}