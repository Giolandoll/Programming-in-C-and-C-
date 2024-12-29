/*
CH-230-A
a3_p6.c
Giovanni Falconer
gfalconer@jacobs-university.de


*/


#include <stdio.h>

//Float to pounds function that converts kg to lbs.
float to_pounds(int kg, int g){

    float pounds =  (kg *2.2) + ((float) g/1000 *2.2);

    return pounds;//Returns coversion to main.
}

int main(){
    int kg, g;//Variable Declaration

    //Input from keyboard
    scanf("%d", &kg);
    scanf("%d", &g);

    //Output
    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}