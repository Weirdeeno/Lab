//4.	Дана матриця розміру M × N.Впорядкувати її стовпці так, щоб їх перші елементи утворювали зростаючу послідовність.
// some exercises


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    const int M = 6, N = 3;
    int a[N][M], i, j, k, id, max;
    srand(time(NULL));
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            a[i][j] = rand() % 50 - 25;
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";

    k = M - 1;
    while (k > 0) {
        id = 0;
        for (j = 1; j <= k; j++)
            if (a[0][j] > a[0][id])
                id = j;
        for (i = 0; i < N; i++) {
            max = a[i][id];
            a[i][id] = a[i][k];
            a[i][k] = max;
        }
        k -= 1;
    }

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}