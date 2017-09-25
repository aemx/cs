#include <iostream>
using namespace std;

int main(void) {
    double a, b, c, largestnum;

    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a second number: ";
    cin >> b;
    cout << "Enter a third number: ";
    cin >> c;

    if (a > b && a > c) {
        largestnum = a;
    } else if (b > c && b > a) {
        largestnum = b;
    } else {
        largestnum = c;
    }
    
    cout << "The largest number inputed is: " << largestnum << endl;

    return 0;
}