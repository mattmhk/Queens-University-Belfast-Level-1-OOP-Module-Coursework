#include <iostream>
#include <vector>
#include "Vehicle.h"

using namespace std;

int main() {
    cout << "Testing direct object calls" << endl;
    cout << endl;

    Car car1("Toyota", "Corolla", 2020, "Red", 450);
    Ship ship1("Yamaha", "Cruiser", 2018, "White", 2);
    Airplane plane1("Boeing", "747", 2015, "Blue", 4);

    car1.printDetails();
    cout << endl;

    ship1.printDetails();
    cout << endl;

    plane1.printDetails();
    cout << endl;


    cout << "Testing inheritance using Vehicle pointers" << endl;
    cout << endl;

    Vehicle* v1 = &car1;
    Vehicle* v2 = &ship1;
    Vehicle* v3 = &plane1;

    v1->printDetails();
    cout << endl;

    v2->printDetails();
    cout << endl;

    v3->printDetails();
    cout << endl;


    cout << "Testing polymorphism using vector of Vehicle pointers" << endl;
    cout << endl;

    vector<Vehicle*> vehicles;

    vehicles.push_back(&car1);
    vehicles.push_back(&ship1);
    vehicles.push_back(&plane1);

    for (Vehicle* vehicle : vehicles) {
        vehicle->printDetails();
        cout << endl;
    }
}