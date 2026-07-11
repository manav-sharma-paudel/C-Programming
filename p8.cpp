// A rectangle can be defined by two points (top-left and bottom-right or
// top-right and bottom-left). Implement a class called Rectangle using the Point class we
// saw during the lecture. The Rectangle class must have the following methods:
// 1. void setPoints(const Point &, const Point &)
// 2. void getDimensions(double &, double &)
// 3. double perimeter()
// Write the main() function to check if your implementation works correctly.

#include <iostream>
#include <cmath>
using namespace std;

class Point {
    double x, y;

public:
    Point(double a = 0, double b = 0) {
        x = a;
        y = b;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }
};

class Rectangle {
    Point p1, p2;

public:
    void setPoints(const Point &a, const Point &b) {
        p1 = a;
        p2 = b;
    }

    void getDimensions(double &width, double &height) {
        width = abs(p2.getX() - p1.getX());
        height = abs(p2.getY() - p1.getY());
    }

    double perimeter() {
        double width, height;
        getDimensions(width, height);
        return 2 * (width + height);
    }
};

int main() {
    Rectangle rect;

    Point p1(1, 4);
    Point p2(5, 1);

    rect.setPoints(p1, p2);

    double width, height;
    rect.getDimensions(width, height);

    cout << "Width = " << width << endl;
    cout << "Height = " << height << endl;
    cout << "Perimeter = " << rect.perimeter() << endl;

    return 0;
}