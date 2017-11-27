#include <iostream>
using namespace std;

int main(void) {
    int a, b;
    cout << "Enter a first size for the array: ";
    cin >> a;
    cout << "Enter a second size for the array: ";
    cin >> b;

    int array[a][b];
    for (int i = 0; i < b; i++) {
        cout << "Enter the elements of the array (row " << i << "): ";
        for (int j = 0; j < a; j++) {
		cin >> array[i][j];
	    }
    }

    cout << endl << "RESULT:" << endl;
    for (int k = 0; k < a; k++) {
        for (int l = 0; l < b; l++) {
            cout << array[l][k] << " ";
        }
        cout << endl;
    }
    
    return 0;
}