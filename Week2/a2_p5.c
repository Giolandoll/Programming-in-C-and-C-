/* CH-230-A
 a2_p5.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main(){
    //Variable Declaration
    int a;
    int *ptr_a;

    scanf("%d", &a);

    ptr_a= &a;
    printf("Variable Address: %p\n", ptr_a);

    *ptr_a += 5;
    printf("Value: %d\n", *ptr_a);
    printf("Variable Address: %p\n", ptr_a);

    return 0;
}