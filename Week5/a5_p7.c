/*
CH-230-A
a5 p7.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //Variable delcaration
    char str1[100], str2[100];
    char * str_cat;

    //Fgets to read the first string from keyboard
    fgets(str1, sizeof(str1), stdin );
    str1[strlen(str1)-1] = '\0';//Removing end of line character

    //Fgets to read the second string from keyboard
    fgets(str2 ,sizeof(str2), stdin );
    str2[strlen(str2)-1] = '\0';//Removing end of line character

    //Allocating memory for the concatenated string with exact size
    str_cat = (char *) malloc(sizeof(char) * (int)(strlen(str1) +strlen(str2)));
    if(str_cat ==NULL){
        printf("Memory Allocation Failed\n");//Failure message for malloc
        exit(1);
    }

    strcpy(str_cat, str1);//Copying first string to new dynamic string
    strcat(str_cat, str2);//Concatenated second string onto new dynamic string

    printf("Result of concatenation: %s\n", str_cat);//Output

    free(str_cat);//Freeing allocated memory

    return 0;
}