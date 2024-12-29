/*
CH-230-A
a5 p8.C
Giovanni Falconer
gfalconer@jacobs-university.de

Write a program that computes the multiplication of two dynamically allocated matrices.
Your program should dynamically allocate the memory for the three matrices (two input matrices
and the result matrix). You should write functions for reading a matrix from the standard input,
printing a matrix to the standard output, and finally a function for computing the multiplication
of two matrices. At the end, do not forget to deallocate the memory used by the three matrices.
The product of two matrices A and B of dimensions n × m and m × p can be calculated as:

Your program should read three integers (the dimensions n, m and p) and the elements of two integer matrices from the standard input. 
The result of the matrix multiplication should be printed
on the standard output.
You can assume that the input will be valid. To pass the testcases your output has to be identical
with the provided ones.
Testcase 5.8: input
2
2
2
1
2
3
4
1
0
0
1
Testcase 5.8: output
Matrix A:
1 2
3 4
Matrix B:
1 0
0 1
The multiplication result AxB:
1 2
3 4
*/

#include <stdio.h>
#include <stdlib.h>


void reading_matrix(int **mat1, int n, int m){
    for(int i = 0; i< n; i++){
        mat1[i] = (int*) malloc(sizeof(int)* m);
        if(mat1[i] == NULL){
            printf("Memory allocation failed.");
            exit(1);
        }
    }
    for(int i = 0; i< n; i++){
        for(int c = 0; c< m; c++){
            scanf("%d", &mat1[i][c]);
        }
    }
}

void printing_matrix(int **mat1, int n, int m){
   
    for(int i = 0; i< n; i++){
        for(int c = 0; c< m; c++){
            printf("%d ",  mat1[i][c]);
        }
        printf("\n");
    }
}

void multiplying_matrix(int **mat1, int **mat2, int **mat3, int n, int m,  int p){
    for(int i = 0; i< n; i++){
        mat3[i] = (int*) malloc(sizeof(int)* p);
        if(mat1[i] == NULL){
            printf("Memory allocation failed.");
            exit(1);
        }
    }

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
    int n, m, p;
    int **matrix1, **matrix2, **matrix3;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

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

    reading_matrix(matrix1, n, m);
    reading_matrix(matrix2, m, p);
    multiplying_matrix(matrix1, matrix2, matrix3, n, m, p);

    printf("Matix A:\n");
    printing_matrix(matrix1,n,m);
    printf("Matix B:\n");
    printing_matrix(matrix2,m,p);
    printf("The multiplication result AxB:\n");
    printing_matrix(matrix3,n,p);

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