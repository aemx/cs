#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int f = n;
    int factorial = 1;

    for (f; f != 0; f--) {
        factorial *= f;
    }
    
    cout << "The factorial of " << n << " is equal to: " << factorial << endl;

    return 0;
}