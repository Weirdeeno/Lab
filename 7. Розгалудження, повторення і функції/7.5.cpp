/*
5.����� ���������� ����������, ���� ������� ��� ��� ���� �������, ��� ������ ����� �����.
���������, �� ������� �������� ����� � ������� [2, n], �� � ������� ����������.
���� ���, �� ������� �� ����� ����� � ���. ������� �������� �������.
*/
#include <iostream>
using namespace std;

bool is_perfect(int num) {
    int sum = 0;
    for (int j = 1; j < num; j++) {
        if (num % j == 0)
            sum += j;
    }
    if (sum == num)
        return true;
    return false;
}

int main() {
    int n;
    cout << "Input n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (is_perfect(i)) {
            cout << i << endl;
        }
    }
    system("pause");
    return 0;
}