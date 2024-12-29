/*
CH-230-A
a9 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main(){
    //Variable declaration
    string countryname;

    //Output to tell user to enter country
    cout << "Enter name of home country: ";
    cin >> countryname;//Reading the name of the country

    //Outputing the country entered
    cout << "The name of your country is: " << countryname << endl;

    return 0;
}