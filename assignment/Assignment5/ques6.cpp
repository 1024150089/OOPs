#include <iostream>
#include <string>
using namespace std;

class BookInfo {
protected:
    string bookTitle;
    string bookAuthor;
    double bookPrice;

public:
    BookInfo(string t, string a, double p)
        : bookTitle(t), bookAuthor(a), bookPrice(p) {}

    void showDetails() {
        cout << "Title: " << bookTitle << endl;
        cout << "Author: " << bookAuthor << endl;
        cout << "Price: " << bookPrice << endl;
    }
};

class AcademicBook : public BookInfo {
    string bookSubject;

public:
    AcademicBook(string t, string a, double p, string s)
        : BookInfo(t, a, p), bookSubject(s) {}

    void displayAll() {
        showDetails();
        cout << "Subject: " << bookSubject << endl;
    }
};

int main() {
    AcademicBook b1("Maths", "John", 500, "Algebra");

    b1.displayAll();

    cout << "\ndaivik 1024150089" << endl;

    return 0;
}
