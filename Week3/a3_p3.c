/*
CH-230-A
a3_p3.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/


float convert (int cm){

    float km;//Variable declaration

    km = cm / 100000.00;//Computation

    return km;//Returning new value to main function
}

#include <stdio.h>

int main(){

    //Variable Declaration
    int value;
    float kilometer;

    scanf("%d", &value);
    kilometer = convert(value);//Value returned from convert function.
    
    printf("Result of conversion: %f\n", kilometer);
    return 0;
}
