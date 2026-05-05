#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream fout;
    fout.open("NUM.txt");

    for (int i = 1; i <= 200; i++)
    {
        fout << i << endl;
    }
    fout.close();
}