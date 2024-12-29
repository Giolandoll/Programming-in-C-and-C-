/*
CH-230-A
a4_p6.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <stdio.h>
#include <stdlib.h>

//Function to find the largest and second largest number in the array.
void two_greatest_values(int array[], int num){
    int max1= 0, max2=0;
    int temp;

    //Bubble sort algoritm to sort the array for smallest to largest.
    for(int i = 0; i<num;i++){
        for(int j = 0; j <num-i-1; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }



    //Since array is sorted we can just take the last two elements.
    max1 = array[num-1];
    max2 = array[num-2];

    printf("The greatest value=%d and the second greatest= %d\n", max1, max2);
}

int main(){

    //Variable declaration.
    int n; 
    int * ptr; 

    //Input from my keyboard
    scanf("%d", &n);
    
    //Memory allocation
    ptr = (int *) malloc(sizeof(int) * n);
  
   //Failure message for memory allocation.
    if (ptr == NULL){
        printf("Memory Allocation fails\n");
        exit(1);
    }

    for(int i = 0; i<n; i++){
        scanf("%d", ptr+i);
    }
   
    two_greatest_values(ptr, n);//Calling function.

    free(ptr);//Freeing allocated memory space.

    return 0;
}