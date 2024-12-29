/*
CH-230-A
a11 p1.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>

//Box class
class Box{
    private:
        // Attributes
        double height;
        double width;
        double depth;
    
    public:
        //Setters
        void setHeight(double);
        void setWidth(double);
        void setDepth(double);

        //Getters
        double getHeight();
        double getWidth();
        double getDepth();

        //Constructors
        Box();//Default
        Box(double, double, double);//Parametric
        Box(const Box &);//Copy constructor
        ~Box();//Destructor

        
};