/*
CH-230-A
a5 p10.C
Giovanni Falconer
gfalconer@jacobs-university.de


*/

#include <stdio.h>
//Recursive function
int recursive_funcion(int n){
    //Base case that allows recursive loop to end
    if (n ==1){
        printf("%d \n", n);
        return 1;
    }else{
        printf("%d \n", n);
        recursive_funcion(n-1);
    }
    return 0;
}

int main(){

    //Variable declaration
    int n; 

    scanf("%d", &n);//Input

    recursive_funcion(n);//Initial Calling of recursive function
    return 0;
}

