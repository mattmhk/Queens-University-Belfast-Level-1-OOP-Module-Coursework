#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

class VendingMachine {
private:
    vector<string> itemNames;
    vector<double> itemPrices;
    vector<int> stocks;

    double moneyInserted;

public:
    VendingMachine() {
        moneyInserted = 0.00;

        loadStockFromFile();

        if (itemNames.size() == 0) {
            itemNames.push_back("Coke");
            itemPrices.push_back(2.00);
            stocks.push_back(5);

            itemNames.push_back("Water");
            itemPrices.push_back(1.50);
            stocks.push_back(8);

            itemNames.push_back("Chips");
            itemPrices.push_back(1.75);
            stocks.push_back(6);

            saveStockToFile();
        }
    }

    void displayItems() {
        cout << fixed << setprecision(2);

        cout << endl;
        cout << "Available Items" << endl;

        for (int i = 0; i < itemNames.size(); i++) {
            cout << i + 1 << ". " << itemNames[i]
                 << " | Price: $" << itemPrices[i]
                 << " | Stock: " << stocks[i] << endl;
        }

        cout << "Money inserted: $" << moneyInserted << endl;
    }

    void insertMoney(double amount) {
        if (amount > 0) {
            moneyInserted += amount;

            cout << fixed << setprecision(2);
            cout << "Money inserted successfully." << endl;
            cout << "Current balance: $" << moneyInserted << endl;
        }
        else {
            cout << "Amount must be greater than 0." << endl;
        }
    }

    void buyItem() {
        int itemChoice;

        displayItems();

        cout << endl;
        cout << "Enter item number to buy: ";
        cin >> itemChoice;

        while (itemChoice < 1 || itemChoice > itemNames.size()) {
            cout << "Invalid item number. Enter again: ";
            cin >> itemChoice;
        }

        int index = itemChoice - 1;

        if (stocks[index] <= 0) {
            cout << "Sorry, " << itemNames[index] << " is out of stock." << endl;
        }
        else if (moneyInserted < itemPrices[index]) {
            cout << fixed << setprecision(2);
            cout << "Not enough money inserted." << endl;
            cout << "You need $" << itemPrices[index] - moneyInserted << " more." << endl;
        }
        else {
            stocks[index]--;
            moneyInserted -= itemPrices[index];

            cout << fixed << setprecision(2);
            cout << "Item bought successfully." << endl;
            cout << "Enjoy your " << itemNames[index] << "!" << endl;
            cout << "Remaining balance: $" << moneyInserted << endl;

            saveStockToFile();
        }
    }

    void returnChange() {
        cout << fixed << setprecision(2);

        if (moneyInserted > 0) {
            cout << "Returning change: $" << moneyInserted << endl;
            moneyInserted = 0.00;
        }
        else {
            cout << "No change to return." << endl;
        }
    }

    void adminMode() {
        int password;

        cout << "Enter admin password: ";
        cin >> password;

        if (password != 1234) {
            cout << "Wrong password." << endl;
            return;
        }

        int adminChoice;

        while (true) {
            cout << endl;
            cout << "Admin Menu" << endl;
            cout << "1. View Items" << endl;
            cout << "2. Restock Item" << endl;
            cout << "3. Change Item Price" << endl;
            cout << "4. Exit Admin Mode" << endl;

            cout << "Enter choice: ";
            cin >> adminChoice;

            while (adminChoice < 1 || adminChoice > 4) {
                cout << "Invalid choice. Enter again: ";
                cin >> adminChoice;
            }

            if (adminChoice == 1) {
                displayItems();
            }
            else if (adminChoice == 2) {
                int itemChoice;
                int amount;

                displayItems();

                cout << "Enter item number to restock: ";
                cin >> itemChoice;

                while (itemChoice < 1 || itemChoice > itemNames.size()) {
                    cout << "Invalid item number. Enter again: ";
                    cin >> itemChoice;
                }

                cout << "Enter amount to add: ";
                cin >> amount;

                if (amount > 0) {
                    stocks[itemChoice - 1] += amount;
                    cout << "Stock updated successfully." << endl;
                    saveStockToFile();
                }
                else {
                    cout << "Amount must be greater than 0." << endl;
                }
            }
            else if (adminChoice == 3) {
                int itemChoice;
                double newPrice;

                displayItems();

                cout << "Enter item number to change price: ";
                cin >> itemChoice;

                while (itemChoice < 1 || itemChoice > itemNames.size()) {
                    cout << "Invalid item number. Enter again: ";
                    cin >> itemChoice;
                }

                cout << "Enter new price: $";
                cin >> newPrice;

                if (newPrice > 0) {
                    itemPrices[itemChoice - 1] = newPrice;
                    cout << "Price updated successfully." << endl;
                    saveStockToFile();
                }
                else {
                    cout << "Price must be greater than 0." << endl;
                }
            }
            else if (adminChoice == 4) {
                cout << "Exiting admin mode..." << endl;
                break;
            }
        }
    }

    void saveStockToFile() {
        ofstream file("stock.txt");

        for (int i = 0; i < itemNames.size(); i++) {
            file << itemNames[i] << " "
                 << itemPrices[i] << " "
                 << stocks[i] << endl;
        }

        file.close();
    }

    void loadStockFromFile() {
        ifstream file("stock.txt");

        string name;
        double price;
        int stock;

        while (file >> name >> price >> stock) {
            itemNames.push_back(name);
            itemPrices.push_back(price);
            stocks.push_back(stock);
        }

        file.close();
    }
};

int main() {
    VendingMachine machine;

    int choice;
    double amount;

    while (true) {
        cout << endl;
        cout << "Vending Machine Menu" << endl;
        cout << "1. Display Items" << endl;
        cout << "2. Insert Money" << endl;
        cout << "3. Buy Item" << endl;
        cout << "4. Return Change" << endl;
        cout << "5. Admin Mode" << endl;
        cout << "6. Exit" << endl;

        cout << "Enter choice: ";
        cin >> choice;

        while (choice < 1 || choice > 6) {
            cout << "Invalid choice. Enter again: ";
            cin >> choice;
        }

        if (choice == 1) {
            machine.displayItems();
        }
        else if (choice == 2) {
            cout << "Enter amount: $";
            cin >> amount;

            machine.insertMoney(amount);
        }
        else if (choice == 3) {
            machine.buyItem();
        }
        else if (choice == 4) {
            machine.returnChange();
        }
        else if (choice == 5) {
            machine.adminMode();
        }
        else if (choice == 6) {
            machine.returnChange();
            cout << "Exiting program..." << endl;
            break;
        }
    }

    return 0;
}