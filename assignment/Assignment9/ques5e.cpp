#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    fstream fi;
    fi.open("5e.txt");
    fi.seekg(10, ios::beg);
    cout << fi.tellp();

    while (!fi.eof())
    {
        char c;
        fi >> c;
        cout << c;
    }
    fi.close();
}