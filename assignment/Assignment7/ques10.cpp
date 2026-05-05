#include <iostream>
using namespace std;

class Value {
    int num;

public:
    friend istream& operator>>(istream &input, Value &v) {
        cout << "Enter number: ";
        input >> v.num;
        return input;
    }

    friend ostream& operator<<(ostream &output, Value &v) {
        output << "Output is: " << v.num << endl;
        return output;
    }
};

int main() {
    Value v1;

    cin >> v1;
    cout << v1;

    cout << "daivik 1024150089" << endl;

    return 0;
}
