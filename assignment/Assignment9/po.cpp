#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    // ofstream of;
    // of.open("m.txt");
    // for ( int i = 1; i<=100;i++) {
    //     of<<i<<endl;
    // }
    // of.close();
    ofstream f;
    f.open("d.txt", ios::out | ios::app);
    f << setw(100) << setfill('#') << 5911;
    f.close();
}
