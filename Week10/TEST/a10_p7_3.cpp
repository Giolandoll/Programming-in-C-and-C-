#include <iostream>
#include <cstring>

using namespace std;

class NaiveString {
private:
    char* str;

public:
    NaiveString(const char*);
    // NaiveString(const NaiveString&);
    ~NaiveString();
    void update(char, char);
    void print();
};

NaiveString::NaiveString(const char* t) {
    cout << "Constructor using char *" << endl;
    str = new char[strlen(t) + 1];
    strcpy(str, t);
}

// NaiveString::NaiveString(const NaiveString& src) {
//     cout << "Copy constructor" << endl;
//     str = new char[strlen(src.str) + 1];
//     strcpy(str, src.str);
// }

NaiveString::~NaiveString() {
    cout << "Destructor" << endl;
    delete[] str;
}

void NaiveString::update(char oldchar, char newchar) {
    for (unsigned int i = 0; i < strlen(str); i++)
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
    // Create a new instance using the NaiveString(const char*) constructor
    NaiveString c("XYZ");
    cout << "New instance created using constructor with char *" << endl;
    c.print();

    cout << "Applying funcByVal() to the new instance" << endl;
    funcByVal(c);

    cout << "Applying funcByRef() to the new instance" << endl;
    funcByRef(c);

    // Destructor will be called automatically when 'c' goes out of scope

    return 0;
}
