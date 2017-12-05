#include <iostream>
using namespace std;

void sieve(int array[], int num) {
    for (int i = 0; i < num; ++i) {
        if (array[i] != 0) {
            for (int j = i + i; j < num; j += i) {
                array[j] = 0;
            }
        }
    }
}

void goldbach(int array[], int num) {
int x = 0;
int y = num - 1;
    while (x <= y) {
        while (x <= y && array[x] + array[y] > num) {
            y--;
        }
        if (x <= y && array[x] + array[y] == num) {
            cout << array[x] << " " << array[y] << endl;
        }
        x++;
    }
}

int main(void) {
    int a[1000];
    a[0] = a[1] = 0;

    for (int i = 2; i < 1000; ++i) {
        a[i] = i;
    }

    sieve(a, 1000);

    for (int i = 0; i < 1000; i++) {
        if (a[i] > 0) {
            cout << a[i] << endl;
        }
    }

    goldbach(a, 1000);

    return 0;
}
