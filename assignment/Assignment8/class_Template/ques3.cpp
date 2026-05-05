#include <iostream>
using namespace std;

template <typename T>
class Duo {
    T firstVal, secondVal;

public:
    void assign(T x, T y) {
        firstVal = x;
        secondVal = y;
    }

    void showPair() {
        cout << firstVal << " " << secondVal << endl;
    }
};

int main() {
    Duo<int> d;

    d.assign(10, 20);
    d.showPair();

    cout << "daivik 1024150089" << endl;

    return 0;
}
