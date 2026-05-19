#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string accountHolderName, int accountNumber) {
        this->accountHolderName = accountHolderName;
        this->accountNumber = accountNumber;
        this->balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit Amount: " << amount << endl;
        } else {
            cout << "Invalid Deposit" << endl;
        }
    }

    void withdrawal(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Withdrawal Amount: " << amount << endl;
        } else {
            cout << "Invalid Withdrawal" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayInfo() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    string getAccountHolderName() {
        return accountHolderName;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    void setAccountHolderName(string accountHolderName) {
        this->accountHolderName = accountHolderName;
    }

    void setAccountNumber(int accountNumber) {
        this->accountNumber = accountNumber;
    }
};

int main() {
    string name;
    int num;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Account Number: ";
    cin >> num;

    BankAccount b1(name, num);

    b1.deposit(100);
    b1.withdrawal(40);
    b1.displayInfo();

    return 0;
}