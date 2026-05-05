#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void searchLinear(vector<T> v, T key) {
    bool found = false;

    for (int i = 0; i < v.size(); i++) {
        if (v[i] == key) {
            found = true;
        }
    }

    if (found)
        cout << "Element Found" << endl;
    else
        cout << "Element Not Found" << endl;
}

int main() {
    vector<int> data = {1, 3, 4, 5};

    searchLinear(data, 9);

    cout << "daivik 1024150089" << endl;

    return 0;
}
