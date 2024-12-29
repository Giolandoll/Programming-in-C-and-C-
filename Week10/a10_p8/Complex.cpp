/*
CH-230-A
a10 p8.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <iostream>
#include "Complex.h"

using namespace std;

//Getter for real part of complex number
float Complex::getReal(){
    return real;
}

//Getter for imaginary part of complex number
float Complex::getImaginary(){
    return img;
}

//Setter for real part
void Complex::setReal(float r){
    real = r;
}

//Setter for imaginary part
void Complex::setImaginary(float i){
    img = i;
}

//Print method 
void Complex::print(){
    if (img) {
		cout << noshowpos << real << showpos << img << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}
}

//Conjugation method
void Complex::conjugation(){
    img = img * -1;
}

//Addition method
Complex Complex::add(Complex z) {
    Complex result;
    result.real = real + z.real;
    result.img = img + z.img;
    return result;
}

//Subtraction method
Complex Complex::subtract(Complex z) {
    Complex result;
    result.real = real - z.real;
    result.img = img - z.img;
    return result;

}

//Multiplication method
Complex Complex::multiply(Complex z){

    Complex result;
    result.real = ((real*z.real) - (img*z.img));
    result.img = ((img* z.real) +(real *z.img));
    return result;
}

//Default Constructor
Complex:: Complex(){
    real= img = 0;
}

//Parametric Constructor
Complex:: Complex(float r, float i){
    setReal(r);
    setImaginary(i);
}

//Copy Constructor
Complex::Complex(const Complex& z) {
    real = z.real;
    img = z.img;
}

//Decontructor
Complex::~Complex(){
   
}
