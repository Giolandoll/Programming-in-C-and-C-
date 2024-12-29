/*
CH-230-A
a5 p8.C
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include <stdio.h>
#include <stdlib.h>

//Function to accept input into the 2D array
//Loops through array to allocate space for an array at each pointer
void reading_matrix(int **mat1, int n, int m){
    for(int i = 0; i< n; i++){
        mat1[i] = (int*) malloc(sizeof(int)* m);//Memory allocation
        if(mat1[i] == NULL){
            printf("Memory allocation failed.");
            exit(1);
        }
    }
    //For loop to accept information into the array
    for(int i = 0; i< n; i++){
        for(int c = 0; c< m; c++){
            scanf("%d", &mat1[i][c]);
        }
    }
}

//Function to print the elements of the array passed to it
void printing_matrix(int **mat1, int n, int m){
   
    for(int i = 0; i< n; i++){
        for(int c = 0; c< m; c++){
            printf("%d ",  mat1[i][c]);
        }
        printf("\n");
    }
}

//Function to multiply matrices and store its value into another matrix
void mult_matrix(int **mat1, int **mat2, int **mat3, int n, int m,int p){
    for(int i = 0; i< n; i++){
        mat3[i] = (int*) malloc(sizeof(int)* p);//Memory allocation
        if(mat1[i] == NULL){
            printf("Memory allocation failed.");
            exit(1);
        }
    }

    //Nested for loops to conduct the matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            (mat3)[i][j] = 0;
            for (int k = 0; k < m; k++) {
                (mat3)[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

}

int main(){

    //Variable Declaration
    int n, m, p;
    int **matrix1, **matrix2, **matrix3;

    //Input of the row and column sizes of the matrices
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    //Lines 76 - 92 Memory allocation for each matrix
    matrix1 = (int **) malloc(sizeof(int *) * n);
    if(matrix1 == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

    matrix2 = (int **) malloc(sizeof(int *) * m);
    if(matrix2 == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

    matrix3 = (int **) malloc(sizeof(int *) * n);
    if(matrix3 == NULL){
        printf("Memory allocation failed.");
        exit(1);
    }

    //Calling functions to conduct each operation
    reading_matrix(matrix1, n, m);
    reading_matrix(matrix2, m, p);
    mult_matrix(matrix1, matrix2, matrix3, n, m, p);

    //Output
    printf("Matix A:\n");
    printing_matrix(matrix1,n,m);
    printf("Matix B:\n");
    printing_matrix(matrix2,m,p);
    printf("The multiplication result AxB:\n");
    printing_matrix(matrix3,n,p);

    //For loops to free the allocated memory of the matrices
    for ( int i = 0; i < n; i ++)
        free ( matrix1 [i]);
    free(matrix1) ;
    for ( int i = 0; i < m; i ++)
        free ( matrix2 [i]);
    free(matrix2) ;
    for ( int i = 0; i < n; i ++)
        free ( matrix3 [i]);
    free(matrix3) ;

    return 0;
}