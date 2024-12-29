/*
CH-230-A
a5 p5.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>


//Function to calculate the scalar product of the vectors. 
double scalar_product(double v_vector[], double w_vector[] ){

    double s_product = 0;
    //For loop to carry out the summation.
    for(int i = 0; *(v_vector + i); i++){
        s_product += (*(v_vector + i)) * (*(w_vector + i));
    }

    return s_product;//Returning the scalar product

}


//Function to find the largest value in the vector and its position
void  largest(double vector[], int size){
    double max1 = vector[0];
    int i, position = 0;
    for (i = 0; i<size; i++){
        if(vector[i]> max1){
            max1 = vector[i];
            position = i;
        }
    }

    //Output of the largest and position of the value in array.
    printf("The largest = %lf\n", max1);
    printf("Position of largest = %d\n", position);

}

void  smallest(double vector[], int size){
    double min1 = vector[0];
    int i, position = 0;
    for (i = 0; i<size; i++){
        if(min1 > vector[i]){
            min1 = vector[i];
            position = i;
        }
    }

    //Output of the smallest and position of the value in array.
    printf("The smallest = %lf\n", min1);
    printf("Position of smallest = %d\n", position);

}


int main(){
    
    //Variable Declaration
    int n;
    double *w_vector, *v_vector;
    scanf("%d", &n);

    //Allocation of memory for the vectors lines 69-79
    w_vector = (double *) malloc(sizeof(double) * n);
    if(w_vector ==NULL){
        printf("Memory Allocation failed\n");
        exit(1);
    }

    v_vector = (double *) malloc(sizeof(double) * n);
    if(v_vector ==NULL){
        printf("Memory Allocation failed\n");
        exit(1);
    }

    //Input of the values for the vectors
    for(int i = 0; i<n; i++){
        scanf("%lf", w_vector+i);
    }
    for(int i = 0; i<n; i++){
        scanf("%lf", v_vector+i);
    }

    //Output of the scalar product
    printf("Scalar product=%lf\n", scalar_product(w_vector, v_vector));

    /*Calling other functions to find and output largest and smallest in 
    each vector.*/
    smallest(w_vector, n);
    largest(w_vector, n);
    smallest(v_vector, n);
    largest(v_vector, n);


    //Freeing allocated memory for vectors
    free(v_vector);
    free(w_vector);
    return 0;
}