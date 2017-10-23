#include <iostream>
using namespace std;

int main(void) {
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (s == string(s.rbegin(), s.rend())) {
        cout << "The string \"" << s << "\" is a palindrome." << endl;
    } else {
        cout << "The string \"" << s << "\" is not a palindrome." << endl;
    }

    return 0;
}