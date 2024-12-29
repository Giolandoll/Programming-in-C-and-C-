/*
CH-230-A
a10 p7.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;

/*
	Naive string: the goal is to illustrate how copy constructors 
	should be handled. See also charbuffer.cpp
*/

class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
    ~NaiveString();  // Destructor to release allocated memory
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
	cout << "Creation" << endl;
  	str = new char[strlen(t) + 1];
	strcpy(str, t);
    
}

NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy constructor" << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
}
//Destructor to deallocate memory made for instances
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

//Function working by value
void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

//Function working by reference
void funcByRef(NaiveString& s) {
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv)
{
	//Creation of first instance
	NaiveString a("aBcBdB");
    a.print();

	//Calling functions and printing results
	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();

	cout << "About to call funcByRef()" << endl;
    funcByRef(a);
	a.print();

	//Creation of second instance
	NaiveString b("dBBcdsbbBBBcsddBBcc");
    b.print();

	//Calling functions and printing results
	cout << "About to call funcbyval()" << endl;
	funcByVal(b);
	b.print();

	cout << "About to call funcByRef()" << endl;
    funcByRef(b);
	b.print();

	//Destructor will be called automatically here.
}