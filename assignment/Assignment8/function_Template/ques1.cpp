#include <iostream>
using namespace std;

template <class T>
class DataArray {
    T items[100];
    int size;

public:
    void read(int n) {
        size = n;
        for (int i = 0; i < size; i++)
            cin >> items[i];
    }

    void show() {
        for (int i = 0; i < size; i++)
            cout << items[i] << " ";
        cout << endl;
    }
};

int main() {
    DataArray<int> arr;

    arr.read(5);
    arr.show();

    cout << "daivik 1024150089" << endl;

    return 0;
}
