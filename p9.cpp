// Define a class, Vector, which represents either a column vector or a row vector. A column (row)
// vector is a matrix consisting of a single column (row) of m elements.
// Let m = 3 in this program. (Use three member variables instead of an array.)
// Use appropriate constructors and destructor.
// Implement the following method:
// Vector add(Vector) // Adds the input vector with the calling vector

#include <iostream>
using namespace std;

class Vector {
    int x, y, z;

public:
    Vector() {
        x = y = z = 0;
    }

    Vector(int a, int b, int c) {
        x = a;
        y = b;
        z = c;
    }

    ~Vector() {
    }

    Vector add(Vector v) {
        Vector temp;
        temp.x = x + v.x;
        temp.y = y + v.y;
        temp.z = z + v.z;
        return temp;
    }

    void display() {
        cout << "(" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Vector v1(2, 4, 6);
    Vector v2(1, 3, 5);

    Vector v3 = v1.add(v2);

    cout << "Vector 1 = ";
    v1.display();

    cout << "Vector 2 = ";
    v2.display();

    cout << "Sum = ";
    v3.display();

    return 0;
}