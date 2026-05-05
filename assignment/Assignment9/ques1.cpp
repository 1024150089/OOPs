#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream fout;
    fout.open("N.txt");

    for (int i = 1; i <= 200; i++)
    {
        fout << i << endl;
    }
    fout.close();
}
