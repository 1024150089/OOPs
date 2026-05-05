#include <iostream>

using namespace std;

template <typename s>

void swapi(s &a, s &b)
{
    s temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
    return;
}
int main()
{
    int x = 3;
    int y = 5;
    swapi(x, y);

    char n = 'c';
    char m = 'd';
    swapi(n, m);
}