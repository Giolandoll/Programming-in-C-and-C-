/*
CH-230-A
a12 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Square.h"


Square::Square(const char *n, double a) : Rectangle(n, a, a) {
    side = a;
}

Square::~Square(){

}


double Square::calcArea() const {
	std::cout << "calcArea of Square...";
	return side * side;
}

//Method for calculating the perimeter of a rectangle
double Square::calcPerimeter() const{
    std::cout << "calcPerimeter of Square...";
    return (4*side);
}
