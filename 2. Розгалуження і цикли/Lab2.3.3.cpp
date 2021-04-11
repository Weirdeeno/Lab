/*
3. ƒано ц≥ле число N (> 0). знайти тв≥р
1.1 Х 1.2 Х 1.3 Х ...
(N множник≥в).
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
    cout << "–езультат = " << p;
    return 0;
}
