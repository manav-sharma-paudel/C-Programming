// Create a class called Polygon with two data members: numberOfSides, and centroid (a
// Point object, you may use the Point class from previous lectures) and two member
// functions: display() that displays the values of member variables, and move() that
// translates the Polygon object to a new location.
// Create two other classes Triangle and Rectangle inheriting from Polygon class. Add
// relevant data members and member functions in these classes.

#include <iostream>
using namespace std;

class Point {
    int x, y;

public:
    Point(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    void setPoint(int a, int b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "(" << x << ", " << y << ")";
    }
};

class Polygon {
protected:
    int numberOfSides;
    Point centroid;

public:
    Polygon(int sides = 0, int x = 0, int y = 0) {
        numberOfSides = sides;
        centroid.setPoint(x, y);
    }

    void move(int x, int y) {
        centroid.setPoint(x, y);
    }

    void display() {
        cout << "Number of sides: " << numberOfSides << endl;
        cout << "Centroid: ";
        centroid.display();
        cout << endl;
    }
};

class Triangle : public Polygon {
    double base, height;

public:
    Triangle(double b, double h, int x, int y)
        : Polygon(3, x, y) {
        base = b;
        height = h;
    }

    void display() {
        Polygon::display();
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

class Rectangle : public Polygon {
    double length, width;

public:
    Rectangle(double l, double w, int x, int y)
        : Polygon(4, x, y) {
        length = l;
        width = w;
    }

    void display() {
        Polygon::display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Triangle t(5, 4, 2, 3);
    Rectangle r(8, 6, 1, 1);

    cout << "Triangle:" << endl;
    t.display();

    cout << endl;

    cout << "Rectangle:" << endl;
    r.display();

    cout << endl;

    cout << "Moving Triangle..." << endl;
    t.move(10, 15);
    t.display();

    return 0;
}