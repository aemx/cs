#include <iostream>
#include <tuple>
using namespace std;

std::tuple<int, int> sort(int a[], int size) {
    int returnarray[size];
    int x = 0;
    int y = 0;

    for (int i = 0; i < size; i++) {
        if (a[i] == 0) {
            x++;
        } else {
            y++;
        }
    }
    
    return std::make_tuple(x, y);
}

int main(void) {
    int n, t;
    cout << "Enter a size for the array: ";
    cin >> n;

    int array[n];
	cout << "Enter an array consisting of only 0s and 1s: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
    }

    cout << "The new array is: { ";
    for (int j = 0; j < std::get<0>(sort(array, n)); j++) {
        cout << "0 ";
    }
    for (int k = 0; k < std::get<1>(sort(array, n)); k++) {
        cout << "1 ";
    }
    cout << "}" << endl;
    
    return 0;
}