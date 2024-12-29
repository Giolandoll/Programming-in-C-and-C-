/*
CH-230-A
a4_p12.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <string.h>

//Function to replace the character in a given string.
void replaceAll(char *str, char c, char e){

//for loop using pointer arithemtic to go through array.
    for(int i = 0; *(str +i); i++){
        if (*(str+ i) ==c){
            *(str + i) =e;
        }
    }
}


int main (){

    //Variable delcaration
    char c, e;
    char str[80];
    int comparison;

    //Loop to continue reading strings and replacing characters.
    while (1){
        printf("--------------------------\n");
        printf("Enter string:\n");
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = '\0';//Removal of end line character
    

        //Condition to end the program if sting is equal to "stop"
        comparison = strcmp(str, "stop");
        if(comparison == 0)
            break;
        //Input from keyboard
        printf("Enter character to be replaced:\n");
        scanf(" %c", &c);

        printf("Enter character to replace character:\n");
        scanf(" %c", &e);

        getchar();//To get rid of new line character

        printf("String: %s\n", str);//Output old form of string
        replaceAll(str, c,  e);
        
        printf("Replaced Character: %c\n", c);
        printf("Replacing Character: %c\n", e);
        printf("New string: %s\n", str);//Outputting new line of string

    }

    return 0;
}