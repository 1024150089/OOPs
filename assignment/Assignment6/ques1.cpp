##include <iostream>
#include <string>
using namespace std;

class BookData {
public:
    string name;
    string writer;
    int code;
};

class BookManager {
private:
    BookData books[10];
    int totalBooks;

public:
    BookManager() {
        totalBooks = 0;
    }

    bool addBook(string n, string w, int c) {
        if (totalBooks >= 10)
            return false;

        books[totalBooks].name = n;
        books[totalBooks].writer = w;
        books[totalBooks].code = c;
        totalBooks++;

        return true;
    }

    bool deleteBook(int c) {
        for (int i = 0; i < totalBooks; i++) {
            if (books[i].code == c) {
                for (int j = i; j < totalBooks - 1; j++) {
                    books[j] = books[j + 1];
                }
                totalBooks--;
                return true;
            }
        }
        return false;
    }

    void showBooks() {
        if (totalBooks == 0) {
            cout << "No books available\n";
            return;
        }

        for (int i = 0; i < totalBooks; i++) {
            cout << "Book" << i + 1 << endl;
            cout << "Title:" << books[i].name << endl;
            cout << "Author:" << books[i].writer << endl;
            cout << "ISBN:" << books[i].code << endl;
        }
    }
};

int main() {
    BookManager bm;

    int n = 2;  
    for (int i = 0; i < n; i++) {
        string title, author;
        int isbn;

        cout << "Enter details of Book " << i + 1 << endl;
        cout << "Title:";
        cin >> title;
        cout << "Author:";
        cin >> author;
        cout << "ISBN:";
        cin >> isbn;

        bm.addBook(title, author, isbn);
    }

    cout << "Book List" << endl;
    bm.showBooks();

    int delISBN;
    cout << "Enter ISBN to delete:"<<endl;
    cin >> delISBN;

    if (bm.deleteBook(delISBN))
        cout << "Book removed successfully"<<endl;
    else
        cout << "Book not found"<<endl;

    cout << "Updated Book List"<<endl;
    bm.showBooks();

    cout << "daivik 1024150089" << endl;

    return 0;
}
