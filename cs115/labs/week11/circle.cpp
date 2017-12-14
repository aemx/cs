#include <iostream>
#include <math.h>
using namespace std;

class circle {
    int radius;
    public:
        void set_values(int);
        double circumference();
        double area();
};

void circle::set_values (int r) {
    radius = r;
}

double circle::circumference() {
    return radius * 2 * 3.1415;
}

double circle::area() {
    return pow(radius, 2) * 3.1415;
}

int main(void) {
    int i;
    circle c;
    cout << "Enter a radius for the circle: ";
    cin >> i;
    c.set_values(i);

    cout << endl;
    cout << "Circumference of the circle: " << c.circumference() << endl;
    cout << "Area of the circle: " << c.area() << endl;

    return 0;
}