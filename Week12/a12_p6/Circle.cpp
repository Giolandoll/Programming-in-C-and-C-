/*
CH-230-A
a12 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return radius * radius * M_PI;
}
//Method to calculate the perimeter of a circle
double Circle::calcPerimeter() const{
	std::cout << "calcPerimeter of Circle...";
	return 2 * radius *M_PI;
}