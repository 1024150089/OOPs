#include <iostream>

using namespace std;
class Polygon
{

public:
    int width;
    int height;
    void set_values(int w, int h)
    {
        this->width = w;
        this->height = h;
    }
    virtual void calculate_area() = 0;
};

class Rectangle : public Polygon
{

public:
    void calculate_area()
    {
        cout << width * height << " ";
    }
};

class Triangle : public Polygon
{
public:
    void calculate_area()
    {
        cout << (height * width) / 2 << " ";
    }
};

int main()
{
   Polygon *p;

    Rectangle r;
    Triangle t;

    // Rectangle
    p = &r;
    p->set_values(10, 20);
    p->calculate_area();

    // Triangle
    p = &t;
    p->set_values(10, 20);
    p->calculate_area();

    return 0;
}
