/* CH-230-A
 a2_p2.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main (){

    char character;//Variable declaration

    scanf(" %c", &character);//Input from Keyboard

    //Lines outputing to screen. 
    printf("character=%c\n", character);
    printf("decimal=%d\n", character);
    printf("octal=%o\n", character);
    printf("hexadecimal=%x\n", character);

    return 0;
}
