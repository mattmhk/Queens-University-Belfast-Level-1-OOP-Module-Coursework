#include <iostream>
using namespace std;

int main() {
    string light;
    cout << "Enter a traffic light color (red, yellow, green):" << endl;
    cin >> light;
    switch (tolower(light[0]))
    {
        case 'r':
            cout << "Stop";
            break;
        case 'y':
            cout << "Get ready";
            break;
        case 'g':
            cout << "Go";
            break;
        default:
            cout << "Invalid traffic light color";
    }
}
