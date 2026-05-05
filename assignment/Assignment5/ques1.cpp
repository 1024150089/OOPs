#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called\n";
    }
    void display() {
        cout << "Base class function\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called\n";
    }
    void show() {
        cout << "Derived class function\n";
    }
};

int main() {
    Derived obj;
    obj.display();
    obj.show();
    cout << "daivik garg 1024150089";
    return 0;
}
