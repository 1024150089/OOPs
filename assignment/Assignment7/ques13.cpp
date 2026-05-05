#include <iostream>
#include <cmath>
using namespace std;

class PolarCoord {
public:
    int radius, angle;

    PolarCoord(int r, int a) {
        radius = r;
        angle = a;
    }
};

class RectCoord {
    int xVal, yVal;

public:
    RectCoord() {}

    RectCoord(PolarCoord p) {
        xVal = p.radius * cos(p.angle);
        yVal = p.radius * sin(p.angle);
    }

    void display() {
        cout << xVal << " " << yVal << endl;
    }
};

int main() {
    PolarCoord p1(10, 5);
    RectCoord r1 = p1;

    r1.display();

    cout << "daivik 1024150089" << endl;

    return 0;
}
