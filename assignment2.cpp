#include <iostream>
using namespace std;
int value = 100;
// Q1 - Structure
struct StudentStruct
{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;
    void addDetails()
    {
        cin >> name >> rollNo >> degree >> hostel >> cgpa;
    }
    void updateDetails()
    {
        cin >> degree;
    }
    void updateCGPA()
    {
        cin >> cgpa;
    }
    void updateHostel()
    {
        cin >> hostel;
    }
    void displayDetails()
    {
        cout << name << " " << rollNo << " " << degree << " "
             << hostel << " " << cgpa << endl;
    }
};
// Q2 & Q3
class Student
{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float cgpa;
    void privateFunction()
    {
        cout << "Private function called\n";
    }

public:
    void addDetails()
    {
        cin >> name >> rollNo >> degree >> hostel >> cgpa;
    }
    void displayDetails()
    {
        cout << name << " " << rollNo << " " << degree << " "
             << hostel << " " << cgpa << endl;
    }
    void callPrivate()
    {
        privateFunction();
    }
};
// Q4
class Rectangle
{
    int width, height;

public:
    void getData()
    {
        cin >> width >> height;
    }

    void calculateArea()
    {
        cout << width * height << endl;
    }
};
// Q5
class Complex
{
    float real, imag;

public:
    void setComplex(float r, float i)
    {
        real = r;
        imag = i;
    }
    void displayComplex()
    {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex addComplex(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
// Q6
class ScopeExample
{
public:
    static int count;
};
int ScopeExample::count = 0;
// Q7
namespace First
{
    int num = 10;
    void display()
    {
        cout << num << endl;
    }
}
namespace Second
{
    int num = 20;
    void display()
    {
        cout << num << endl;
    }
}
int main()
{
    cout << "daivik garg 1024150089" << endl;
    // Q1
    StudentStruct s1;
    s1.addDetails();
    s1.displayDetails();
    // Q2 & Q3
    Student s2;
    s2.addDetails();
    s2.displayDetails();
    s2.callPrivate();
    // Q4
    Rectangle r;
    r.getData();
    r.calculateArea();
    // Q5
    Complex c1, c2, sum;
    c1.setComplex(2, 3);
    c2.setComplex(4, 5);
    sum = c1.addComplex(c2);
    sum.displayComplex();
    // Q6
    int value = 50;
    cout << value << endl;
    cout << ::value << endl;
    ScopeExample::count = 5;
    cout << ScopeExample::count << endl;
    std::cout << "Hello" << endl;
    // Q7
    First::display();
    Second::display();
    return 0;
}
