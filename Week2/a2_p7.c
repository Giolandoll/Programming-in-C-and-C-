/* CH-230-A
 a2_p7.c
 Giovanni Falconer
 gfalconer@jacobs-university.de

*/

#include <stdio.h>
int main()
{
    int i = 8;

    /*The cause of the error was due to the while loop having more
    than one lines after the condition but with no curly braces to 
    surround them.Hence i was not decremented*/
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    printf("Thats it.\n");
    return 0;
}