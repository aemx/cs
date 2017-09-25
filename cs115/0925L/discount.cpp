#include <iostream>
using namespace std;

int main(void) {
    double unitCost, total;
    int unitQuantity;

    cout << "Enter a cost in US dollars: ";
    cin >> unitCost;
    cout << "Enter a quantity: ";
    cin >> unitQuantity;

    if (unitQuantity >= 100) {
        total = (unitCost * unitQuantity) * 0.90;
    } else if (unitQuantity >= 10) {
        total = (unitCost * unitQuantity) * 0.95;
    } else {
        total = unitCost * unitQuantity;
    }

    cout << "Your total cost for " << unitQuantity << " units valued at $" << \
    unitCost << " each is: $" << total << endl;
    
    return 0;
}