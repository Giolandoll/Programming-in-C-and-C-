/*
CH-230-A
a3_p2.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

int main(){


    //Variable declaration
    char ch;
    int n;

    //Prompts for data to be entered from keyboard
    printf("Enter a char value: \n");
    scanf(" %c", &ch);

    printf("Enter a integer value:\n");
    scanf("%d", &n);
    

    //For-loop to print the line of chars up to the penultimate letter.
    for (int i = 0; i<n; i++)    
        printf("%c, ", ch-i);
    printf("%c ", ch-n);//To print the last character(avoiding the last comma)
    return 0;
}