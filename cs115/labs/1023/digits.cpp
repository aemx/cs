#include <iostream>
using namespace std;

int digits(int num) {
    int d = 0;

    for (int i = 1; num >= i; i *= 10) {
        d += 1;
    }

    return d;
}

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The number " << n << " contains a total of " << digits(n) << \
    " digit(s)." << endl;

    return 0;
}