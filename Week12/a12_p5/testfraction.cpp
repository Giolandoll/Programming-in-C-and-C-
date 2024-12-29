/*
CH-230-A
a12 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "fraction.h"

using namespace std;

int main(void){

	//Declaring variables
	Fraction a, b, quotient, product, sum, difference;

	//Prompt for first fraction
	cout << "Enter the first fraction (numerator denominator): ";
    cin >> a;//Using overloaded operators to read a fraction

	//Prompt for second fraction
	cout << "Enter the second fraction (numerator denominator): ";
    cin >> b;//Using overloaded operators to read b fraction

	//Using overloaded + , - ,/, * and = operators on fraction
	product = (a * b);
	quotient = (a / b);
	sum = a + b;
	difference = a - b;

	//Outputting fractions
	cout << "Product : " << product << endl;
	cout << "Quotient : " << quotient << endl;
	cout << "Difference : " << difference << endl;
	cout << "Sum : " << sum << endl;

	//Outputting the larger or smaller or the two fractions
	if(a > b)
		cout<< "Larger fraction is: " << a << endl;
	else if(a < b)
		cout<< "Larger fraction is: " << b << endl;

	return 0;
	
}
