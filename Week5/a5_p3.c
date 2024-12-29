/*
CH-230-A
a5 p3.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <string.h>


//Function to count the number of lowercase characters in the gievn string.
int count_lower(char* str){
    int count = 0;

    char lowercase[]= "abcdefghijklmnopqrstuvwxyz";//All lower case character

    for(int i = 0; *(str+i); i++){
        for(int c = 0; *(lowercase+c); c++){
            if (lowercase[c] == *(str+i))
                count++;
        }
    }
    return count;//Returning the number of lowercase characters.
}

int main(){

    char string[50];
    do{
        fgets(string, sizeof(string), stdin);
        //Ends the program if no string is entered.
        if (string[0] == '\n')
            break;

        //Replaces the new line character with an end of line character.
        if(string[strlen(string)-1] == '\n'){
            string[strlen(string)-1] = '\0';
        }
        //Outputs the number of lower case characters in the string entered.
        printf("Number of lower case characters=%d\n", count_lower(string)); 

    }while(1);//While(1) to ensure the loop runs indefinitely


    return 0;
}