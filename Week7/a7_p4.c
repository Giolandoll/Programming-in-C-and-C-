/*
CH-230-A
a7 p4.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define options 3//Definition of the number of functions available

//Function to turn all characters in the string uppercase
void uppercase(char *string){
    for(int i = 0; *(string + i); i++){
        printf("%c",toupper(*(string+i)));
    }
}

//Function to turn all characters in the string lowercase
void lowercase(char *string){
    for(int i = 0; *(string + i); i++){
        printf("%c",tolower(*(string+i)));
    }
    
}

//Function to invert all the character cases in the string
void invertcase(char *string){
    for(int i = 0; *(string + i); i++){
        if(islower(*(string+i))){
            printf("%c",toupper(*(string+i)));
        }else{
            printf("%c",tolower(*(string+i)));
        }
    }
}

int main(){

    //Definition of an array with the function pointers
    void (*funcptr[options])(char * str) = {uppercase, lowercase, invertcase};
    //Variable Declaration
    char str[256];
    int choice;

    //Input of string from keyboard
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';//Removal of end line character

    //Infinite While loop
    while(1){
        scanf("%d", &choice);
        if(choice == 4){
            break;
        }else{
            funcptr[choice-1](str);//Calling function using its pointer
        }
        printf("\n");
    }
    return 0;
}