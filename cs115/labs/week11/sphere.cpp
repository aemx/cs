#include <iostream>
#include <math.h>
using namespace std;

class sphere {
    int radius;
    public:
        void set_values(int);
        double volume();
        double area();
};

void sphere::set_values (int r) {
    radius = r;
}

double sphere::volume() {
    return pow(radius, 3) * 4 / 3 * 3.1415;
}

double sphere::area() {
    return pow(radius, 2) * 4 * 3.1415;
}

int main(void) {
    int i;
    sphere s;
    cout << "Enter a radius for the sphere: ";
    cin >> i;
    s.set_values(i);

    cout << endl << "Volume of the sphere: " << s.volume() << endl;
    cout << "Surface area of the sphere: " << s.area() << endl;

    return 0;
}