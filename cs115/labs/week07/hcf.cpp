#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;

    while(a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }

    cout << "The highest common factor is " << a << "." << endl;
    
    return 0;
}