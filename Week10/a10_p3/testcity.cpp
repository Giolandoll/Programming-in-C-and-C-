/*
CH-230-A
a10 p3
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>
#include "City.h"

using namespace std;

int main(){
    //INSTANCES for the class City
    City bremen, paris, london;

    //Bremen City instance
    bremen.setName("Bremen");
    bremen.setMayor("John Snow");
    bremen.setPopulation(100000);
    bremen.setarea(2190.8);

    //Paris city instance
    paris.setName("Paris");
    paris.setMayor("Tywin Lannister");
    paris.setPopulation(215000);
    paris.setarea(12456.76);

    //London city instance
    london.setName("London");
    london.setMayor("Night King");
    london.setPopulation(90834);
    london.setarea(5500.78);

    //Outputting the information for the different instances
    cout << "City : "<< bremen.getName() << endl;
    cout << "Mayor : " << bremen.getMayor() <<endl;
    cout << "Population : " << bremen.getPopulation() << endl;
    cout << "Area : " << bremen.getArea() << "Km sqaured" << "\n" << endl;

    cout << "City : "<< paris.getName() << endl;
    cout << "Mayor : " << paris.getMayor() <<endl;
    cout << "Population : " << paris.getPopulation() << endl;
    cout << "Area : " << paris.getArea() << "Km sqaured" <<"\n" << endl;

    cout << "City : "<< london.getName() << endl;
    cout << "Mayor : " << london.getMayor() <<endl;
    cout << "Population : " << london.getPopulation() << endl;
    cout << "Area : " << london.getArea() << " Km sqaured" <<"\n" << endl;


    return 0;
}