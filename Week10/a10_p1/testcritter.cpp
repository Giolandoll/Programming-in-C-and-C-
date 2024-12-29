/*
CH-230-A
a10 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//Variable declaration
	Critter c;

	string name;
	int hunger, age;
	double width;
	
 
	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

	//Input of new values for new members
	cout << "Age: ";
	cin >> age;
	c.setAge(age);

	cout<< "Width: ";
	cin >> width;
	c.setWidth(width);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}