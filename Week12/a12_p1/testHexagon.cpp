/*
CH-230-A
a12 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
#include "Shapes.h"

using namespace std;


int main(){

    //Instances of hexagon
    Hexagon hex1(9, "Blue");
    Hexagon hex2(15, "Green");
    Hexagon hex3(hex2);
    
    //Output for each instance
    cout << "Hexagon : "<< hex1.getColour() <<endl;
    cout << "Perimeter : " << hex1.perimeter() << endl;
    cout << "Area : " << hex1.area() << "\n" <<endl;
    
    cout << "Hexagon : "<< hex2.getColour() << endl;
    cout << "Perimeter : " << hex2.perimeter() << endl;
    cout << "Area : " << hex2.area() << "\n" <<endl;
    
    cout << "Hexagon : "<< hex3.getColour() << endl;
    cout << "Perimeter : " << hex3.perimeter() << endl;
    cout << "Area : " << hex3.area() << "\n" <<endl;
    return 0;
}