#include <iostream>
using namespace std;
// Q1
class Demo
{
    int x;

public:
    void set(int x)
    {
        this->x = x;
    }
    void show()
    {
        cout << x << endl;
    }
};
// Q2
class B;
class A
{
    int a;

public:
    void setA(int x) { a = x; }
    void showA() { cout << a << endl; }
    friend void swap(A &, B &);
};
class B
{
    int b;

public:
    void setB(int y) { b = y; }
    void showB() { cout << b << endl; }
    friend void swap(A &, B &);
};
void swap(A &obj1, B &obj2)
{
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}
// Q3
class Y;
class X
{
    int x;

public:
    void setX(int a) { x = a; }
    friend int add(X, Y);
};
class Y
{
    int y;

public:
    void setY(int b) { y = b; }
    friend int add(X, Y);
};
int add(X o1, Y o2)
{
    return o1.x + o2.y;
}
// Q4
class First
{
    int data;

public:
    void set(int x) { data = x; }
    friend class Second;
};
class Second
{
public:
    void show(First obj)
    {
        cout << obj.data << endl;
    }
};
// Q5
class Rectangle
{
    int l, b;

public:
    void set(int x, int y)
    {
        l = x;
        b = y;
    }
    void area()
    {
        cout << l * b << endl;
    }
};
// Q6
inline int cube(int n)
{
    return n * n * n;
}
// Q7
class Number
{
    int n;

public:
    void set(int x) { n = x; }
    void show() { cout << n << endl; }
    Number addValue(Number obj)
    {
        Number temp;
        temp.n = n + obj.n;
        return temp;
    }
    Number addRef(Number &obj)
    {
        Number temp;
        temp.n = n + obj.n;
        return temp;
    }
};
int main()
{
    cout << "daivik garg 1024150089" << endl;
    // Q1
    Demo d;
    Demo *ptr = &d;
    d.set(10);
    d.show();
    ptr->show();
    // Q2
    A obj1;
    B obj2;
    obj1.setA(5);
    obj2.setB(10);
    swap(obj1, obj2);
    obj1.showA();
    obj2.showB();
    // Q3
    X x1;
    Y y1;
    x1.setX(3);
    y1.setY(7);
    cout << add(x1, y1) << endl;
    // Q4
    First f;
    f.set(20);
    Second s;
    s.show(f);
    // Q5
    Rectangle r[3];
    r[0].set(2, 3);
    r[1].set(4, 5);
    r[2].set(6, 7);
    for (int i = 0; i < 3; i++)
        r[i].area();
    // Q6
    cout << cube(3) << endl;
    // Q7
    Number n1, n2, result;
    n1.set(5);
    n2.set(15);
    result = n1.addValue(n2);
    result.show();
    result = n1.addRef(n2);
    result.show();
    return 0;
}
