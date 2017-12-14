#include <iostream>
using namespace std;

int main(void) {
    int seconds, hh, mm, ss;

    cout << "Enter an amount of time in seconds: ";
    cin >> seconds;

    hh = seconds / 3600;
    mm = (seconds - (hh * 3600)) / 60;
    ss = seconds - (hh * 3600) - (mm * 60);

    cout << "The amount of time inputed is: " << hh << " hours, " << mm << \
    " minutes, and " << ss << " seconds." << endl;

    return 0;
}