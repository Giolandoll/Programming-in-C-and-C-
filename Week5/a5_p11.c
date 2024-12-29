/*
CH-230-A
a5 p11.C
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>


//Recursive Function to check if given number is prime
int Prime(int n, int divisor) {
    int decision = 1;
    if (n <= 1) {
        decision = 0;
    } else if (divisor == 1) {
       return decision;
    }else if(divisor== n){
        decision= Prime(n, divisor - 1);//Ignores if the divisor==n
    } else if (n % divisor == 0) {
        decision = 0 ; // It's divisible, not a prime number
    } else {
        decision= Prime(n, divisor - 1); // Recursively check smaller divisors
    }
    return decision;
}


int main(){

    //Variable Declaration
    int number;

    //Input from keyboard
    scanf("%d", &number);

    //IF statement to print the correct output
    if(Prime(number, number) == 1){
        printf("%d is prime\n", number);

    }else{
        printf("%d is not prime\n", number);
    }

    return 0;
}