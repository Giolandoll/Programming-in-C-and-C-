/*
CH-230-A
a13 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>
#include <fstream>
#include <iostream>
#include "Complex.h"

using namespace std;

int main(){

    //Variable and Instance declaration
    Complex product;
    Complex difference;
    Complex sum;
    Complex complex1, complex2;

    // Reading from a file
    ifstream inFile("in1.txt");
    if (inFile.is_open()) {
        inFile >> complex1;
        cout << "Read from file: " << complex1 << endl;
        inFile.close();
    } else {
        cerr << "Error opening input file" << endl;
    }

    //Reading from a second file
    ifstream inFile2("in2.txt");
    if (inFile2.is_open()) {
        inFile2 >> complex2;
        cout << "Read from file: " << complex2 << std::endl;
        inFile2.close();
    } else {
        cerr << "Error opening input file" << std::endl;
    }

    //Calculating the values of each using overloaded operators
    product = (complex1 * complex2);
    difference = (complex1 - complex2);
    sum = (complex1 + complex2);

    //Outputting on the screen
    cout << "Product : " << product << endl;
    cout << "Difference : " << difference <<endl;
    cout << "Sum : " << sum << endl;

    //Outputting the values into the output file
    ofstream outFile("output.txt");
    if (outFile.is_open()) {
        
        outFile << "Product : " << product << endl;
        outFile << "Difference : " << difference << endl;
        outFile << "Sum : " << sum << endl;

        outFile.close();
    } else {
        std::cerr << "Error opening output file" << std::endl;
    }

    return 0;
}