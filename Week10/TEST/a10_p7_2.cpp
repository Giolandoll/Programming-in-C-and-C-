#include <iostream>
#include <cstring>

using namespace std;

class NaiveString {
private:
    char* str;

public:
    NaiveString(const char*);
    NaiveString(const NaiveString&);
    ~NaiveString(); // Destructor to release allocated memory
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char* t) {
    cout << "Constructor using char *" << endl;
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}

NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy constructor" << endl;
    str = new char[strlen(src.str) + 1];
    strcpy(str, src.str);
}

NaiveString::~NaiveString() {
    cout << "Destructor" << endl;
    delete[] str;
}

void NaiveString::update(char oldchar, char newchar) {
    unsigned int i;
    for (i = 0; i < strlen(str); i++)
        if (str[i] == oldchar)
            str[i] = newchar;
}

void NaiveString::print() {
    cout << str << endl;
}

void funcByVal(NaiveString s) {
    cout << "funcByVal() being called" << endl;
    s.update('B', 'C');
    s.print();
}

void funcByRef(NaiveString& s) {
    cout << "funcByRef() being called" << endl;
    s.update('B', 'C');
    s.print();
}

int main(int argc, char** argv) {

    NaiveString a("aBcBdB");
    a.print();

    cout << "About to call funcByVal()" << endl;
    funcByVal(a);

    cout << "Back in main() after funcByVal()" << endl;
    a.print();

    cout << "About to call funcByRef()" << endl;
    funcByRef(a);

    cout << "Back in main() after funcByRef()" << endl;
    a.print();

    // Destructor will be called automatically when 'a' goes out of scope

    return 0;
}
