#include <iostream>
using namespace std;

class First {
private:
    int num1;

public:
    First(int a) {
        num1 = a;
    }

    friend int totalSum(First f, Second s);
};

class Second {
private:
    int num2;

public:
    Second(int b) {
        num2 = b;
    }

    friend int totalSum(First f, Second s);
};

int totalSum(First f, Second s) {
    return f.num1 + s.num2;
}

int main() {
    First f1(10);
    Second s1(20);

    cout << "Result = " << totalSum(f1, s1) << endl;
    cout << "daivik 1024150089" << endl;

    return 0;
}
