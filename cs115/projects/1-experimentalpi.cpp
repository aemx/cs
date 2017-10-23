#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number of points to generate: ";
    cin >> n;

    double totalIn = 0;
    double totalAll = 0;

    for (int i = 0; i < n; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;
        if (pow(x, 2) - x + pow(y, 2) - y <= -0.25) {
            totalIn += 1;
            totalAll += 1;
        } else {
            totalAll += 1;
        }
    }

    double result = (totalIn / totalAll) * 4;
    cout << result << endl;

    return 0;
}