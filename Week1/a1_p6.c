/* CH-230-A
 a1_p6.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char character = 'F';
    int asciiCode = character;//Converts the char to its ascii form.


    int new_asciiCode = asciiCode +3;//This finds the 3rd character after F.
    char new_char = new_asciiCode;

    printf("Character: %c\nASCII of:%d", new_char, new_asciiCode);

    return 0;
}