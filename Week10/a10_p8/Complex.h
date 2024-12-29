/*
CH-230-A
a10 p8.cpp
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

};