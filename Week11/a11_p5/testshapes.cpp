/*
CH-230-A
a11 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>
#include "Shapes.h"

using namespace std;


int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);

  //Instance of a Circle class
  Circle d("Circle of life", 0, 0, 12.3);
  d.printName();//Calling the printname function in the base class
  cout<< "Perimeter : " << d.perimeter() << " units."<< endl;
  cout<< "Area : " << d.area() << " units squared.\n" <<endl;

  //Instance of a Rectangle class
  Rectangle e("Empire State", 5.4, 6.1, 400, 26.6);
  e.printName();//Calling the printname function in the base class
  cout<< "Perimeter : " << e.perimeter() << " units."<< endl;
  cout<< "Area : " << e.area() << " units squared.\n" <<endl;

  //Instance of a Square Class
  Square f("Rubix", 5, 10, 60);
  f.printName();//Calling the printname function in the base class
  cout<< "Perimeter : " << f.perimeter() << " units."<< endl;
  cout<< "Area : " << f.area() << " units squared.\n" <<endl;


  r.printName();
  c.printName();

}