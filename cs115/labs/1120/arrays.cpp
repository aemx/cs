#include <iostream>
#include <tuple>
using namespace std;

int search(int a[], int size, int val) {
    for (int i = 0; i < size; i++) {
        if (val == a[i]) {
            return i;
            break;
        }
    }
}

std::tuple<int, int> maxmin(int a[], int size) {
    int x, y;
    for (int i = 0; i < size; i++) {
        if (a[i] >= x) {
            x = a[i];
        }
    }
    for (int j = 0; j < size; j++) {
        if (a[j] <= y) {
            y = a[j];
        }
    }
    return std::make_tuple(x, y);
}

int main(void) {
    int n, t;
    cout << "Enter a size for the array: ";
    cin >> n;

    int array[n];
	cout << "Enter the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

    cout << "Enter a target value to be found: ";
    cin >> t;

    cout << endl << "RESULTS:" << endl;
    if (search(array, n, t) == true) {
        cout << "The target value, " << t << ", was found at index " << \
        search(array, n, t) << "." << endl;
    } else {
        cout << "The target value was not found." << endl;
    }
    cout << "The greatest value in the array is " << \
    std::get<0>(maxmin(array, n)) << "." << endl;
    cout << "The smallest value in the array is " << \
    std::get<1>(maxmin(array, n)) << "." << endl;
    
    return 0;
}