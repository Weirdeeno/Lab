//4. Відсортувати двовимірний масив цілих чисел за спаданням максимальних елементів стовбців.


#include <iostream>
#include <stdlib.h>
#include <ctime> // содержит time()
#include <iomanip>

using namespace std;

int main()
{
	srand(time(NULL));
	const int rows = 5, columns = 6;

    int a[rows][columns], i, j, k, id, max;
    srand(time(NULL));
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            a[i][j] = rand() % 50 - 25;
           cout << a[i][j] << "     ";
        }
        cout << endl;
    }
    cout << endl;

    k = columns - 1;
    while (k > 0) 
    {
        id = 0;
        for (j = 1; j <= k; j++)
        {
            if (a[0][j] < a[0][id])
                id = j;
        }
        for (i = 0; i < rows; i++) 
        {
            max = a[i][id];
            a[i][id] = a[i][k];
            a[i][k] = max;
        }
        k -= 1;
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            cout << a[i][j] << "     ";
        }
        cout << endl;
    }
    system("pause");
    return 0;
}	