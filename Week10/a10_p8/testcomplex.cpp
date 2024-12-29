/*
CH-230-A
a10 p8.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <iostream>
#include "Complex.h"

using namespace std;

int main(){

    //Variable and Instance declaration
    float reala, imgb, realc, imgd;
    Complex product;
    Complex difference;
    Complex sum;

    //Prompts for the input of the real and imaginary parts
    cout << "Please enter the real part of the first complex number: ";
    cin >> reala;
    cout << "Please enter the imaginary part of the first complex number: ";
    cin >> imgb;
    cout << "\n";
    cout << "Please enter the real part of the second complex number: ";
    cin >> realc;
    cout << "Please enter the imaginary part of the second complex number: ";
    cin >> imgd;

    cout << "\n";

    //First instance
    Complex first(reala, imgb);
    cout<< "First complex: ";
    first.print();

    //Second instance 
    Complex second(realc, imgd);
    cout<< "Second complex: ";
    second.print();

    cout << "\n";

    //Conjugation of the first complex number
    first.conjugation();
    cout<< "Conjugation: ";
    first.print();
    
    cout << "\n";
    
    //Addition
    sum = first.add(second);
    cout << "Addition result: ";
    sum.print();

    cout << "\n";

    //Difference
    difference = second.subtract(first);
    cout << "Subtraction result: ";
    difference.print();

    cout << "\n";
    
    //Multiplication
    product = first.multiply(second);
    cout << "Multiplication result: ";
    product.print();

    return 0;
}