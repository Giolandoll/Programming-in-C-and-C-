/*
CH-230-A
a12 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {

private:						// internal implementation is hidden
	int num;					// numerator
	int den;					// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen

	//Overloading as friends of class
	friend std::ostream& operator<<(std::ostream& os, 
									const Fraction& fraction);
	friend std::istream& operator>>(std::istream& is, 
									Fraction& fraction);
	
	//Overloading as members of class
	Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

	
	Fraction operator-(const Fraction& other);
	Fraction operator+(const Fraction& other);
	Fraction& operator=(const Fraction & other);

	bool operator< (const Fraction& other);
	bool operator> (const Fraction& other);
};


#endif /* FRACTION_H_ */
