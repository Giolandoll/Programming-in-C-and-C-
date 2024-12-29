/*
CH-230-A
a13 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {

    //TRY block
    try {
        //Creating a vector of integers and adding 8 20 times
        vector<int> myVector(20, 8);

        //Access the 21st element using the at() method
        //However this will throw and error
        int value = myVector.at(20);

    
        cout << "Value: " << value << endl;
    } catch (out_of_range& ex) {
        //Catching the out_of_range exception and printing the error.
        cerr << "Caught an exception: " << ex.what() << endl;
    }

    return 0;
}
