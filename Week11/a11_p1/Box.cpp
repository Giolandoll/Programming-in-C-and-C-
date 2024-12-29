/*
CH-230-A
a11 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Box.h"

using namespace std;

//Setter definitions
void Box::setHeight(double newHeight){
    height = newHeight;
}

void Box::setWidth(double newWidth){
    width = newWidth;
}

void Box::setDepth(double newDepth){
    depth = newDepth;
}

//Getter definitions
double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}

//Constructor Definitions
Box::Box(){
    depth= width = height = 0.0;
}

Box::Box(double newHeight, double newWidth, double newDepth){

    setHeight(newHeight);
    setWidth(newWidth);
    setDepth(newDepth);
}

//Copy constructor
Box::Box(const Box &z){
    height = z.height;
    width = z.width;
    depth = z.depth;
    
}

//Destructor
Box::~Box(){
    //I destroy instances :)
}


