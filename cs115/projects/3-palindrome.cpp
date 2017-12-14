#include <iostream>
#include <string>
using namespace std;

bool palindrome(string w) {
    if (w.substr(0, 1) == w) {
        return true;
    } else if (w.substr(-1, 1) != w) {
        return false;
    } else if (w.substr(2, 1) != w) {
        return palindrome(w);
    }

    return true;
}

int main(int argc, char *argv[]) {
    string s = argc == 2 ? argv[1] : "redivider";
    cout << "\"" << s << "\" is a palindrome." << endl;

    return 0;
}