#include <iostream>
using namespace std;

template <class T>
class MyStack {
    T data[100];
    int topIndex;

public:
    MyStack() {
        topIndex = -1;
    }

    void pushItem(T val) {
        if (topIndex == 99) {
            cout << "Stack Full" << endl;
            return;
        }
        topIndex++;
        data[topIndex] = val;
    }

    void popItem() {
        if (topIndex == -1) {
            cout << "Stack Empty" << endl;
            return;
        }
        topIndex--;
    }

    void showStack() {
        for (int i = topIndex; i >= 0; i--)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    MyStack<float> st;

    st.pushItem(10);
    st.pushItem(20);
    st.pushItem(30);

    st.showStack();

    st.popItem();

    st.showStack();

    cout << "daivik 1024150089" << endl;

    return 0;
}
