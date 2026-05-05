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
    float a = 6.5;
    Test u = a;
    u.display();
    cout<<"daivik garg 1024150089"<<endl;
    return 0;
}
