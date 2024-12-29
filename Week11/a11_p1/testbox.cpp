/*
CH-230-A
a11 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Box.h"



using namespace std;

int main(){

    //Variable declarations
    int n; 
    double height =0, width = 0, depth = 0;
    //Input from keyboard
    cout << "Enter the integer for n: ";
    cin >> n;

    //Dynamic Allocation of memory
    Box * boxes = new Box[2*n];


    //For loop to get the respective attributes for each box
    for(int i = 0; i < n; i++){
        cout << "Height: ";
        cin >> height;
        cout << "Width: ";
        cin >> width;
        cout << "Depth: ";
        cin >> depth;
        cout << "\n" <<endl;

        boxes[i] = Box(height, width, depth);
    }


    // Create copies using the copy constructor
    for (int i = 0; i < n; i++) {
        boxes[i + n] = Box(boxes[i]);
    }

    // Loop across all boxes, calculate and print on the the volume of each box
    for (int i = 0; i < 2 * n; i++) {
        double volume = boxes[i].getHeight() * boxes[i].getWidth() * 
                                               boxes[i].getDepth();
        cout << "Volume of Box " << i + 1 << ": " << volume << endl;
    }

    //Deallocating array.
    delete[] boxes;
    return 0;
}