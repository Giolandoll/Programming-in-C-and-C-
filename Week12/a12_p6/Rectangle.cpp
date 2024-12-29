/*
CH-230-A
a12 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return length*width;
}

//Method for calculating the perimeter of a rectangle
double Rectangle::calcPerimeter() const{
    std::cout << "calcPerimeter of Rectangle...";
    return ((length +width)*2);
}
