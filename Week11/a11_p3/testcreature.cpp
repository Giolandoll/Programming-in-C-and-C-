/*
CH-230-A
a11 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Creature.h"


using namespace std;



//Main function
int main(){ 
    //Creating an instance of creature
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    //Creating an instance of wizard
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    //Creating an instance of troll
    cout <<  "\nCreating a Troll. \n";
    Troll t;
    t.run();
    t.work();

    //Creating an instace of pig
    cout <<  "\nCreating a Pig. \n";
    Pig p;
    p.run();
    p.snitchspeed();

    return 0;
} 