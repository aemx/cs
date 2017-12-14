#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 1) {
        n--;
    }

    int o = n;
    int sum = 0;

    if (o < 2) {
        cout << "Error: Integer was less than 2" << endl;
    } else {
        for (o; o != 0; o -= 2) {
        sum += o;
        }
    }
    
    cout << "The oblong number of " << n << " is equal to: " << sum << endl;

    return 0;
}