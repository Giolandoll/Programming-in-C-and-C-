// Updated Fraction class header (fraction.h)
#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>

class Fraction {

private:
    int num;
    int den;

    int gcd(int a, int b);
    int lcm(int a, int b);

public:
    Fraction();
    Fraction(int, int = 1);
    
    friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
    friend std::istream& operator>>(std::istream& is, Fraction& fraction);
    
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;
};

#endif /* FRACTION_H_ */

// Updated Fraction class implementation (fraction.cpp)
#include "fraction.h"

Fraction::Fraction() : num(1), den(1) {}

Fraction::Fraction(int n, int d) {
    int tmp_gcd = gcd(n, d);
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int Fraction::lcm(int a, int b) {
    return a * b / gcd(a, b);
}

std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
    os << fraction.num << "/" << fraction.den;
    return os;
}

std::istream& operator>>(std::istream& is, Fraction& fraction) {
    is >> fraction.num >> fraction.den;
    // Check if the denominator is not zero
    if (fraction.den == 0) {
        std::cerr << "Error: Denominator cannot be zero." << std::endl;
        is.setstate(std::ios::failbit);
    }
    return is;
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(num * other.num, den * other.den);
}

Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(num * other.den, den * other.num);
}

// Updated main program
#include <iostream>
#include "fraction.h"

int main(void) {
    Fraction a, b, product, quotient;

    // Input two fractions
    std::cout << "Enter the first fraction (numerator denominator): ";
    std::cin >> a;

    std::cout << "Enter the second fraction (numerator denominator): ";
    std::cin >> b;

    // Compute product and quotient
    product = a * b;
    quotient = a / b;

    // Output results
    std::cout << "Product: " << product << std::endl;
    std::cout << "Quotient: " << quotient << std::endl;

    return 0;
}
