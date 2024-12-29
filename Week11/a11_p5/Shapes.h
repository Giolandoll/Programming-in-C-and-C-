/*
CH-230-A
a11 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include <string>

using namespace std;

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  

		//Getter
        std::string getter();

		//Setter
		void setName(std::string &newName);
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		// usual three constructors
		CenteredShape(const std::string&, double, double); 
		CenteredShape();
		CenteredShape(const CenteredShape&);

		void move(double, double);	// moves the shape, i.e. it modifies it center
        
		//Getter
		double getX();
        double getY();

		//Setter
		void setX(double newX);
		void setY(double newY);
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape { //Inherits from CenteredShape 
	private: 
		int EdgesNumber;//Number of edges
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);

		//Getter
        int getEdgesNumber();
        
		//Setter
		void setEdges(int newEdgeNumber);
        
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape { //Inherits from CenteredShape
	private:
		double Radius;//Radius of circle
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);

		//Getter
        double getRadius();

		//Setter
		void setRadius(double newRadius);
		
		//Methods
		double perimeter();
		double area();
};

//Rectangle is a regular polygon with a width and height but not equal
class Rectangle: public RegularPolygon{ //inherits from Regular Polygon
    private:
		//Attributes of a Rectangle
        double width;
        double height;
    public:

		//Constructors
        Rectangle(const string& n, double nx, double ny, double nwidth,
            double nheight);
		Rectangle();
		Rectangle(const Rectangle&);

		//Getter
		double getWidth();
		double getHeight();

		//Setter
		void setWidth(double newWidth);
		void setHeight(double newHeight);

		//Methods
		double perimeter();
		double area();
};

//Square is a rectangle with width and height being equal
class Square: public Rectangle{ //Inherits from Rectangle
    private:
		double side;//Single attribute of square
    public:
        Square(const string& n, double nx, double ny, double nside);
		Square();
		Square(const Square &);

		//Getter
		double getSide();

		//Setter
		void setSide(double newSide);

		//Methods
		double perimeter();
		double area();
};
    
#endif