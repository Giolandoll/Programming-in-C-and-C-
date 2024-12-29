/*
CH-230-A
a11 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    //Test values
    double values1[] = {1.0, 2.0, 3.0};
    double values2[] = {2.3, 4.3, 6.3};

    //Instances with the different constructors
    Vector vector1; 
    Vector vector2(values1, 3);  
    Vector vector3(vector2);
    Vector vector4(values2, 3);

    // Compute and print the norm of vector2
    cout << "Norm of vector2: " << vector2.norm() << endl;

    // Compute and print scalar product
    cout << "Scalar product of vector2 and vector4: " 
         << vector2.scalar(vector4) << endl;
    
    //Compute and print the sum 
    cout << "Sum of vector2 and vector4: ";
    vector2.sum(vector4).printVector();

    //Compute and print the difference
    cout << "Difference of vector2 and vector4: ";
    vector2.diff(vector4).printVector();

    return 0;
}
