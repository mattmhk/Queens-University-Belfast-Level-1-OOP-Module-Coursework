#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int year;
    bool isYearValid = false;
    cout << "Enter a year: ";
    cin >> year;
    while(isYearValid == false){
        if(year >=1000 && year <= 9999){
            isYearValid = true;
        } else {
            cout << "Please enter a valid year: ";
            cin >> year;
        }
    }

    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

}