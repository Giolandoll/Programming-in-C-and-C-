/*
CH-230-A
a9 p2.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>


using namespace std;

int main(){
    //Variable Declaration
    int n;
    double x;
    string s;

    //Input from stdin
    cin >> n;
    cin >> x;
    cin.ignore();//Ignoring the newline character after input
    getline(cin, s);//Input string

    //For loop to print n times
    for(int i= 0; i< n; i++){
        cout << s << ": " << x << endl;
    }

    return 0;
}