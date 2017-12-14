#include <iostream>
using namespace std;

int main(void) {
    int cents, quarters, dimes, nickels, pennies;

    cout << "Enter an amount of money in cents: ";
    cin >> cents;

    quarters = cents / 25;
    dimes = (cents - (quarters * 25)) / 10;
    nickels = (cents - (quarters * 25) - (dimes * 10)) / 5;
    pennies = cents - (quarters * 25) - (dimes * 10) - (nickels * 5);
    
    cout << "You have " << quarters << " quarters," << endl;
    cout << dimes << " dimes," << endl;
    cout << nickels << " nickels, and" << endl;
    cout << pennies << " pennies." << endl;

    return 0;
}