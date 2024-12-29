/*
CH-230-A
a13 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include<iostream>
using namespace std;
 
class A{
    int x;
    public:
        void setX(int i) {x = i;}
        void print() { cout << x; }
};
 
class B:  virtual public A{
    public:
        B() { setX(10); }
};
 
class C:  virtual public A{
    public:
        C() { setX(20); }
};
 
class D: public B, public C {
};
 
int main(){

    /*
        Error explanation:

        There is an error saying that the request for the member 'print'
        is ambiguous. This is being shown as an error as the class D is
        derived from both C and B which are derived from A, and as such
        inherits the print function twice. In this case the compiler
        does not know which instance of class A to use.

        To fix this error we just need to make use of the virtual key-word
        at both B and C which inform the compiler to use just a single instance 
        of the shared instance 'A'.
    */
    D d;
    d.print();
    return 0;
}
