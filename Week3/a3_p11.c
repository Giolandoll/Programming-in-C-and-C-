/*
CH-230-A
a3_p11.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <string.h>

int main(){


    //Variable declaration.
    char string1[256], string2[256], copy[256],c ;
    char string1_copy[256], string2_copy[256];
    int idx, comparison, position;
    

    //Input from keyboard
    fgets(string1, sizeof(string1), stdin);
    fgets(string2, sizeof(string2), stdin);
    
    //Statements to remove the blank character at the end of entered string.
    if(string1[strlen(string1)-1] == '\n'){
        string1[strlen(string1)-1] = '\0';
    }
    if(string2[strlen(string2)-1] == '\n'){
        string2[strlen(string2)-1] = '\0';
    }

    
    strcpy(string2_copy, string2);
    strcpy(string1_copy, string1);

    scanf(" %c", &c);//Reading char from keyboard

    strcpy(copy, string2);//Copying string 2 to 'copy'
    

    //output 
    printf("length1=%lu\n", strlen(string1));
    printf("length2=%lu\n", strlen(string2));
    printf("concatenation=%s\n", strcat(string1_copy,  string2_copy)); 
    printf("copy=%s\n", copy);


    //Comparison of strings and printing repective messages.
    comparison = strcmp(string1, string2);
    if (comparison < 0) {
        printf("one is smaller than two\n");
    } else if (comparison > 0) {
        printf("one is larger than two\n");
    } else if(comparison == 0){
        printf("one is equal to two\n"); 
    }
    
    //Searching strings for character entered
    position = -1; // Initialize position to -1
    for (idx = 0; string2[idx] != '\0'; ++idx) {

        // Exiting the loop when character is found in string
        if (string2[idx] == c) {
            position = idx;
            break; 
        }
    }
    
    /*If statement to print whether or not the character 
    was found and in what position.*/
    if (position != -1) {
        printf("position=%d\n", position);
    } else {
        printf("The character is not in the string\n");
    }

    return 0;
}