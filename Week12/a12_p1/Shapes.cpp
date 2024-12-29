/*
CH-230-A
a12 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"
#include <cmath>

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

Shape::Shape(const Shape& z){
    name = z.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape(const CenteredShape & z): Shape(z){
    x = z.x;
    y = z.y;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon & z):CenteredShape(z){
    EdgesNumber = z.EdgesNumber;
}


Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

//HEXAGON

//Getters
int Hexagon::getSide(){
    return side;
}

string Hexagon::getColour(){
    return colour;
}

//Setters
void Hexagon::setSide(double newSide){
    side = newSide;
}

void Hexagon::setColour(const string &newColour){
    colour = newColour;
}


//Constructors
//Parametric
Hexagon::Hexagon(double newSide, const string& newColour) :
                 RegularPolygon("Hexagon", 0, 0, 6) {
    setSide(newSide);
    setColour(newColour);
}

//Copy Constructor
Hexagon::Hexagon(const Hexagon &other):RegularPolygon(other) {
    setSide(other.side);
    setColour(other.colour);
}

//Destructor
Hexagon::~Hexagon(){

}

//Computing perimeter method
double Hexagon::perimeter() {
    return 6 * getSide();
}

//Computing area method
double Hexagon::area() {
    return (3 * sqrt(3) / 2) * pow(getSide(), 2);
}