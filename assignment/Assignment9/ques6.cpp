#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream f;
    f.open("hello.txt", ios::out | ios::in);
    f << "Hello World";

    cout << f.tellp();

    f.seekp(6, ios::beg);
    f << "C++  ";
    f.close();
}