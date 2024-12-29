/*
CH-230-A
a3_p8.c
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include <stdio.h>

//Function to calculate the sum of values in array.
float sum( float values[], int n){
    int total = 0;

    for (int i = 0; i <n; i++){
        total += values[i];
    }
    return total;// Returns total to main.
}

//Function to calculate the average of the values in the array.
float average( float sum, int n){
    float average = sum /n;
    return average;// Returns average to main.
}

int main(){

    //Variable declaration
    float values[10], total;
    int counter = 0;

    /*Do while loop to accept input until array is full or 
    until the value -99.0 is detected.*/
    do{
       printf("Enter a value (Enter -99.0 to exit):\n");
       scanf("%f", &values[counter] );
       counter++;
    } while ((values[counter-1]!= -99.0) && (counter <=9));

    //If statement to adjust the count if -99.0 is detected.
    if(values[counter-1] == -99.0)
        counter--;

    //Condition to check if there is no value in array. Hence outputting 0.
    if (counter == 0){
        printf("Sum = 0\nAverage = 0");
        return 0;
    }
    total = sum(values, counter);//Calling of sum function
    
    //Output of the values required.
    printf("Sum: %f\n", total);
    printf("Average: %f\n", average(total, counter));

    return 0;
}