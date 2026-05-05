#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int ISBN;

    // Default Const
    Book()
    {
        this->title = "";
        this->author = "";
        this->ISBN = 0;
    }

    // Parameterized Const
    Book(string title, string author, int ISBN)
    {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    // Copy Const
    Book(const Book &b)
    {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library
{
public:
    Book arr[10];
    int count;

    Library()
    {
        this->count = 0;
    }

    bool addNewBook(string &title, string &author, int &ISBN);
    bool removeBooks(int &ISBN);
    void displayDetails();
};

bool Library::addNewBook(string &title, string &author, int &ISBN)
{
    if (this->count >= 10)
        return false;

    // Using parameterized constructor
    this->arr[this->count] = Book(title, author, ISBN);

    this->count++;
    return true;
}

bool Library::removeBooks(int &ISBN)
{
    for (int i = 0; i < this->count; i++)
    {
        if (this->arr[i].ISBN == ISBN)
        {
            for (int j = i; j < this->count - 1; j++)
            {
                this->arr[j] = this->arr[j + 1];
            }
            this->count--;
            return true;
        }
    }
    return false;
}

void Library::displayDetails()
{
    for (int i = 0; i < this->count; i++)
    {
        cout << "\nBook " << i + 1 << endl;
        cout << "Title: " << this->arr[i].title << endl;
        cout << "Author: " << this->arr[i].author << endl;
        cout << "ISBN: " << this->arr[i].ISBN << endl;
    }
}

int main()
{
    Library L;

    // Input books
    for (int i = 0; i < 2; i++)
    {
        string t, a;
        int is;

        cout << "Enter details of book " << i + 1 << endl;
        cout << "Title: ";
        cin >> t;
        cout << "Author: ";
        cin >> a;
        cout << "ISBN: ";
        cin >> is;

        L.addNewBook(t, a, is);
    }

    L.displayDetails();

    int del;
    cout << "\nEnter ISBN to delete: ";
    cin >> del;

    L.removeBooks(del);

    cout << "\nAfter Deletion:\n";
    L.displayDetails();

    Book b1("C++", "Bjarne", 101);
    Book b2("DSA", "CLRS", 102);

    Book b3 = b1;
 
    Book *dynBook = new Book("OOP", "Stroustrup", 103);

    cout << "Dynamic Book: " << dynBook->title << endl;

    delete dynBook;

    return 0;
}