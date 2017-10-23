#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter number of eggs: ";
    cin >> n;

    int dozens = n / 12;
    int singles = n % 12;
    double total = (dozens * 3.25) + (singles * 0.45);

    cout << "You ordered " << n << " eggs. That's " << dozens << \
    " dozens at $3.25 per dozen and " << singles << \
    " individual eggs at 45 cents each for a total of $" << \
    total << "." << endl;

    return 0;
}