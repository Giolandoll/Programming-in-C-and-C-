/*
CH-230-A
a3_p1.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

int main(){

    //Variable declaration
    float x;
    int n;
    
    //Input from keyboard for the float
    scanf("%f", &x);

    //while loop to validate the integer entered.

    scanf("%d", &n);
    while( n<= 0){
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    //For loop to output the float to screen.
    for (int i =0; i<n; i++)
        printf("%f\n",x);

    return 0;
}