/*
CH-230-A
a5 p9.C
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>

//Function reading the values entered into matrix
void reading_matrix(int ***matr1, int x, int y, int z){
    //Nested for loops to handle each layer of the matrix
    for(int i = 0; i<x; i++){
        for(int c = 0; c< y; c++){
            for(int k = 0; k<z; k++){
                scanf("%d", &matr1[i][c][k]);
            }
        }
    }
}

//Function to print the values at each level parallel to XOY axis;
void print_sections(int ***matr1, int x, int y, int z){
    
    //For loop to control the depth(level) printing
    for(int k = 0; k<z; k++){
        printf("Section %d:\n",k+1 );

        //Nested for loops inside to get each element at each level/depth.
        for(int i = 0; i< x; i++){
            for(int c = 0; c<y; c++){
                printf("%d ", matr1[i][c][k]);
            }
            printf("\n");
        }
    }
}


int main(){

    //Variable Declaration
    int x, y, z; 
    int ***matrix;

    //Input of values for x, y and z parameters of the matrix
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    //Lines 54-76 Memory allocation for each axis of the matrix
    matrix = (int ***) malloc(sizeof(int **) * x);
    if (matrix == NULL){
        printf("Memory Allocation Failed.\n");
        exit(1);
    }

    for(int i = 0; i<x; i++){
        matrix[i] = (int **) malloc(sizeof(int *) * y);
        if (matrix[i] == NULL){
            printf("Memory Allocation Failed.\n");
            exit(1);
        }
    }

    for(int i = 0; i<x; i++){
       for(int c = 0; c<y; c++){
        matrix[i][c] = (int *) malloc(sizeof(int) * z);
        if (matrix[i][c] == NULL){
            printf("Memory Allocation Failed.\n");
            exit(1);
        }
       }
    }

    //Calling function to read values to the matrix
    reading_matrix(matrix, x, y, z);

    //Calling function to print each layer of the matrix
    print_sections(matrix, x, y, z);

    //Nested-for loop to free the allocated memory for each layer of the matrix
    for(int i = 0; i<x; i++){
        for(int c = 0; c< y; c++){
            free(matrix[i][c]);
        }
    }
    free(matrix);//Final deallocation

    return 0;
}