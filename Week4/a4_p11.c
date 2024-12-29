/*
CH-230-A
a4_p11.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//Function to count the occurences of a character in a string. 
 int count_insensitive(char *str, char c){
    int count = 0;

    char * temp;//Creation of a pointer to act as substitute for string.

    temp = strdup(str);//Allocating memory for temp while copying str to it.
     if (temp == NULL){
        printf("Memory allocation failed.\n");//Failure message
        exit(1);
    }

    //For loop to convert all the letters in the string lower case
    for (int i = 0; temp[i]; i++) {
        temp[i] = tolower(temp[i]); // Converting temp to lowercase
    }

    //Loop to count the occurences of the char in the string.
    for (int i = 0; temp[i]; i++) {
        if (temp[i] == tolower(c)) {
            count++;
        }
    }
    free(temp);//Freeing allocated memory for temp.

    return count;//Returning the amount of occurences.
 }

int main(){

    //Variable declaration
    int n = 50, length, count;
    char character[5]= {'b', 'H', '8','u', '$'};

    //Array pointer declaration
    char* str1;
    char* str2;

    str1 = (char *) malloc(sizeof(char) * n);//Memory allocation

    if (str1 == NULL){
        printf("Memory allocation failed.\n");//Allocation failure text
        exit(1);
    }

    //Input of string from keyboard.
    printf("Enter a string:\n");
    fgets(str1, n, stdin);
    //Removal of new line character from end of string.
     if(str1[strlen(str1)-1] == '\n'){
        str1[strlen(str1)-1] = '\0';
    }

    
    length = strlen(str1);

    str2 = (char *) malloc(sizeof(char) * length);//Memory allocation
    if (str2 == NULL){
        printf("Memory allocation failed.\n");//Allocation failure text
        exit(1);
    }

    strcpy(str2, str1);//Copying string 1 to string 2.

    free(str1);//Freeing allocated memory for string 1


 

    for(int i = 0; i<5; i++){

        count = count_insensitive(str2, character[i]);//Calling function

        printf("The character '%c' occurs %d times.\n", character[i], count);
    }
    free(str2);//Freeing allocated memory for string 2

    return 0;
}