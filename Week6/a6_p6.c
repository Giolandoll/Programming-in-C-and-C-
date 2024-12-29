/*
CH-230-A.
a6 p6.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

int main(){

    //Variable declaration
    unsigned char character; 

    //Input of char from keyboard
    scanf(" %c", &character);
    //Output
    printf("The decimal representation is: %u\n", character);

    printf("The binary representation is: ");
    //Output of binary using bitwise operations and masks
    for (int i = 7; i >= 0; i--){
        printf("%c", (character & (1 << i) ? '1' : '0'));
    }
    printf("\n");

    return 0;
}