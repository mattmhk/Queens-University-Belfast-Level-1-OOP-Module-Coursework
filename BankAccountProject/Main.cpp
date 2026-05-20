#include "BankAccount.h"

int main(){
    BankAccount myAccount("Myat", 500);

    myAccount.display();
    myAccount.deposit(200);
    myAccount.withdraw(100);
    myAccount.withdraw(700);
}