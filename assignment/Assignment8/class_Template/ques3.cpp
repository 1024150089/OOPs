#include <iostream>
using namespace std;

template <class T>
class Pair
{
    T a, b;

public:
    void set(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Pair<int> p;
    p.set(10, 20);
    p.display();
}