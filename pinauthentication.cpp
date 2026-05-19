#include <iostream>
using namespace std;

int main() {
    int pin=0;
    int tries=0;
    cout << "Bank of England" << endl;
    while (tries < 3) {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin == 1234) {
            cout << "PIN accepted, you now have access." << endl;
            break;
        } else {
            cout << "Incorrect PIN" << endl;
            tries++;
        }
    }
    if (tries == 3) {
        cout << "Too many failed attempts. Access denied." << endl;
    }
}
