/*
CH-230-A
a10 p6.cpp
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
void Critter::setThirst(double newthirst) {
    thirst = newthirst;
}
void Critter::print() {
	cout << "I am "<< name<< ". My hunger level is "<< getHunger()<< "."<<endl;
	cout << "Boredom : " << boredom << endl;
	cout << "Thirst : " << thirst << endl;
	cout << "Height : " << height << "\n" <<endl;
	
	
}

int Critter::getHunger() {
	return convertToInteger(hunger);
}


//Constructors lines 43- 64
//Default constructor 
Critter:: Critter(){
	name = "default_critter";
	convertToPercentage(0);
	boredom = 0;
	height = 5;
	setThirst(0.0);
}

//Constructor with just the name as parameter
Critter:: Critter(string newName){
	name = newName;
	convertToPercentage(0);
	boredom = 0;
	height = 5;
	setThirst(0.0);
}

//Constructor with 4 parameters
Critter::Critter(string newName,int newHunger,
		int newBoredom, double newHeight){
	name = newName;
	convertToPercentage(newHunger);
	boredom = newBoredom;
	height = newHeight;
	setThirst(newHunger);
}

//Constructor with 5 parameters including thirst
Critter::Critter(std::string newName, int newHunger, double newThirst, 
				int newBoredom, double newHeight) {
    name = newName;
   	convertToPercentage(newHunger);
    setThirst(newThirst);
    boredom = newBoredom;
    height = newHeight;
}

//Method to convert any hunger given to a percentage
void Critter::convertToPercentage(int newhunger) {
    // Simple mapping from 0 to 10 to 0.0 to 1.0
    hunger = static_cast<double>(newhunger) / 10.0;
}

//Method to change the hunger from its internal percentage form to an integer
int Critter::convertToInteger(double newHunger) {
    // Reverse mapping from 0.0 to 1.0 to 0 to 10
    return static_cast<int>(newHunger * 10);
}