/*
CH-230-A.
a6 p2.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

//Macro using bitwise operands to check least significant bit
#define leastSignificant(a) ((a) & 1)

int main(){

    //Variable declaration
    char character;
    int result;

    //Input from user
    scanf(" %c", &character);
    result = leastSignificant(character);//Utilizing mmacro

    //Out put of decimal rep and least significant bit.
    printf("The decimal representation is: %d\n", character);
    printf("The least significant bit is: %d\n", result);

    return 0;
}
