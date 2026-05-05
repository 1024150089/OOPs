#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    const long accountNumber;
    long transactionId;
    string transactionType;
    double balance;

    static long idCounter;

public:
    BankAccount(long acc, double bal) : accountNumber(acc) {
        balance = bal;
        transactionId = 0;
        transactionType = "None";
    }

    long addMoney(long receiver, long sender, double amount) {
        if (accountNumber == receiver) {
            balance += amount;
            transactionType = "Credit";
            transactionId = ++idCounter;
        }
        return transactionId;
    }

    long withdrawMoney(long receiver, long sender, double amount) {
        if (accountNumber == sender && balance >= amount) {
            balance -= amount;
            transactionType = "Debit";
            transactionId = ++idCounter;
        }
        return transactionId;
    }

    void showAccount() const {
        cout << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction ID: " << transactionId << endl;
        cout << "Type: " << transactionType << endl;
    }
};

long BankAccount::idCounter = 2000;

int main() {
    BankAccount b1(101, 5000), b2(102, 3000), b3(103, 7000),
                b4(104, 2000), b5(105, 9000);

    b1.addMoney(101, 102, 1000);
    b2.withdrawMoney(101, 102, 500);

    b1.showAccount();
    b2.showAccount();
    b3.showAccount();
    b4.showAccount();
    b5.showAccount();

    cout << endl;
    cout << "daivik 1024150089" << endl;

    return 0;
}
