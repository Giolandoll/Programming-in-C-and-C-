/*
CH-230-A
a13 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/




#include <iostream>

using namespace std;
//Class declaration
class Complex{

    private:
        float real;
        float img;
    public:

        //Getters
        float getReal();
        float getImaginary();

        //Setters
        void setReal(float);
        void setImaginary(float);

        //Methods
        void print();
        void conjugation();
        
        Complex add(Complex);
        Complex subtract(Complex);
        Complex multiply(Complex);


        //Constuctors
        Complex();
        Complex(float, float);
        Complex(const Complex& other);
        ~Complex(); 

        //Overloading as members of class
        Complex operator+ (const Complex &other);
        Complex operator- (const Complex &other);
        Complex operator* (const Complex &other);
        Complex& operator= (const Complex &other);

        //Overloading as friends of class
        friend std::ostream& operator<<(std::ostream& os, 
                                        const Complex& other);
        friend std::istream& operator>>(std::istream& is, 
                                        Complex& other);
	

};