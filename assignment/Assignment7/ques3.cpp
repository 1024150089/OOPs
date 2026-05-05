#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    double area(double base, double height)
    {
        return 0.5 * base * height;
    }

    double area(double side)
    {
        return (sqrt(3) / 4) * side * side;
    }

    double area(double equalSide, double base, bool isIsosceles)
    {
        double height = sqrt(equalSide * equalSide - (base * base) / 4);
        return 0.5 * base * height;
    }
};

int main()
{
    Triangle t;

    cout << "Right Triangle Area = " << t.area(6, 4) << endl;
    cout << "Equilateral Triangle Area = " << t.area(5) << endl;
    cout << "Isosceles Triangle Area = " << t.area(5, 6, true) << endl;

    return 0;
}