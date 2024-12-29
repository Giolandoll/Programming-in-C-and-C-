/*
CH-230-A
a10 p6.cpp
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

	// string name;
	// int hunger; 
	// int boredom;

	
	//Creation of instances of the class with the three different constructors

	//Default constructor.
	Critter c1;
	cout << "You have created:" << endl;
	c1.print();

	//Constructor with 1 parameter
	Critter c2("Bob");
	cout << "You have created:" << endl;
	c2.print();

	//Constructor with all parameters. 
	//This instance is created using 4  parameters
	Critter c3("Job", 2, 5, 15.2);
	cout << "You have created:" << endl;
	c3.print();

	//This instance is created without using height parameter
	Critter c4("Lob", 2, 5);
	cout << "You have created:" << endl;
	c4.print();

	//This instance is created with all parameters.
	Critter c5("Dob", 2, 5.2, 12, 13.5);
	cout << "You have created:" << endl;
	c5.print();


    return 0;
}