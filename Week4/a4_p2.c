/*
CH-230-A
a4_p2.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <string.h>

int main(){
    //Variable Declarations
    char string[50];

    //Input from keyboard
    fgets(string, sizeof(string), stdin);

    //Replaces the new line character with an end of line character.
     if(string[strlen(string)-1] == '\n'){
        string[strlen(string)-1] = '\0';
    }

    //For loop to print letters of the string.
    for (int i= 0; i <strlen(string); i++){

        //Prints a space for every odd position.
        if (i % 2 == 0)
            printf("%c\n", string[i]);

        if (i %2 ==1)        
            printf(" %c\n", string[i]);
    }

    return 0;
}