/*
CH-230-A
a4_p9.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>

//Function to find the product of the smallest and largest ints in array.
int prodminmax(int arr[], int n){
    int min = arr[0], max = arr[0];

    for (int i = 1; i<n; i++){
        if (arr[i]> max )
            max = arr[i];
        if (arr[i]< min)
            min = arr[i];
    }

    return min*max;//Returns product to main function.
}

int main(){

    //Variable declaration
    int n;
    int * arr;


    printf("Enter a number:\n");
    scanf("%d", &n);


    //Dynamic memory allocation for n integers.
    arr = (int *) malloc(sizeof(int) * n);
    //Failure message if memory allocation is unsuccessful
    if (arr == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    //For loop for the input of n integers.
    for(int i = 0; i< n; i++){
        printf("Enter an integer for array:\n");
        scanf("%d", arr+i);
    }

    printf("Product=%d\n", prodminmax(arr, n));//Output of product.

    free(arr);//Free function to deallocate
    return 0;
}
