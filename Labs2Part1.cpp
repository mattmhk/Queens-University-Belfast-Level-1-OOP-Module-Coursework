#include <iostream>
using namespace std;

int main() {
    string name;
    float age,human_age;
    cout << "Please enter the name of the dog: ";
    cin >> name;
    cout << "Please enter the age of the dog: ";
    cin >> age;
    if(age <= 2){
        human_age = age * 10.5;
    } else {
        human_age = 21 + (age - 2) * 4;
    }
    cout << "In human years, the dog is " << human_age << " years old." << endl;
}
