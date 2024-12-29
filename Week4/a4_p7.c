/*
CH-230-A
a4_p7.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>


//Function to find the values under the main diagonal.
void under_diagonal(int array[][30], int n){

    printf("Under the main diagonal:\n");
    //For loop to keep track of the main diagonal.
    for(int i =1; i< n; i++){
        for(int c = 0; c<i;c++){
            printf("%d ", array[i][c]);
        }
    }   
    printf("\n");//End of line character.

}

int main() {

    //Variable Declaration
    int matrix[30][30];
    int n;
    
    scanf("%d", &n);//Input

    //For loop to fill the array with values
    for(int i = 0; i<n; i++){
        for (int c = 0; c<n; c++){
            scanf("%d", &matrix[i][c]);
        }
    }

    //Output lines for the matrix
    printf("The entered matrix is:\n");

    //For loop to output each value row and column of the array
    for(int i = 0; i<n; i++){
        for (int c = 0; c<n; c++){
            printf("%d ", matrix[i][c]);
        }
        printf("\n");
    }

    under_diagonal(matrix, n);//Calling the function and giving parameters
    return 0;
}