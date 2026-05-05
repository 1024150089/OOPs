#include <iostream>
using namespace std;

class Array
{
    int arr[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
            cin >> arr[i];
    }

    int operator[](int i)
    {
        if (i < 0 || i >= 5)
        {
            cout << "Out of bounds\n";
            return -1;
        }
        return arr[i];
    }
};

int main()
{
    Array a;
    a.input();
    cout << a[2] << endl;
    cout << a[10];
}