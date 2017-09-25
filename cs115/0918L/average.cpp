#include <iostream>
using namespace std;

int main(void) {
    int a, b, c;

    cout << "Enter three numbers to find an average: ";
    cin >> a >> b >> c;
    double average = (a + b + c) / 3.00;
    cout << "The average of the three numbers is " << average << endl;
    
    return 0;
}