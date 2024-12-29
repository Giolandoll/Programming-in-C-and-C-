/*
CH-230-A
a11 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;


//Getters
int Vector::getSize(){
    return size;
}

double * Vector::getComponents(){
    return components;
}

//Setters
void Vector::setSize(int newSize){
    size = newSize;
}

void Vector::setComponents(double* newComponents, int newSize){
    for (int i = 0; i < size; ++i) {
        components[i] = newComponents[i];
    }
}

// Default constructor
Vector::Vector() : size(0), components(nullptr) {}

// Parametric constructor
Vector::Vector(int newSize) : size(newSize) {
    components = new double[size];
    // Set default values (zeros) for the components
    for (int i = 0; i < size; ++i) {
        components[i] = 0.0;
    }
}

// Constructor with specified components
Vector::Vector(double* newComponents, int newSize) : size(newSize) {
    components = new double[size];
    // Copy components from the provided array
    for (int i = 0; i < size; ++i) {
        components[i] = newComponents[i];
    }
}

// Copy constructor
Vector::Vector(const Vector& other) : size(other.size) {
    components = new double[size];
    for (int i = 0; i < size; ++i) {
        components[i] = other.components[i];
    }
}

// Destructor
Vector::~Vector() {
    delete[] components;
}

//Print method
void Vector::printVector(){
    cout << "{ " ;
    for (int i = 0; i < size; ++i) {
        cout << components[i] << " ";
    }
    cout << "}" << endl;
}

// Mathematical operations
//norm calculation
double Vector::norm() const {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += components[i] * components[i];
    }
    return std::sqrt(sum);
}

//Scalar product calculation
double Vector::scalar(const Vector& other) const {
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += components[i] * other.components[i];
    }
    return result;
}

//Sum calculation
Vector Vector::sum(const Vector& other) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.components[i] = components[i] + other.components[i];
    }
    return result;
}

//Difference calculation
Vector Vector::diff(const Vector& other) const {
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.components[i] = components[i] - other.components[i];
    }
    return result;
}