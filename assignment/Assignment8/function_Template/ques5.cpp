#include <iostream>
using namespace std;

template <typename T>
void process(T a)
{
    cout << a << endl;
}

template <typename T>
void process(T a, T b)
{
    cout << a << " " << b << endl;
}

template <typename T, typename U>
void process(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    process(5);
    process(10, 20);
    process(5, 3.14);
    return 0;
}