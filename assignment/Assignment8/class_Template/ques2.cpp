#include <iostream>
using namespace std;

template <typename T>
class MyQueue {
    T data[100];
    int f, r;

public:
    MyQueue() {
        f = 0;
        r = -1;
    }

    void insert(T val) {
        if (r == 99) {
            cout << "Queue Full" << endl;
            return;
        }
        data[++r] = val;
    }

    void remove() {
        if (f > r) {
            cout << "Queue Empty" << endl;
            return;
        }
        f++;
    }

    void show() {
        for (int i = f; i <= r; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    MyQueue<int> q1;

    q1.insert(10);
    q1.insert(20);
    q1.insert(30);

    q1.show();

    q1.remove();

    q1.show();

    cout << "daivik 1024150089" << endl;

    return 0;
}
