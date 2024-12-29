/*
CH-230-A
a10 p3
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "City.h"

using namespace std;

// Setter methods definition
void City::setName(const string &newName){
    name = newName;
}

void City::setMayor(const string &newMayor){
    mayor = newMayor;
}

void City::setPopulation(int newPopulation){
    population = newPopulation;
}

void City::setarea(double newArea){
    area = newArea;
}

// Getter methods definition
string City::getName(){
    return name;
}

int City::getPopulation(){
    return population;
}

string City::getMayor(){
    return mayor;
}

double City::getArea(){
    return area;
}