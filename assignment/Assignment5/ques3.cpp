#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int val = 0) {
        x = val;
    }
};

class PublicDerived : public Base {
public:
    PublicDerived(int val) : Base(val) {}
};

class ProtectedDerived : protected Base {
public:
    ProtectedDerived(int val) : Base(val) {}
    int getValue() {
        return x;
    }
};

class PrivateDerived : private Base {
public:
    PrivateDerived(int val) : Base(val) {}
    int getValue() {
        return x;
    }
};

int main() {
    PublicDerived obj1(5);
    cout << obj1.x << endl;

    ProtectedDerived obj2(10);
    cout << obj2.getValue() << endl;

    PrivateDerived obj3(15);
    cout << obj3.getValue() << endl;

    cout << "daivik garg 1024150089";
    return 0;
}
