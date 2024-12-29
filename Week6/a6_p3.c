/*
CH-230-A.
a6 p3.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>
//Min and MAX macro that find the smallest and largest respectively
//Utilizing ternary 
#define MIN(a,b,c) ((a) < (b) ? ((a) < (c) ? (a):(c)) : ((b) < (c) ? (b):(c)))
#define MAX(a,b,c) ((a) > (b) ? ((a) > (c) ? (a):(c)) : ((b) > (c) ? (b):(c)))

//MID macro utilizing the other macros above to do operations.
#define MID(a,b,c) (((MIN(a,b,c)) + MAX(a,b,c))/2.0)
 
int main(){

    //Variable declaration
    int avalue, bvalue, cvalue;

    //Input from keyboard
    scanf("%d", &avalue);
    scanf("%d", &bvalue);
    scanf("%d", &cvalue);

    //Output of the midvalue to 6 decimal precision
    printf("The mid-range is: %.6f\n", MID(avalue,bvalue,cvalue));

    return 0;
}
