/*
CH-230-A
a5 p2.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

const int division = 5;

//Function to divide all the elements of the array by 5
void divby5(float arr[], int size){

    for(int i = 0; i <size; i++){
        *(arr + i) = *(arr +i)/division;
    }
}

int main(){

    float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    
    //Output of array before change.
    printf("Before:\n");
    for(int i = 0; i <6; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    divby5(arr, 6);//Calling function and giving parameter.

    //Output of array after change
    printf("After:\n");
    for(int i = 0; i <6; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}