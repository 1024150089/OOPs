#include <iostream>
using namespace std;

template <typename T>
class Operations {
public:
    T sum(T x, T y) {
        return x + y;
    }

    T difference(T x, T y) {
        return x - y;
    }

    T product(T x, T y) {
        return x * y;
    }

    T quotient(T x, T y) {
        return x / y;
    }
};

int main() {
    Operations<int> op;

    cout << op.sum(10, 5) << endl;
    cout << op.difference(10, 5) << endl;
    cout << op.product(10, 5) << endl;
    cout << op.quotient(10, 5) << endl;

    cout << "daivik 1024150089" << endl;

    return 0;
}
