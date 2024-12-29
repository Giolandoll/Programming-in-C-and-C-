/*
CH-230-A
a10 p2.cpp
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

//Setter methods for the new members of Critter
void Critter::setAge(int newAge){
	age = newAge;
}

void Critter::setWidth(double newWidth){
	width = newWidth;
}
//Modified print method to fit new values
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "."<< endl;
	cout << "My age is: " << age << " and "<< width << "cm wide." << endl;
}

int Critter::getHunger() {
	return hunger;
}

//Getter methods for new members of Critter
double Critter::getWidth(){
	return width;
}
int Critter::getAge(){
	return age;
}


