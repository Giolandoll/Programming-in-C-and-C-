/*
CH-230-A
a4_p9.c
Giovanni Falconer
gfalconer@jacobs-university.de


Write a function int prodminmax(int arr[], int n) that determines and returns the product of the smallest and largest elements of 
an array of integers.
Then write a program where you first read an integer n and then n integers that are stored in an
array called arr. Test the function above and print on the screen the results from the main()
function. Use dynamic memory allocation and deallocation.
You can safely assume that the input will be valid.
*/

#include <stdio.h>
#include <stdlib.h>


int prodminmax(int arr[], int n){
    int min = arr[0], max = arr[0];

    for (int i = 1; i<n; i++){
        if (arr[i]> max )
            max = arr[i];
        if (arr[i]< min)
            min = arr[i];
    }

    return min*max;
}

int main(){

    int n;
    int * arr;

    printf("Enter a number:\n");
    scanf("%d", &n);


    arr = (int *) malloc(sizeof(int) * n);
    if (arr = NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for(int i = 0; i< n; i++){
        printf("Enter an integer for array:\n");
        
        // scanf("%d", arr+i);
        scanf("%d", arr+i);
        printf("Hello world %d",*(arr+i));
    }

    printf("Product=%d\n", prodminmax(arr, n));
    return 0;
}
