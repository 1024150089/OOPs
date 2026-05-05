#include <iostream>
using namespace std;

// Abstract Base Class
class Student
{
public:
    string name;

    virtual void getData() = 0;
    virtual void display() = 0;
};

// Derived Class: Engineering
class Engineering : public Student
{
    string branch;

public:
    void getData()
    {
        cout << "Enter Engineering Student Name: ";
        cin >> name;
        cout << "Enter Branch: ";
        cin >> branch;
    }

    void display()
    {
        cout << "Engineering Student -> Name: " << name 
             << ", Branch: " << branch << endl;
    }
};

// Derived Class: Medicine
class Medicine : public Student
{
    string specialization;

public:
    void getData()
    {
        cout << "Enter Medicine Student Name: ";
        cin >> name;
        cout << "Enter Specialization: ";
        cin >> specialization;
    }

    void display()
    {
        cout << "Medicine Student -> Name: " << name 
             << ", Specialization: " << specialization << endl;
    }
};

// Derived Class: Science
class Science : public Student
{
    string subject;

public:
    void getData()
    {
        cout << "Enter Science Student Name: ";
        cin >> name;
        cout << "Enter Subject: ";
        cin >> subject;
    }

    void display()
    {
        cout << "Science Student -> Name: " << name 
             << ", Subject: " << subject << endl;
    }
};

int main()
{
    Student* s[3];   // Array of base class pointers

    Engineering e;
    Medicine m;
    Science sc;

    // Assign objects
    s[0] = &e;
    s[1] = &m;
    s[2] = &sc;

    // Input data
    for(int i = 0; i < 3; i++)
    {
        s[i]->getData();
    }

  

    // Display data
    for(int i = 0; i < 3; i++)
    {
        s[i]->display();
    }

    return 0;
}