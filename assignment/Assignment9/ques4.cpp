#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    string str;
    cout << "Enter string: ";
    getline(cin, str);

    // length
    int len = str.length();
    cout << "Length = " << len << endl;

    // write to file
    ofstream f;
    f.open("DATA.txt", ios::out);

    for (int i = 0; i < str.length(); i++)
    {
        f.put(str[i]); // character by character
    }

    f.close();

    // read from file
    ifstream f2;
    f2.open("data.txt", ios::in);

    char ch;
    cout << "Data from file: ";

    while (f2.get(ch))
    {
        cout << ch;
    }

    f2.close();
}