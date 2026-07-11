// Write a program to calculate the volume and surface area of a cube, a cylinder and
// a pyramid using function overloading. Define all the functions related to volume in namespace
// ns1 and those of surface area in namespace ns2.

#include <iostream>
#include <cmath>
using namespace std;

namespace ns1 {
    double volume(double a) { // Cube
        return pow(a, 3);
    }
    
    double volume(double r, double h) { // Cylinder
        return M_PI * pow(r, 2) * h;
    }
    
    double volume(double l, double b, double h) { // Pyramid
        return (l * b * h) / 3;
    }
}

namespace ns2 {
    double surfaceArea(double a) { // Cube
        return 6 * pow(a, 2);
    }
    
    double surfaceArea(double r, double h) { // Cylinder
        return 2 * M_PI * r * (r + h);
    }
    
    double surfaceArea(double l, double b, double h) { // Pyramid
        double slantHeight = sqrt(pow(b / 2, 2) + pow(h, 2));
        return (l * b) + (l * slantHeight) + (b * slantHeight);
    }
}

int main(){
    double a, r, h, l, b;
    
    cout << "Enter the side length of the cube: ";
    cin >> a;
    cout << "Volume of cube: " << ns1::volume(a) << endl;
    cout << "Surface area of cube: " << ns2::surfaceArea(a) << endl;

    cout << "Enter the radius and height of the cylinder: ";
    cin >> r >> h;
    cout << "Volume of cylinder: " << ns1::volume(r, h) << endl;
    cout << "Surface area of cylinder: " << ns2::surfaceArea(r, h) << endl;

    cout << "Enter the length, breadth and height of the pyramid: ";
    cin >> l >> b >> h;
    cout << "Volume of pyramid: " << ns1::volume(l, b, h) << endl;
    cout << "Surface area of pyramid: " << ns2::surfaceArea(l, b, h) << endl;

    return 0;
}