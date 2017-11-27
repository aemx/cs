#include <iostream>
using namespace std;

int mode(int a[], int size) {
    int x = 1;
    int max = 0;
    int mode = a[0];

    for (int i = 0; i < size; i++) {
        if ( a[i] == a[i+1] ) {
            x++;
            if ( x > max ) {
                max = x;
                mode = a[i];
            }
        } else {
            x = 1;
        }
    }

    return mode;
}

int main(void) {
    int n, t;
    cout << "Enter a size for the array: ";
    cin >> n;

    int array[n];
	cout << "Enter the elements of the array, in order: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

    cout << "The mode of this array is " <<  mode(array, n) << "." << endl;
    
    return 0;
}