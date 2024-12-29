/*
CH-230-A.
a6 p4.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

//Conditional Inclusion
#define INTERMEDIATE

int main(){

    //Variable Declaration
    int n, scalar = 0; 
    int *v_vector, *w_vector;

    //Reading the size of vectors
    scanf("%d", &n);

    //Dynamic Allocation of memory for vectors
    w_vector = (int *) malloc(sizeof(int) * n);
    if(w_vector ==NULL){
        printf("Memory Allocation failed\n");//Failure message
        exit(1);
    }

    v_vector = (int *) malloc(sizeof(int) * n);
    if(v_vector ==NULL){
        printf("Memory Allocation failed\n");//Failure message
        exit(1);
    }

    //For loops to read values into the 2 vectors
    for(int i = 0; i<n; i++){
        scanf("%d", w_vector+i);
    }
    for(int i = 0; i<n; i++){
        scanf("%d", v_vector+i);
    }

    //Conditional inclusion if statment.
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for(int i = 0; i<n; i++){
            scalar += (v_vector[i] * w_vector[i]);
            printf("%d\n",v_vector[i] * w_vector[i]);
        }
    #else //Executes if INTERMEDIATE is not defined.
        for(int i = 0; i<n; i++)
           scalar+= (v_vector[i] * w_vector[i]);
    #endif

    //Output of the scalar product
    printf("The scalar product is: %d\n", scalar);

    //Deallocation of the memory for both vectors
    free(v_vector);
    free(w_vector);

    return 0;
}