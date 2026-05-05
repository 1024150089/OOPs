#include <iostream>
#include <string>
using namespace std;

class BookRecord {
public:
    string bookName;
    string writerName;
    int id;

    BookRecord() : bookName(""), writerName(""), id(0) {}

    BookRecord(string n, string w, int i) {
        bookName = n;
        writerName = w;
        id = i;
    }

    BookRecord(const BookRecord &obj) {
        bookName = obj.bookName;
        writerName = obj.writerName;
        id = obj.id;
    }
};

class LibrarySystem {
private:
    BookRecord list[10];
    int total;

public:
    LibrarySystem() {
        total = 0;
    }

    bool insertBook(string n, string w, int i) {
        if (total >= 10)
            return false;

        list[total] = BookRecord(n, w, i);
        total++;
        return true;
    }

    bool deleteById(int i) {
        for (int k = 0; k < total; k++) {
            if (list[k].id == i) {
                for (int j = k; j < total - 1; j++) {
                    list[j] = list[j + 1];
                }
                total--;
                return true;
            }
        }
        return false;
    }

    void printAll() {
        for (int i = 0; i < total; i++) {
            cout << endl;
            cout << "Record " << i + 1 << endl;
            cout << "Name: " << list[i].bookName << endl;
            cout << "Writer: " << list[i].writerName << endl;
            cout << "ID: " << list[i].id << endl;
        }
    }
};

int main() {
    LibrarySystem sys;

    for (int i = 0; i < 2; i++) {
        string name, writer;
        int code;

        cout << "Enter details for Book " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Writer: ";
        cin >> writer;
        cout << "ID: ";
        cin >> code;

        sys.insertBook(name, writer, code);
    }

    cout << endl;
    cout << "--- Library Data ---" << endl;
    sys.printAll();

    int removeId;
    cout << "Enter ID to remove: ";
    cin >> removeId;

    sys.deleteById(removeId);

    cout << endl;
    cout << "After Removal:" << endl;
    sys.printAll();

    BookRecord r1("C++", "Bjarne", 101);
    BookRecord r2("DSA", "CLRS", 102);

    BookRecord r3 = r1;

    BookRecord *ptr = new BookRecord("OOP", "Stroustrup", 103);
    cout << "Dynamic Record: " << ptr->bookName << endl;

    delete ptr;

    cout << "daivik 1024150089" << endl;

    return 0;
}
