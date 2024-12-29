/*
CH-230-A
a9 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>

using namespace std;

//Function swapping integers
void swapping(int &a, int &b) {  
    int temp = a;//Temporary variable
    a = b;
    b = temp;

} 

//Function swapping floats
void swapping(float &a, float &b) {  
    float temp = a;//Temporary variable
    a = b;
    b = temp;

} 

//Function swapping char pointers
void swapping(const char *&str1, const char *&str2) {
    const char *temp = str1;//Temporary variable
    str1 = str2;
    str2 = temp;
}



int main(void) {

    //Variable declaration
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    //Output before swapping
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    
    //Calling 3 instances of the swapping function
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    //Output after swapping
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}