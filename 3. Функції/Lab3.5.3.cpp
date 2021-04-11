/*
3.	������� ������� Even (K) �������� ����, ��� ������� True, ���� ����� �������� K � ������, � False � ������ �������.
� �� ��������� ������ ������� ������ ����� � ����� � 10 ����� �����.


*/

#include <iostream>
using namespace std;


bool even(int k)
{
    return !(k & 1);
}

int main()
{
    setlocale(LC_ALL, "ru");
    int number, count = 0;
    cout << "������� 10 ������ �����: " << endl;
    for (int i = 0; i < 10; ++i)
    {
        cin >> number;
        if (even(number))
        {
            ++count;
        }
    }
    cout << " ��������� ������ ����� : " << count << endl;
    return 0;
}