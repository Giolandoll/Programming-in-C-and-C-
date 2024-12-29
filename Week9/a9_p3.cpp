/*
CH-230-A
a9 p3.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>

using namespace std;

//Function to find the absolute value of a given real number
double absolute(double x){
    if(x >= 0)
        return x;
    else    
        return x*-1;
}

int main(){
    //Variable declaration
    double x;

    //Prompt for and input of a value from keyboard
    cout << "Enter a value: ";
    cin >> x;

    //Outputting result while calling function
    cout << "Absolute value of: " << x << ", is: " << absolute(x)<< endl;

    return 0;
}