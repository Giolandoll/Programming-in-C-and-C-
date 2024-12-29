
/*
CH-230-A
a12 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return (Circle::calcArea()-
		(innerradius * innerradius * M_PI));
}

//Method to calculate the perimeter of a Ring
double Ring::calcPerimeter() const{
    std::cout << "calcPerimeter of Rectangle...";
    return (2*innerradius*M_PI);
}
