/*
CH-230-A
a11 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"

using namespace std;


Creature::Creature(): distance(10){
    cout << "Creature created!" << endl;
}    

void Creature::run() const{ 
    cout << "running " << distance << " meters!\n";
}  

Creature::~Creature(){
    cout << "Creature Destroyed\n" << endl;
}



Wizard::Wizard() : distFactor(3){
    cout << "Wizard created!" << endl;
}  

Wizard::~Wizard(){
    cout << "Wizard destroyed\n" << endl;
}

void Wizard::hover() const{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}


Troll::Troll() : force(5){
    cout << "Troll created!" << endl;
}

Troll::~Troll(){
    cout << "Troll destroyed\n" << endl;
}

void Troll::work() const{
    cout << "Work amount is now " << (force * distance) << " Joules" <<endl;
}


Pig::Pig() : time(5){
    cout << "Pig created!" << endl;
}

Pig::~Pig(){
    cout << "Pig Destroyed\n" << endl;
}

void Pig::snitchspeed() const{
    cout << "This creature will snitch at speeds exceeding : " << 
                                (distance/ time) << "km/s" <<endl;
}