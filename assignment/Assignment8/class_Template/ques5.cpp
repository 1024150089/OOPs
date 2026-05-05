#include <iostream>
using namespace std;

template <class T>
class Array
{
    T arr[100];
    int n;

public:
    void input(int size)
    {
        n = size;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display()
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int> a;

    a.input(5);
    a.display();
}