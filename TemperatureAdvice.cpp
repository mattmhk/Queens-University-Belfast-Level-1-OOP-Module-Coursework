#include <iostream>
using namespace std;

int main() {
    double temp;
    cout << "Enter a temperature :" << endl;
    cin >> temp;
    if (temp<10){
        cout << "Wear a coat";
    }
    else if(temp <20){
        cout << "Wear a jacket";
    }
    else{
        cout << "A t-shirt is fine";
    }
}