/*
CH-230-A
a5 p6.C
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    //Variable declaration
    int n, counter = 0;
    float * array;

    //Input from keyboard the size of array
    scanf("%d", &n);

    //Memory allocation for the float array.
    array = (float *) malloc(sizeof(float) * n);
    if(array ==NULL){
        printf("Memory Allocation Failed\n");//Failure message
        exit(1);
    }

    //For loop to collect the values of the array.
    for(int i = 0; i<n; i++){
        scanf("%f", array+i);
    }

    //For loop to loop through the array.
    for(int i = 0; *(array+i); i++){
        //If statement to count the number of non negatives
        if(*(array + i)<0){
            break;
        }else{
            counter++;
        }
    }
    
    //Output statements
    if(counter <= 1){
        printf("Before the first negative value: %d element\n", counter);
    }else{
        printf("Before the first negative value: %d elements\n", counter);
    }

    //Freeing allocated memory for the array
    free(array);

    return 0;
}