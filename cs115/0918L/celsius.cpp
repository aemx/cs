#include <iostream>
using namespace std;

int main(void) {
    int farenheit;
    cout << "Enter a temperature in Farenheit to convert to Celsius: ";
    cin >> farenheit;
    double celsius = (farenheit - 32) / 1.8;
    cout << "The temperature in Celsius is " << celsius << endl;
}