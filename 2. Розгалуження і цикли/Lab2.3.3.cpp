/*
3. ���� ���� ����� N (> 0). ������ ���
1.1 � 1.2 � 1.3 � ...
(N ��������).
*/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    double p = 1;
    cout << "N = ";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        p = p * (1 + 0.1 * i);
    }
    cout << "��������� = " << p;
    return 0;
}
