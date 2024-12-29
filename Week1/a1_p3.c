/* CH-230-A
 a1_p3.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main(){
    double result;/* The result of the division */
    int a = 5;
    float b = 13.5;
    /* The correction made to line:12 was to change the variable
    type from int to float as it contained decimal points*/
    result = a / b;
    printf("The result is %lf\n", result);
    return 0;

}