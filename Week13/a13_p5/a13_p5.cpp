/*
CH-230-A
a13 p5.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include<iostream>
using namespace std;
 
class A{
    int x;

    public:
        A(int i) { x = i; }
        void print() { cout << x; }
};
 
class B: virtual public A{
    public:
        B():A(10) {  }
};
 
class C:  virtual public A{
    public:
        C():A(10) {  }
};
 
class D: public B, public C {
    public:
        D() : A(20) {}
};
 
int main(){

    /*
        Error Explanation:
        The error was that there was no constructor in 
        the class D and as such nothing to provide arguments to the
        constructors of its base classes especially A which has
        a parametric constructor.

        To fix this, you just implement a default constructor in D which 
        sends an valid argument to A to set its parametric constuctor.
    */
   
    D d;
    d.print();
    return 0;
}
