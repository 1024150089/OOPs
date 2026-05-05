#include <iostream>
using namespace std;

class MyArray {
    int data[5];

public:
    void getValues() {
        for (int i = 0; i < 5; i++)
            cin >> data[i];
    }

    int operator[](int index) {
        if (index < 0 || index >= 5) {
            cout << "Index out of range" << endl;
            return -1;
        }
        return data[index];
    }
};

int main() {
    MyArray obj;

    obj.getValues();

    cout << obj[2] << endl;
    cout << obj[10] << endl;

    cout << "daivik 1024150089" << endl;

    return 0;
}
