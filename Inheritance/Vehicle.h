#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<string>

class Vehicle{
protected:
    std::string make;
    std::string model;
    int year;
    std::string color;

public:
    Vehicle(std::string mk,std::string mdl, int year, std::string color);
    void printDetails();
};

class Car:public Vehicle{
    int TrunkCapacity;
public:
    Car(std::string mk,std::string mdl, int year, std::string color, int trnkCpct);
    void printDetails();
};


class Ship:public Vehicle{
    int NumberOfAchors;
public:
    Ship(std::string mk,std::string mdl, int year, std::string color, int anchorNo);
    void printDetails();
};

class Airplane:public Vehicle{
    int NumberOfEngines;
public:
    Airplane(std::string mk,std::string mdl, int year, std::string color, int engineNo);
    void printDetails();
};

#endif