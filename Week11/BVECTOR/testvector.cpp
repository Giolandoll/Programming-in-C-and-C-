/*
CH-230-A
a11 p6.cpp
Bilal Waraich 
bwaraich@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>

using namespace std;

int main() {
    //Test values
    double v1[] = {112.0, 26.0, 5.0, 8.6};
    double v2[] = {123.3, 4.23, 61.3, 9.0};

    //Instances with the different constructors
    Vector vector1; 
    Vector vector2(v1, 4);  
    Vector vector3(vector2);
    Vector vector4(v2, 4);

    //computing the norm of vector 2
    cout << "Norm of vector2: " << vector2.Computenorm() << endl;

    //computing the scalar product of vector2 and vector4
    cout << "Scalar product:  " 
         << vector2.Computescalar(vector4) << endl;
    
    //computing the sum
    cout << "Sum: ";
    vector2.sum(vector4).print();

    //computing the difference
    cout << "Difference: ";
    vector2.diff(vector4).print();

    return 0;
}
