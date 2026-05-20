#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

class BankAccount {
private:
    std::string name;
    double balance;

public:
    BankAccount(std::string n, double b);
    void display();
    void withdraw(double a);
    void deposit(double a);
};

#endif