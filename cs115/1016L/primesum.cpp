#include <math.h>
#include <iostream>
using namespace std;

int main(void) {
    int p;
    int sum = 5;

    cout << "Enter a number: ";
    cin >> p;

    if (p == 2) {
        sum = 2;
    } else if (p == 3 || p == 4) {
        sum = 5;
    } else {
        for (int i = 2; i <= p; i++) {
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    break;
                }
                else if (j + 1 > sqrt(i)) {
                    sum += i;
                }
            }
        }
    }
    
    cout << "The sum of all prime numbers up to " << p << " is equal to: " << sum << endl;

    return 0;
}