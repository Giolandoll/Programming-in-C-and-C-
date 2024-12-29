/*
CH-230-A
a5 p4.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>

const int division = 5;

//Function to divide all the elements of the array by 5
void divby5(float arr[], int size){

    for(int i = 0; i <size; i++){
        *(arr + i) = *(arr +i)/division;
    }
}

int main(){

    int size;
    float * array;

    //Input of the size of array
    printf("Please enter a number:\n");
    scanf("%d", &size);

    //Memory allocation
    array = (float *) malloc(sizeof(float) * size);
    if(array == NULL){
        printf("Memory allocation failed.");//Allocation failure message
        exit(1);
    }

    //For loop to enter all values into array.
    for(int i = 0; i < size; i++){
        printf("Enter a value:\n");
        scanf("%f", array+i);
    }
    
    //Output of array before change.
    printf("Before:\n");
    for(int i = 0; i <size; i++){
        printf("%.3f ", *(array+i));
    }
    printf("\n");

    divby5(array, 6);//Calling function and giving parameter.

    //Output of array after change
    printf("After:\n");
    for(int i = 0; i <size; i++){
        printf("%.3f ", *(array+i));
    }
    printf("\n");

    free(array);//Deallocating memory of the array
    return 0;
}