/* CH-230-A
 a2_p8.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int value;//Declaration of Variable

    scanf("%d", &value);

    /*If statement with a condition testing if the value 
    leaves any remainded when divided by 2 and 7*/
    if (value%2 == 0 && value%7 ==0){
        printf("The number is divisible by 2 and 7\n");
    }else{
        printf("The number is NOT divisible by 2 and 7\n");
    }

    return 0;
}
