#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 1; i <= number; i++) {
        cout << "Hello, World!" << endl;
    }
    return 0;
}