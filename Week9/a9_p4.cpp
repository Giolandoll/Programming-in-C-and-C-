/*
CH-230-A
a9 p4.cpp
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <iostream>

using namespace std;

//Function mycount but with integer parameters
int mycount(int value1, int value2){
    return value2 - value1;
}

//Function mycount but with char and string parameters
int mycount(char c, string str){
    int size = str.size(); //Finding the length of the string
    int count = 0;

    //For loop to go through each character in the string
    for (int i = 0; i <size; i++){
        if (str[i] == c)
            count++;
    }
    return count;
}

int main(){

    //Variable declaration
    int value1 , value2;
    string string1;
    char c;

    //Input of value from user
    cout << "Enter Value 1: " ;
    cin >> value1;
    cout << "Enter Value 2: " ;
    cin >> value2;

    cout << "Enter a character: " ;
    cin >> c;

    cout << "Enter a string: " ;
    cin.ignore();//Ignoring the newline character after input
    getline(cin, string1);


    //Output of results from functions on the screen   
    cout << "Result: " << mycount(value2,value1) << endl;
    cout << "Occurences: "<< mycount(c, string1) << endl;
    return 0;
}