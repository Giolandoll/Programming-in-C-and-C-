/* CH-230-A
 a2_p6.c
 Giovanni Falconer
 gfalconer@jacobs-university.de

*/
#include <stdio.h>
  
int main() {

    //Variable declaration
    double x, y;
    double  *ptr_one, *ptr_two, *ptr_three;
    
    //Input from Keyboard
    scanf("%lf", &x);
    scanf("%lf", &y);

    ptr_one = &x;
    ptr_two = &x;
    ptr_three= &y;

    //Output lines
    printf("Pointer One= %p\n", ptr_one);
    printf("Pointer Two= %p\n", ptr_two);
    printf("Pointer Three= %p\n", ptr_three);

    return 0;
}