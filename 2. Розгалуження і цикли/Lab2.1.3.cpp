/*
3. ���� ��� �����. ������� �������� ��������, � ���� �������� � ����� �����.
*/



#include <iostream> 
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;
    cout << "������� ��� �����.\n";
    cin >> a >> b >> c;

    if (a > b) a = b;
    if (a > c) a = c;

    cout << a << endl;

    if (a < b) a = b;
    if (a < c) a = c;

    cout << a << endl;

    return 0;
}
