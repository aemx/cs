#include <iostream>
using namespace std;

int lcm(int a, int b) {
    int c = a;
    int d = b;
    while(c != d) {
        if (c > d) {
            c -= d;
        } else {
            d -= c;
        }
    }

    return (a * b) / c;
}

int main(void) {
    int x, y;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a second number: ";
    cin >> y;

    cout << "The LCM of " << x << " and " << y << " is " << lcm(x, y) << endl;
    
    return 0;
}