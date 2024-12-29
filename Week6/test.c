// #include <stdio.h>
// #define SQUARE(A) (A)*(A)

// int main(){

//     int x = SQUARE(1);

//     printf("%d", x);

//     return 0;
// }

#include<stdio.h>
#define MAX  10
#define DPRINT(expr) printf(#expr " = %g\n", expr)

int main()
{
    int counter;
        for(counter = MAX; counter > 0; --counter)
        printf("Hi there!\n");
    DPRINT("X/Y");

    return 0;
}