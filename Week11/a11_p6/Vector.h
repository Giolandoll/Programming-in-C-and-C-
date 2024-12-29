/*
CH-230-A
a11 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <iostream>


using namespace std;

class Vector{

    private:
        int size;
        double * components;
    
    public:
        //Getter
        int getSize();
        double *getComponents();

        //Setter
        void setSize(int newSize);
        void setComponents(double* newComponents, int newSize);

        //Constructors
        Vector();
        Vector(const Vector &);
        Vector(int newSize);
        Vector(double* newComponents, int newSize);
        ~Vector();

        //Methods

        void printVector();
        double norm() const;
        double scalar(const Vector& other) const;
        Vector sum(const Vector& other) const;
        Vector diff(const Vector& other) const;
        
};