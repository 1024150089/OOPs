#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    char data[100];

public:
    MyString() {}

    MyString(char s[]) {
        strcpy(data, s);
    }

    bool operator==(MyString obj) {
        return strcmp(data, obj.data) == 0;
    }

    MyString operator+(MyString obj) {
        MyString temp;
        strcpy(temp.data, data);
        strcat(temp.data, obj.data);
        return temp;
    }

    void show() {
        cout << data << endl;
    }
};

int main() {
    MyString s1("Hello "), s2("World"), s3;

    if (s1 == s2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    s3 = s1 + s2;
    s3.show();

    cout << "daivik 1024150089" << endl;

    return 0;
}
