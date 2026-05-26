#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(string mak,string mdl,int y, string clr){
    make=mak;
    model=mdl;
    year=y;
    color=clr;
}

void Vehicle::printDetails(){
    cout << "Make : " << make;
    cout << "Model : " << model;
    cout << "Year : " << year;
    cout << "Color : " << color;
}


Car::Car(string mak,string mdl, int y, string clr, int trnkcpct):Vehicle(mak,mdl,y,clr){
    TrunkCapacity=trnkcpct;
}

void Car::printDetails(){
    Vehicle::printDetails();
    cout << "Trunk Capacity : " << TrunkCapacity;
}

Ship::Ship(string mak,string mdl, int y, string clr, int anchorNo):Vehicle(mak,mdl,y,clr){
    NumberOfAchors=anchorNo;
}

void Ship::printDetails(){
    Vehicle::printDetails();
    cout << "Number of anchors : " << NumberOfAchors;
}

Airplane::Airplane(string mak,string mdl,int y, string clr, int engineNo):Vehicle(mak,mdl,y,clr){
    NumberOfEngines=engineNo;
}


void Airplane::printDetails(){
    Vehicle::printDetails();
    cout << "Number of engines : " << NumberOfEngines;
}
