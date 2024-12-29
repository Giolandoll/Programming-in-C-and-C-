/*
CH-230-A
a3_p7.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <stdio.h>

//Function to print the trapezoid 
void print_form(int n, int m, char c){

    //First for loop manage the height of the trapezoid
    for (int i = 0; i<n; i++){
        /*For loop to manage the respective line lengths.
        Utilizing the variable from the first loop 
        to increase the lengths of each line as you go down.*/
        for(int x = 0; x <m+i; x++){
            printf("%c", c);
        }
        printf("\n");//To skip to a new line after completeing each.

    }
}


int main(){
    //Variable Declaration
    int n, m;
    char c;

    //Input from the keyboard.
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter a number:\n");
    scanf("%d", &m);

    printf("Enter a character/symbol:\n");
    scanf(" %c", &c);

    print_form(n, m, c);//Calling the Print form function.

    return 0;
}