/*
CH-230-A
a12 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#ifndef _SQUARE_H
#define _SQUARE_H
#include "Rectangle.h"

class Square : public Rectangle  {
	public:
		Square(const char *n, double a);
		~Square();
		double calcArea() const;
		double calcPerimeter() const;
	private:
		double side;
		
};

#endif
