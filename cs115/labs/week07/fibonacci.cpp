#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout << "Enter a number of terms: ";
    cin >> n;

    int a = 0;
    int b = 1;
    int sum = 0;

    if (n == 1) {
        cout << "0";
    } else if (n == 2) {
        cout << "0 1";
    } else {
        cout << "0 1 ";
        for (int i = 0; i < n - 2; i++) {
            sum = a + b;
            a = b;
            b = sum;
            cout << b << " ";
        }
    }
    
    cout << endl;

    return 0;
}