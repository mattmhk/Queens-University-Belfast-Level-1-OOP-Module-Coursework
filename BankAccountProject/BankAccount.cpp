#include "BankAccount.h"

using namespace std;

BankAccount::BankAccount(string n, double b){
    name=n;
    balance=b;
}

void BankAccount::deposit(double amount){
    if (amount >0){
        balance += amount;
        cout << "Deposited " << amount << endl;
        cout << "New Balance : " << balance << endl;
    }
    else{
        cout << " Invalid deposit amount.";
    }
}

void BankAccount::withdraw(double amount){
    if(amount > 0 && amount <= balance){
        balance -= amount;
        cout << "Withdrew " << amount << endl;
        cout << "New Balance : " << balance << endl;
    }
    else{
        cout << "Insufficient funds or invalid input" << endl;
    }
}

void BankAccount::display(){
    cout << "Account Holder Name: " << name << endl;
    cout << "Current Balance: " << balance << endl;
}