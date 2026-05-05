#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void sortBubble(vector<T> &v) {
    int size = v.size();

    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    for (int i = 0; i < size; i++)
        cout << v[i] << " ";

    cout << endl;
}

int main() {
    vector<int> nums = {5, 4, 3, 2, 1, 0, -3, -6};

    sortBubble(nums);

    cout << "daivik 1024150089" << endl;

    return 0;
}
