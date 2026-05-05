#include <iostream>
#include <fstream>

using namespace std;

void CountnDisp(ifstream &fin)
{
    char c;
    c = fin.get();
    int i = 1;
    while (!fin.eof())
    {
        if (c != ' ')
            cout << i << ". " << c << endl;
        c = fin.get();
        if (c != ' ')
            i++;
    }
}

int main()
{
    ifstream fin;
    fin.open("NOTES.txt");

    CountnDisp(fin);
}
