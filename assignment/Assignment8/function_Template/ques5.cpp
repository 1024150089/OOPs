#include <iostream>
using namespace std;

template <typename T>
void displayVal(T x) {
    cout << x << endl;
}

template <typename T>
void displayVal(T x, T y) {
    cout << x << " " << y << endl;
}

template <typename T, typename U>
void displayVal(T x, U y) {
    cout << x << " " << y << endl;
}

int main() {
    displayVal(5);
    displayVal(10, 20);
    displayVal(5, 3.14);

    cout << "daivik 1024150089" << endl;

    return 0;
}
