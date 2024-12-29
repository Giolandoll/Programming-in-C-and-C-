/*
CH-230-A
a5 p1.C
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include <stdio.h>

//Function to print the triangle
void triangle_form(int n, char c){

    //First for loop manage the height of the triangle
    for (int i = 0; i<n; i++){
        /*For loop to manage the respective line lengths.
        Utilizing the variable from the first loop 
        to decrease the lengths of each line as you go down.*/
        for(int x = 0; x < n-i; x++){
            printf("%c", c);
        }
        printf("\n");//To skip to a new line after completeing each.

    }
}


int main (){
    //Variable declaration
    int n;
    char c;
    //Input from the keyboard.
    scanf("%d", &n);
    scanf(" %c", &c);


    triangle_form(n, c);//Calling function to output results..
    return 0;
}