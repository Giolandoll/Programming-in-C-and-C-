/*
CH-230-A
a9 p6.cpp
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <iostream>

using namespace std;

//Function myfirst which operates on integer arrays
int myfirst(int arr[], int size){
    int value = -1;
    for (int i = 0; i< size; i++){
        if(arr[i] >0  && (arr[i] % 2 ==0)){
            value = arr[i];
            break;
        }
    }
    return value;
}

//Function myfirst which operates on double arrays
double myfirst(double arr[], int size){
    double value = -1.1;
    for (int i = 0; i< size; i++){
        if((arr[i] < 0) && (arr[i] == static_cast <int>(arr[i]))){
            value = arr[i];
            break;
        }
    }
    return value;
}

//Function myfirst which operates on char arrays
char myfirst(char arr[], int size) {
    char character = '0';
    string consonants = "bcdfghjklmnpqrstvwxyz";//List of consonants

    for (int i = 0; i < size; i++) {
        for (int c = 0; c < 22; c++) {
            if (tolower(arr[i]) == consonants[c]) {
                character = arr[i];
                break; // Break the inner loop when a consonant is found
            }
        }
        if (character != '0') {
            break; // Break the outer loop when a consonant is found
        }
    }
    return character;
}


int main(){

    //TTest arrays
    int array1[8] = {1, 9, 3, 4, 5, 11, 7, 15};
    double array2[8] = {1.0, 2.3, -3.2, -4.0, -5.1, 7, 0.0, -6};
    char array3[8] = {'a', 'e', 'i', 'o', 'u', 'a', 'e','e'};

    //Output of the results
    cout << "Integer array result: " << myfirst(array1, 8) <<endl;
    cout << "Double array result: " << myfirst(array2, 8) <<endl;
    cout << "Char array result: " << myfirst(array3, 8) <<endl;

    return 0;
}
