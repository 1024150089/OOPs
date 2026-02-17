#include <iostream>
using namespace std;
// 1
class Rectangle
{
    int length, breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int x)
    {
        length = x;
        breadth = x;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area() { return length * breadth; }
    ~Rectangle() { cout << "Destructor called\n"; }
};
// 3
class Test
{
public:
    ~Test() { cout << "Test Destructor\n"; }
};
// 4
class Sample
{
    int x;

public:
    Sample(int a) { x = a; }
    void show() { cout << x << endl; }
};
int main()
{
    cout << "daivik garg 1024150089" << endl;
    // 1
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    // 2
    Rectangle arr[3] = {Rectangle(), Rectangle(3), Rectangle(2, 5)};
    for (int i = 0; i < 3; i++)
        cout << arr[i].area() << endl;
    // 3
    Test t;
    // 4
    int *pInt = new int(10);
    float *pFloat = new float(5.5);
    cout << *pInt << endl;
    cout << *pFloat << endl;
    delete pInt;
    delete pFloat;
    int *arrInt = new int[3];
    float *arrFloat = new float[3];
    for (int i = 0; i < 3; i++)
    {
        arrInt[i] = i + 1;
        arrFloat[i] = i + 0.5;
    }
    for (int i = 0; i < 3; i++)
        cout << arrInt[i] << " ";
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << arrFloat[i] << " ";
    cout << endl;
    delete[] arrInt;
    delete[] arrFloat;
    Sample *obj = new Sample(20);
    obj->show();
    delete obj;
    return 0;
}
