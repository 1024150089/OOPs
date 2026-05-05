#include <iostream>
using namespace std;

// Base Class
class Shape
{
public:
    // Virtual functions
    virtual void area() = 0;
    virtual void display() = 0;
};

// Derived Class: Circle
class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    void display()
    {
        cout << "Shape: Circle" << endl;
    }
};

// Derived Class: Rectangle
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    void display()
    {
        cout << "Shape: Rectangle" << endl;
    }
};

// Derived Class: Triangle
class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void area()
    {
        cout << "Area of Triangle = " << 0.5 * base * height << endl;
    }

    void display()
    {
        cout << "Shape: Triangle" << endl;
    }
};

int main()
{
    Shape *s;

    Circle c(5);
    Rectangle r(10, 4);
    Triangle t(6, 3);

    // Circle
    s = &c;
    s->display();
    s->area();

    // Rectangle
    s = &r;
    s->display();
    s->area();

    // Triangle
    s = &t;
    s->display();
    s->area();

    return 0;
}