#include <iostream>
#include <fstream>

using namespace std;

int main()
{

  ofstream fout;
  ifstream fin;
  // fout.open("NUM.txt"); // file ka path dena hai
  // // if no file is present , will make new fike

  // for (int i = 1; i <= 200; i++)
  // {
  //   fout << i << endl;
  // }

  // fout.close(); // resources relase kr pau

  fin.open("Txt.txt");

   char c;

    fin>>c;// one by one read krta h characters

  while (!fin.eof()) // eof
  {
    cout << c;
    c = fin.get();
  }

  fin.close();
}
