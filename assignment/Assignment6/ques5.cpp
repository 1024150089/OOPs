#include <iostream>
using namespace std;

class ComplexNum {
    int r, i;

public:
    ComplexNum(int a, int b) {
        r = a;
        i = b;
    }

    ComplexNum(const ComplexNum &obj) {
        r = obj.r;
        i = obj.i;
    }

    void show() {
        cout << r << " + " << i << "i" << endl;
    }

    void addValues(ComplexNum n1, ComplexNum n2) {
        r = n1.r + n2.r;
        i = n1.i + n2.i;
    }
};

int main() {
    ComplexNum n1(2, 3);
    ComplexNum n2(4, 5);
    ComplexNum n3 = n1;

    cout << "First Number: ";
    n1.show();

    cout << "Second Number: ";
    n2.show();

    cout << "Copied Number: ";
    n3.show();

    ComplexNum res(0, 0);
    res.addValues(n1, n2);

    cout << "Result: ";
    res.show();

    cout << "daivik 1024150089" << endl;

    return 0;
}
