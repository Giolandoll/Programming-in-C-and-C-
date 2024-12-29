/*
CH-230-A
a4_p4.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <string.h>

//Function that counts the number of occurences of a consonant in a string.
int count_consonants(char str[]){
    
    char vowels[] = "AEIOU aeiou1234567890!@#$\\%%^&*()_+{}[].,<>-|:;/";
    int i = strlen(str);

    for (int c = 0; c <strlen(vowels); c++){
        for( int d = 0; d < strlen(str); d++){
            if(vowels[c] == str[d])
                i--;
            if (i ==0)
                return i;//Returns i if equals to zero.
        }
    }
    return i;//Outputs the  number of consonants present
}

int main(){

     //Variable Declarations
    char string[100];

    //Do-While loop gaining input until a empty string is entered.
    do{
        fgets(string, sizeof(string), stdin);
        //Ends the program if no string is entered.
        if (string[0] == '\n')
            break;

        //Replaces the new line character with an end of line character.
        if(string[strlen(string)-1] == '\n'){
            string[strlen(string)-1] = '\0';
        }
        //Outputs the number of consonants in the string entered.
        printf("Number of consonants=%d\n", count_consonants(string)); 

    }while(1);//While(1) to ensure the loop runs indefinitely

    return 0;
}