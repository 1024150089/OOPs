#include <iostream>
#include <cmath>
using namespace std;

class Polar
{
public:
    int r, theta;

    Polar(int a, int b)
    {
        r = a;
        theta = b;
    }
};

class Cartesian
{
    int x, y;

public:
    Cartesian() {}

    Cartesian(Polar p)
    {
        x = p.r * cos(p.theta);
        y = p.r * sin(p.theta);
    }

    void show()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Polar p(10, 5);
    Cartesian c = p;
    c.show();
}