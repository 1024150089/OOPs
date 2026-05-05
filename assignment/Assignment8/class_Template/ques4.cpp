#include <iostream>
using namespace std;

template <class T>
class Calc
{
public:

    T add(T a, T b)
    {
        return a + b;
    }

    T sub(T a, T b)
    {
        return a - b;
    }

    T mul(T a, T b)
    {
        return a * b;
    }

    T divi(T a, T b)
    {
        return a / b;
    }
};

int main()
{
    Calc<int> c;

    cout << c.add(10, 5) << endl;
    cout << c.sub(10, 5) << endl;
    cout << c.mul(10, 5) << endl;
    cout << c.divi(10, 5) << endl;
}