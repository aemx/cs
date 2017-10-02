#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int t = n;
    int sum = 0;

    for (t; t != 0; t--) {
        sum += t;
    }
    
    cout << "The triangle number of " << n << " is equal to: " << sum << endl;

    return 0;
}