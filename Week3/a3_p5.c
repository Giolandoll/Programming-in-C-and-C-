/*
CH-230-A
a3_p5.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>



int main(){

    //Variable Declaration
    char c;
    int n, i;
    double sum, mean;

    double temperature[100];//Declaration of array

    printf("Enter a character:\n");
    scanf(" %c", &c);

    printf("Enter a value:\n");
    scanf("%d", &n);

    //Inputting values into Array
    for ( i = 0; i<n; i++){
        printf("Enter a temperature:\n");
        scanf("%lf", &temperature[i]);
    }

    //Switch statement to decide what the user requires
    switch (c) {
    case 's':
        /* Sum of temperatures*/
        for(i = 0; i<n; i++){
            sum += temperature[i];
        }
        printf("Sum = %lf\n", sum);
        break;
    case 'p':
        /*List of temperatures*/
        for(i = 0; i<n; i++){
            printf("Temperature %d is: %lf\n",i+1, temperature[i]);
        }
        break;
    case 't':
        /*List of temperatures in Farenheit*/
        for(i = 0; i<n; i++){
            printf("Temperature %d is: %lf\n",i+1, (temperature[i]*9/5) +32);
        }
        break;
    default:
        /*Aritmetic Mean of the temperatures*/
        for(i = 0; i<n; i++){
            sum += temperature[i];
        }
        mean = sum / n;
        printf("Mean = %lf\n", mean);
        break;
    }

    return 0;
}