// Define a class, Vector, which represents either a column vector or a row
// vector. A column (row) vector is a matrix consisting of a single column (row) of m
// elements.
// Let m = 3 in this program. (Use three member variables instead of an array.)
// Overload the unary minus operator to negative all the elements in the vector.
// For example, if a = [2 -5 6] is a row vector, then -a must return [-2 5 -6].
// Question 2: In the class, Vector, defined in Question 1, overload the following
// operators:
// 1. operator+ (Addition of a row-vector and a column-vector (or vice versa) is
// not allowed)
// 2. operator- (Subtraction of a row-vector from a column-vector (or vice versa)
// is not allowed)
// 3. operator* (A column-vector can multiply only a row-vector or vice versa!!)
// 4. operator<<
// 5. operator>>
// 6. operator+=
// 7. operator==
// 8. operator> (If a and b are two vectors of the same type (either row or
// column), then a > b if each element in a is greater than the corresponding
// element in b, i.e. a.x > b.x and a.y > b.y and a.z > b.z)

#include <iostream>
using namespace std;

class Vector {
    int x, y, z;
    bool isRow;   // true = row vector, false = column vector

public:
    Vector(int a = 0, int b = 0, int c = 0, bool row = true) {
        x = a;
        y = b;
        z = c;
        isRow = row;
    }

    // Unary minus operator
    Vector operator-() {
        return Vector(-x, -y, -z, isRow);
    }

    void display() {
        if (isRow)
            cout << "[" << x << " " << y << " " << z << "]" << endl;
        else
            cout << "[" << x << "]" << endl
                 << "[" << y << "]" << endl
                 << "[" << z << "]" << endl;
    }
};

int main() {
    Vector row(2, -5, 6, true);
    Vector column(1, 3, -4, false);

    cout << "Original Row Vector:" << endl;
    row.display();

    cout << "\nNegative Row Vector:" << endl;
    (-row).display();

    cout << "\nOriginal Column Vector:" << endl;
    column.display();

    cout << "\nNegative Column Vector:" << endl;
    (-column).display();

    return 0;
}