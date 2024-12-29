/*
CH-230-A
a13 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <iostream>
#include <stdexcept>

using namespace  std;

//Ownexception class derived from the base class exception
class OwnException : public exception {
public:
    //Overiding what() function
    const char* what() const noexcept override {
        return "OwnException\n";//Return message
    }
};

//Function to throw the different exceptions
void throwException(int value) {
    switch (value) {
        case 1:
            throw 'a';
        case 2:
            throw 12;
        case 3:
            throw true;
        default:
            throw OwnException();
    }
}

int main() {

    //Throwing and Catching the char exception
    try {
        throwException(1);
    } catch (char c) {
        cerr << "Caught in main: " << c << endl;
    }

    //Throwing and Catching the int exception
    try {
        throwException(2);
    } catch (int i) {
        cerr << "Caught in main: " << i << endl;
    }

    //Throwing and Catching the bool exception
    try {
        throwException(3);
    } catch (bool b) {
        cerr << "Caught in main: " << boolalpha << b << endl;
    }

    //Throwing and Catching the class exception
    try {
        throwException(4);
    } catch (const OwnException& other) {
        cerr << "Caught in main: " << other.what();
    }

    return 0;
}
