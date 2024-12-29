/*
CH-230-A
a4_p1.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/
#include <math.h>
#include <stdio.h>


int main(){

    //Variable declaration.
    double perimeter, area;
    float x;
    double lower_limit, upper_limit, step;
    
    //Input from keyboard
    scanf("%lf", &lower_limit);
    scanf("%lf", &upper_limit);
    scanf("%lf", &step);

    //For loop to print the table with data for the circles. 
    for(x = lower_limit; x<= upper_limit; x+=step){

        perimeter = M_PI*2 * x;//Utilizing math.h function M_PI
        area = x* x* M_PI;

        printf("%lf %lf %lf\n", x, area , perimeter);
    }

    return 0;
}