#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "Hello Wolrd - Daivik Garg(1024150089)";

    // Q2.

    /*
    int a;
    float b;
    char c;

    cout << "Enter integer: ";
    cin >> a;
    cout << "Enter decimal: ";
    cin >> b;
    cout << "Enter character: ";
    cin >> c;

    cout << "Integer = " << a << endl;
    cout << "Decimal = " << b << endl;
    cout << "Character = " << c << endl;
    */

    // Q3.

    /*
    float x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << x + y << endl;
    cout << "Subtraction = " << x - y << endl;
    cout << "Multiplication = " << x * y << endl;
    cout << "Division = " << x / y << endl;
    */

    //
    // Q4.
    // Formula: F = (9*C/5) + 32

    /*
    float c;
    cout << "Enter temperature in Celsius: ";
    cin >> c;

    float f = (9 * c / 5) + 32;
    cout << "Temperature in Fahrenheit = " << f << endl;
    */

    //
    // Q5.

    /*
    cout << "Hello\nWorld" << endl;
    cout << "Hello\tWorld" << endl;
    cout << "Hello\bWorld" << endl;
    cout << setw(10) << "C++" << endl;
    */

    //
    // Q6.

    /*
    int a = 10;
    cout << "Initial value = " << a << endl;

    a += 5;
    cout << "After += 5, value = " << a << endl;

    a -= 3;
    cout << "After -= 3, value = " << a << endl;
    */

    //
    // Q7.

    /*
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    */

    //
    // Q8.

    /*
    int days;
    cout << "Enter number of late days: ";
    cin >> days;

    if (days <= 5)
        cout << "Fine = " << days * 0.5 << " rupees" << endl;
    else if (days <= 10)
        cout << "Fine = " << days * 1 << " rupees" << endl;
    else if (days <= 30)
        cout << "Fine = " << days * 5 << " rupees" << endl;
    else
        cout << "Membership cancelled" << endl;
    */

    //
    // Q9.

    /*
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter operator (+ - * /): ";
    cin >> op;

    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
    */

    //
    // Q10.

    /*
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    // Using conditional operator
    (n % 2 == 0) ? cout << "Even" : cout << "Odd";
    */

    return 0;
}
