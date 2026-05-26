#include "Book.h"
#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<Book> Books;
    Books.push_back(Book("Pride and Prejudice", "Jane Austen", 123324));
    Books.push_back(Book("Burmese Days","George Orwell", 54353454));

    int choice;

    while (true) {
        cout << endl;
        cout << "Library Menu" << endl;
        cout << "1. Display Books" << endl;
        cout << "2. Add Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        while (choice < 1 || choice > 5) {
            cout << "Invalid choice. Enter again: ";
            cin >> choice;
        }

        if (choice == 1) {
            for (int i=0;i<Books.size();i++){
                cout << "Book" << i << " : " << endl;
                Books[i].display();
            }
        }
        else if (choice == 2) {
            cout << "Enter Title :";
            cin >> amount;
            cout << "Enter Author :"
            cin >> ;
            cout 

            machine.insertMoney(amount);
        }
        else if (choice == 3) {
            machine.buyItem();
        }
        else if (choice == 4) {
            machine.returnChange();
        }
        else if (choice == 6) {
            cout << "Exiting program..." << endl;
            break;
        }
    }


}