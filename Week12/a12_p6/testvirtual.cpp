/*
CH-230-A
a12 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

 
const int num_obj = 7;
int main() {
	Area *list[num_obj];		//(1) Array of Area pointers to store objects
	int index = 0;				//(2) Index for iterating through the array
	double sum_area = 0.0;		//(3) Variable to store the sum of areas
	double sum_perimeter = 0.0;	//Variable to store the sum of perimeters

	cout << "Creating Ring: ";
	//(4)Creating a Ring with color "BLUE", outer radius 5, and inner radius 2
	Ring blue_ring("BLUE", 5, 2);	

	cout << "Creating Circle: ";
	//(4)Creating a Circle object with color "YELLOW" and radius 7
	Circle yellow_circle("YELLOW", 7);	

	cout << "Creating Rectangle: ";
	//(4)Creating a Rectangle object with color "GREEN", width 5, and height 6
	Rectangle green_rectangle("GREEN",5,6);	

	cout << "Creating Circle: ";
	//(4)Creating another Circle object with color "RED" and radius 8
	Circle red_circle("RED", 8);	

	cout << "Creating Rectangle: ";
	//(4)Creating Rectangle object with color "BLACK", width 10, and height 20
	Rectangle black_rectangle("BLACK", 10, 20);

	cout << "Creating Ring: ";
	//(4)Creating Ring with color"VIOLET", outer radius 100, and inner radius 5
	Ring violet_ring("VIOLET", 100, 5);	

	cout << "Creating Square: ";
	//(4)Creating Square with color"Black", with side of length 16
	Square black_square("Black", 12);

	//(5)Storing the address of respective objects in the array (lines 51-58)
	list[0] = &blue_ring;				
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &black_square;

	//(7)Loop through the array of objects
	while (index < num_obj) {				
		(list[index])->getColor();		
		//(8) Calling calcArea() method on each object and adding the results	
		double area = list[index++]->calcArea();
		sum_area += area;
	}

	for(int i = 0; i<num_obj; i++){
		(list[i])->getColor();	
		//Calling calcPerimeter() method on each object and adding the results
		double perimeter = list[i]->calcPerimeter();
		sum_perimeter += perimeter;
	}

	//(9) Displaying the total area  and perimeter of all objects
	cout << "\nThe total area is "
		<< sum_area << " units " << endl;	

	cout << "\nThe total perimeter is "
		<< sum_perimeter << " units " << endl;	

	return 0;


	//ASCII DIAGRAM

	/*
						+-------------+
						|    Area     |
						+------+------+
						/				\
		+------+------+					+------+------+
		|  Circle     |					| Rectangle   |
		+------+------+					+-------------+
				|								|
		+------+------+					+------+------+
		|   Ring      |					|   Square    |	
		+------+------+					+------+------+
			
		

	*/
}

