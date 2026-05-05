#include <iostream>
using namespace std;

class Test
{
    float x;

public:

    Test(float a)
    {
        x = a;
    }

    void display()
    {
        cout << x << endl;
    }
};

int main()
{
    float a = 5.5;
    Test t = a;
    t.display();
}