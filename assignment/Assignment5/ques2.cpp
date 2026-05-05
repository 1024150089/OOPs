#include <iostream>
using namespace std;

class Base {
protected:
    int value;
public:
    Base(int v = 10) {
        value = v;
    }
    void setValue(int v) {
        value = v;
    }
};

class Derived : public Base {
public:
    Derived(int v) : Base(v) {}
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Derived obj(20);
    obj.display();
    obj.setValue(30);
    obj.display();
    cout << "daivik garg 1024150089";
    return 0;
}
