/* CH-230-A
 a2_p10.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/


#include <stdio.h>

int main() {

    int n, hours = 24;//Variable Declaration

    //Input from Keyboard
    printf("Enter a value:\n");
    scanf("%d", &n);

    //While loop validating the input from keyboard
    while (n<=0) {
        printf("Enter a value: ");
        scanf("%d", &n);
    }

    //For loop outputting days up to the integer given.
    for (int i = 1; i<=n; i++){
        if (i == 1){
            printf("1 day = %d hours\n", 1*hours);
        }else{
            printf("%d days = %d hours\n", i , i*hours);
        }

    }
    return 0;
}