/*
CH-230-A
a11 p6.cpp
Bilal Waraich 
bwaraich@jacobs-university.de
*/


#include <iostream>


using namespace std;

class Vector{

    private:
        int size;
        double * vectorComponents;
    
    public:
        //Getter functions for vector
        int getSize();
        double *getComp();

        //Setter functions for vector
        void setSize(int newSize);
        void setComp(double* newComp, int newSize);

        
        Vector();//Default contructor
        Vector(const Vector &);//Copy constructor

        //Parametric constructors
        Vector(int newSize);
        Vector(double* newComponents, int newSize);
        ~Vector();//Destructor

        //Methods
        void print();
        double Computenorm() const;
        double Computescalar(const Vector& other) const;
        Vector sum(const Vector& other) const;
        Vector diff(const Vector& other) const;
        
};