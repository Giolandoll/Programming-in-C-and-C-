/*
CH-230-A
a10 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

void Critter::setHeight(double newHeight){
	height = newHeight;
}

void Critter::setBoredom(int newBoredom){
	boredom = newBoredom;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "."<< endl;
	cout << "Boredom : " << boredom << endl;
	cout << "Height : " << height << "\n" <<endl;
	
	
}

int Critter::getHunger() {
	return hunger;
}


//Constructors lines 43- 64
//Default constructor 
Critter:: Critter(){
	name = "default_critter";
	hunger = 0;
	boredom = 0;
	height = 5;
}

//Constructor with just the name as parameter
Critter:: Critter(string newName){
	name = newName;
	hunger = 0;
	boredom = 0;
	height = 5;
}

//Constructor with all parameters
Critter::Critter(string newName,int newHunger,
		int newBoredom, double newHeight){
	name = newName;
	hunger = newHunger;
	boredom = newBoredom;
	height = newHeight;
}


