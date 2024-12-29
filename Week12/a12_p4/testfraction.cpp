/*
CH-230-A
a12 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"

using namespace std;

int main(void){

	//Declaring variables
	Fraction a, b, quotient, product;

	//Prompt for first fraction
	cout << "Enter the first fraction (numerator denominator): ";
    cin >> a;//Using overloaded operators to read a fraction

	//Prompt for second fraction
	cout << "Enter the second fraction (numerator denominator): ";
    cin >> b;//Using overloaded operators to read b fraction

	//Using overloaded / and * operators on fraction
	product = a * b;
	quotient = a/b;

	//Outputting fractions
	cout << "Product : " << product << endl;
	cout << "Quotient : " << quotient << endl;

	return 0;
	
}
