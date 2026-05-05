#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    const long accNo;
    long txnId;
    string type;
    double bal;

    static long nextId;

public:
    Account(long a, double b) : accNo(a) {
        this->bal = b;
        this->txnId = 0;
        this->type = "None";
    }

    long depositAmount(const long to, const long from, const double amt) {
        if (this->accNo == to) {
            this->bal += amt;
            this->type = "Credit";
            this->txnId = ++nextId;
        }
        return this->txnId;
    }

    long creditAmount(const long to, const long from, const double amt) {
        if (this->accNo == from && this->bal >= amt) {
            this->bal -= amt;
            this->type = "Debit";
            this->txnId = ++nextId;
        }
        return this->txnId;
    }

    void displayDetails() const {
        cout << "\nAcc No: " << this->accNo;
        cout << "\nBal: " << this->bal;
        cout << "\nTxn Id: " << this->txnId;
        cout << "\nType: " << this->type << endl;
    }
};

long Account::nextId = 1000;

int main() {
    Account a1(101, 5000), a2(102, 3000), a3(103, 7000),
            a4(104, 2000), a5(105, 9000);

    a1.depositAmount(101, 102, 1000);
    a2.creditAmount(101, 102, 500);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}