/*
CH-230-A
a11 p6.cpp
Bilal Waraich 
bwaraich@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;


//getter functions for Vectors 
int Vector::getSize(){
    return size;
}

double * Vector::getComp(){
    return vectorComponents;
}

//setter functions for Vectors
void Vector::setSize(int newSize){
    size = newSize;
}

void Vector::setComp(double* newComponents, int newSize){
    for (int i = 0; i < size; ++i) {
        vectorComponents[i] = newComponents[i];
    }
}


//normal calculation for vector
double Vector::Computenorm() const {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += vectorComponents[i] * vectorComponents[i];
    }
    return sqrt(sum);
}

//scalar product calculation
double Vector::Computescalar(const Vector& z) const {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += vectorComponents[i] * z.vectorComponents[i];
    }
    return result;
}

//sum calculation for vector
Vector Vector::sum(const Vector& z) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.vectorComponents[i] = vectorComponents[i] + 
                                     z.vectorComponents[i];
    }
    return result;
}

//difference calculation for vector
Vector Vector::diff(const Vector& z) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.vectorComponents[i] = vectorComponents[i] - 
                                    z.vectorComponents[i];
    }
    return result;
}

//default constructor
Vector::Vector() : size(0), vectorComponents(nullptr) {}

//parametric constructor
Vector::Vector(int newSize) : size(newSize) {
    vectorComponents = new double[size];

    //set default values
    for (int i = 0; i < size; ++i) {
        vectorComponents[i] = 0.0;
    }
}

//constructor with all components
Vector::Vector(double* newComponents, int newSize) : size(newSize) {
    vectorComponents = new double[size];

    //copy components from the provided array
    for (int i = 0; i < size; ++i) {
        vectorComponents[i] = newComponents[i];
    }
}

//copy constructor
Vector::Vector(const Vector& z) : size(z.size) {
    vectorComponents = new double[size];
    for (int i = 0; i < size; ++i) {
        vectorComponents[i] = z.vectorComponents[i];
    }
}

//destructor to clear vector allocated memory
Vector::~Vector() {
    delete[] vectorComponents;
}

//print method
void Vector::print(){
    cout << "{ " ;
    for (int i = 0; i < size; ++i) {
        cout << vectorComponents[i] << " ";
    }
    cout << "}" << endl;
}


