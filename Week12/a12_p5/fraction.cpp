/*
CH-230-A
a12 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "fraction.h"

//Default constructor
Fraction::Fraction(){
	num = 1;
	den = 1;
}

//Parametric constructor
Fraction::Fraction(int n, int d){
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

//GCD method
int Fraction::gcd(int a, int b){
	int tmp_gcd = 1;
	//While loop to find the gcd by continuous division
    while (b != 0) {
       	tmp_gcd= b;
        b = a % b;
        a = tmp_gcd;
    }
	return a;
}

//LCM method
int Fraction::lcm(int a, int b){
	return a * b / gcd(a, b);

}


//Overloading the << operator
std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    os << fraction.num << "/" << fraction.den;
    return os;
}

std::istream& operator>>(std::istream& is, Fraction& fraction) {
    is >> fraction.num >> fraction.den;
    // Check if the denominator is not zero
    if (fraction.den == 0) {
		//Error message to the error stream
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
		//Do while loop to continue until an appropriate value for den is given
        do{
			std::cout << "Enter the fraction (numerator denominator): ";
			is >> fraction.num >> fraction.den;
		}while(fraction.den == 0);
    }
	//Returning the input stream to allow for chaining function
    return is;
}

//Overloading the * operator to multiply fraction
Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(num * other.num, den * other.den);
}

//Overload the / operator to divide fractions
Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(num * other.den, den * other.num);
}

//Overloaded + operator to add fractions
Fraction Fraction::operator+(const Fraction& other){
	return Fraction(num * (lcm(den,other.den)/den) + other.num *
	(lcm(den,other.den)/other.den))/lcm(den,other.den);
}

//Overloaded - operator to subtract fractions
Fraction Fraction::operator-(const Fraction& other){
	return Fraction(num * (lcm(den,other.den)/den) - other.num *
	(lcm(den,other.den)/other.den))/lcm(den,other.den);
}

//Overlaoded = operator to assign fractions
Fraction& Fraction::operator=(const Fraction& other){
	this-> num = other.num;
	this -> den = other.den;

	return *this;//Returning current instance
}

//Overloaded < operator to compare fractions
bool Fraction::operator< (const Fraction& other){
	//Comparing on numerator if denominators are equal
	if(den == other.den){
		return (num < other.num);
	}else{
		/*Otherwise finding the LCM of the denominators and 
		comparing on the modified numerators*/
		int lowestcommon = lcm(den, other.den);
		int a = num;
		int b = other.num;

		a = (lowestcommon / den)  *a;
		b = (lowestcommon/ other.den) *b;

		return (a < b);
	}
}

//Overloaded > operator to compare fractions
bool Fraction::operator> (const Fraction& other){
	//Comparing on numerator if denominators are equal
	if(den == other.den){
		return (num > other.num);
	}else{

		/*Otherwise finding the LCM of the denominators and 
		comparing on the modified numerators*/
		int lowestcommon = lcm(den, other.den);
		int a = num;
		int b = other.num;

		a = (lowestcommon / den)  *a;
		b = (lowestcommon/ other.den) *b;

		return (a > b);
	}
}