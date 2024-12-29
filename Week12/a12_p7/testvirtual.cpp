/*
CH-230-A
a12 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <ctime>
#include <cstdlib>
using namespace std;

const int num_obj = 25;
int main() {

	Area *list[num_obj];		//(1) Array of Area pointers to store objects
	
	int randomcolor, randomsize, randomshape, randomsize2;

	//Arrays with the choices possible for object creation
	const char * shapes[4] = {"CIRLE", "RING", "RECTANGLE", "SQUARE"};
	const char * colors[4] = {"RED", "BLACK", "VIOLET", "BLUE"};  

	//Getting a random number between 0 and 4
    srand(static_cast<unsigned int>(time(0)));

	for(int i = 0; i <num_obj; i++){
		 // Choosing what object is created
        randomshape = rand() % 4;

        // Choosing the color of said object
        randomcolor = rand() % 4;

        // Choosing the size of said object
        randomsize = rand() % 96 + 5;
        randomsize2 = rand() % 96 + 5;//Second side measurement
		
        //If statement to make instance based on random choice
		if (shapes[randomshape] == "CIRCLE") {
            Circle *object1 = new Circle(colors[randomcolor], randomsize);
            list[i] = object1;
        } else if (shapes[randomshape] == "RING") {
            Ring *object1 = new Ring(colors[randomcolor], randomsize, randomsize2);
            list[i] = object1;
        } else if (shapes[randomshape] == "RECTANGLE") {
            Rectangle *object1 = new Rectangle(colors[randomcolor], randomsize, randomsize2);
            list[i] = object1;
        } else if (shapes[randomshape] == "SQUARE") {
            Square *object1 = new Square(colors[randomcolor], randomsize);
            list[i] = object1;
        }

	}
	
	 for (int i = 0; i < num_obj; i++) {
        (list[i])->getColor();
        // Calling calcPerimeter() and calcarea method on each object
        double perimeter = list[i]->calcPerimeter();
        double area = list[i]->calcArea();
        cout << "\nThe perimeter is "
            << perimeter << " units " << endl;
        cout << "\nThe area is "
            << area << " units " << endl;
		// Deleting the objects to avoid memory leaks
		delete list[i];
    }
	return 0;
	
}

