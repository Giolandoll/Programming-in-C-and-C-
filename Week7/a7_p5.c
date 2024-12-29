/*
CH-230-A
a7 p5.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#define options 2

//Comparing function that sorts in ascending order.
int asc_comparer(const void* p1, const void* p2){
    const int  a = *(const int *) p1 ;
    const int  b = *(const int *) p2 ;
    return a - b;
}

//Comparing function that sorts in ascending order.
int desc_comparer(const void* p1, const void* p2){
    const int  a = *(const int *) p1 ;
    const int  b = *(const int *) p2 ;
    return b - a;
}


int main(){
    //Initializing an array of function pointers
    int (*funcptr[options])(const void* p1, const void* p2) = 
                                {asc_comparer, desc_comparer};

    //Variable declaration
    int n;
    char choice;
    int * arr;
    scanf("%d", &n);//Input of size of array from keyboard
    
    //Memory allocation for the array
    arr = (int *) malloc(sizeof(int)*n);
    if(arr == NULL){
        printf("Memory allocation failed");//Failure message
        exit(1);
    }

    //Input of the integers into the array
    for(int i= 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Infinite while loop to get more inputs
    while(1){
        scanf(" %c", &choice);//Scanning what order to sort in
        if(choice == 'a'){//Ascending
            //Qsort function with function pointer determining what comparer
            qsort (arr,n,sizeof(int), funcptr[0]);

            for(int i= 0; i<n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");

        }else if(choice == 'd'){//Decending
            //Qsort function with function pointer determining what comparer
            qsort (arr,n,sizeof(int), funcptr[1]);

            for(int i= 0; i<n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n");
        }else if(choice == 'e'){//Ending program
            break;
        }   
    }
    free(arr);
    return 0;
}