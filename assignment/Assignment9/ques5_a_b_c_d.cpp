#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream f;
    f.open("a_z.txt", ios::out | ios::in);
    f.seekg(10, ios::beg);
    char c, last;
    f >> c;
    cout << c << endl;
    f.seekp(4, ios::beg);
    f << 'M';
    f.seekg(0, ios::end);
    cout << f.tellg() << endl;
    f.seekg(-1, ios::end);
    f >> last;
    cout << last;
    f.close();
}