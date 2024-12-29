/*
CH-230-A.
a6 p1.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <stdio.h>

//Macros definition.
#define SWAP(A,B, type){\
        type temp = A;\
        A = B;\
        B= temp;\
        }


int main(){
    //Variable Declaration
    int int1, int2;
    double double1, double2;

    //Input from keyboard
    scanf("%d", &int1);
    scanf("%d", &int2);
    scanf("%lf", &double1);
    scanf("%lf", &double2);

    //Utilizing the macros created above
    SWAP(int1, int2, int);
    SWAP(double1, double2, double);

    //Outputting after the swap
    printf("After swapping:\n");
    printf("%d\n", int1);
    printf("%d\n", int2);
    printf("%.6lf\n", double1);
    printf("%.6lf\n", double2);
    return 0;
}