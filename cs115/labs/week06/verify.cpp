#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a six-digit ticket number to determine validity: ";
    cin >> n;

    int i = (n / 10) % 7;
    string returnstr;

    if (i == n % 10) {
        returnstr = "valid";
    } else {
        returnstr = "invalid";
    }

    cout << "Ticket number " << n << " is " << returnstr << "." << endl;

    return 0;
}