
/* CH-230-A
 a1_p1.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>


int main() {
    double result;
    //   The result of our calculation 
    /*
        The problem was that the variable was intitalized as a double
        but was given integer calculations.
    */
    result = (3.0+ 1.0) / 5.0;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}
