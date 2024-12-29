/*
CH-230-A.
a6 p5.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main(){

    //Variable Declaration
    char character; 

    //Input from keyboard
    scanf(" %c", &character);
 
    //Printing decimal value of the character entered
    printf("The decimal representation is: %d\n", character);


    printf("The backwards binary representation is: ");
   //Output using bitwise operator to compare each bit of character to mask
    while (character> 0) {
        printf("%d", (character&1));
        character >>= 1;//Moving to the left.
    }
    printf("\n");
   

    return 0;
}


