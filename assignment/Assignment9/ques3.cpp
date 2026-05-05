#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ifstream fin;
    ofstream fout;

    fout.open("Copy.txt");
    fin.open("NOTES.txt");

    char c;
    c = fin.get();

    while (!fin.eof())
    {
        fout << c;
        c = fin.get();
    }
}