/*
CH-230-A
a11 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"


using namespace std;

//Methods and Constuctors for the class Shape
Shape::Shape(const string& n) : name(n) {}

void Shape::printName() const{
	cout << name << endl;
}

Shape::Shape(){
    name = "Default Shape-name";
}

std::string Shape::getter(){
    return name;
}

void Shape::setName(std::string &newName){
    name = newName;
}

Shape::Shape(const Shape& z){
    name = z.name;
}

//Methods and Constuctors for the class CenteredShape
CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n){
	x = nx;
	y = ny;
}
//Default Constructor
CenteredShape::CenteredShape():Shape(){
    x= 0;
    y = 0;
}

//Copy constructor
CenteredShape::CenteredShape(const CenteredShape & z): Shape(z){
    x = z.x;
    y = z.y;
}

double CenteredShape::getX(){
    return x;
}

double CenteredShape::getY(){
    return y;
}

void CenteredShape::setX(double newX){
    x = newX;
}

void CenteredShape::setY(double newY){
    x = newY;
}


//Methods and Constuctors for the class RegularPolygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl):
	CenteredShape(n,nx,ny){
	EdgesNumber = nl;
}

//Default Constructor
RegularPolygon::RegularPolygon():CenteredShape(){
    EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon & z):CenteredShape(z){
    EdgesNumber = z.EdgesNumber;
}

int RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}

void RegularPolygon::setEdges(int newEdgeNumber){
    EdgesNumber = newEdgeNumber;
}


//Methods and Constuctors for the class Circle
Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny){
	Radius = r;
}

Circle::Circle():CenteredShape(){
    Radius = 0;
}

Circle::Circle(const Circle &z): CenteredShape(z){
    Radius = z.Radius;
}

double Circle::getRadius(){
    return Radius;
}

void Circle::setRadius(double newRadius){
    Radius = newRadius;
}

double Circle::area(){
    return 3.14*Radius*Radius;
}

double Circle::perimeter(){
    return 2*3.14*Radius;
}

//Methods and Constuctors for the class Rectangle
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
            double nheight) : RegularPolygon(n, nx, ny,4){
    
    width = nwidth;
    height = nheight;

}

Rectangle::Rectangle():RegularPolygon(){
    width = height = 0;
}

Rectangle::Rectangle(const Rectangle & z) :RegularPolygon(z){
    width = z.width;
    height = z.height;
}

double Rectangle::getWidth(){
    return width;
}

double Rectangle::getHeight(){
    return height;
}

void Rectangle::setWidth(double newWidth){
    width = newWidth;
}

void Rectangle::setHeight(double newHeight){
    height = newHeight;
}

double Rectangle::area(){
    return width * height;
}

double Rectangle::perimeter(){
    return 2*(width + height);
}


//Methods and Constuctors for the class Square
Square::Square(const string& n, double nx, double ny, double nside):
              Rectangle(n, nx, ny, nside, nside){
    side = nside;
}

Square::Square():Rectangle(){
    side = 0;
}

Square::Square(const Square &z) : Rectangle(z){
    side = z.side;
}

double Square::getSide(){
    return side;
}

void Square::setSide(double newSide){
    side = newSide;
}

double Square::area(){
    return side*side;
}

double Square::perimeter(){
    return 4*side;
}