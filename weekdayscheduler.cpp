#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a day :" << endl;
    cin >> day;
    switch(day){
        case 1:
            cout << "Go to gym";
            break;
        case 2:
            cout << "Go to school";
            break;
        case 3:
            cout << "Go to work";
            break;
        case 4:
            cout << "Go to supermarket";
            break;
        case 5:
            cout << "Go to friend's house";
            break;
        case 6:
            cout << "Stay at home";
            break;
        case 7:
            cout << "Go to library";
            break;
    }
    return 0;
}