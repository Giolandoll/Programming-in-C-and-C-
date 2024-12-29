/*
CH-230-A
a10 p7.cpp
Bilal Waraich
bwaraich@jacobs-university.de

*/


#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
    ~NaiveString();  // destuctor
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
	cout << "Creation" << endl;
  	str = new char[strlen(t) + 1];
	strcpy(str, t);
    
}
//copy constructor
NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy constructor" << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
}
//destructor definition
NaiveString::~NaiveString() {
    cout << "Destructor" << endl;
    delete[] str;
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

//print function
void NaiveString::print() {
	cout << str << "\n" << endl;
}

//by value
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

//by reference
void funcByRef(NaiveString& s) {
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
	//creation of first instance
	NaiveString a("aBcBdB");
    a.print();

	//calling functions and printing results
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	cout << "About to call funcByRef()" << endl;
    funcByRef(a);
	a.print();

	//creating new instance
	NaiveString instance2("AbracadaBBBBbrbaaaaaaa");
    instance2.print();

	//Functions for second instance
	cout << "About to call funcbyval()" << endl;
	funcByVal(instance2);
	instance2.print();

	cout << "About to call funcByRef()" << endl;
    funcByRef(instance2);
	instance2.print();

	//Destructor runs automatically
}