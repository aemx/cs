#include <iostream>
using namespace std;

int swap(int a, int b) {
    return b;
}

int main(void) {
    int x, y;
    cout << "Enter an integer: ";
    cin >> x;
    cout << "Enter an second integer: ";
    cin >> y;

    cout << "The swapped integer pair is: " << swap(x, y) << ", " << \
    swap(y, x) << endl;
    
    return 0;
}