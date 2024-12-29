/*
CH-230-A
a4_p10.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <math.h>

//Function to calulcate values and return by reference.
void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb){

    //Calculations by dereferenceing the pointers to access value.
    *prod = a*b;
    *div = a/b;
    *pwr = pow(a, b);//utilizing the pow function from math.h library
    *invb  = 1/b;
}


int main(){
    //Variable declaration.
    float a, b, product, division, power, inverseb;

    //Input of a and b from keyboard.
    printf("Please enter a value for a:\n");
    scanf("%f", &a);
    printf("Please enter a value for b:\n");
    scanf("%f", &b);

    //Calling function and sending parameters.
    proddivpowinv(a,b, &product, &division, &power, &inverseb);

    //Output with 2 decimal places
    printf("Product=%.2f\n", product);
    printf("Division=%.2f\n", division);
    printf("Power a^b=%.2f\n", power);
    printf("Inverse of B=%.2f\n", inverseb);

    
    return 0;
}