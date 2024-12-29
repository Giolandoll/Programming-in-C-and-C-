/*
CH-230-A.
a6 p7.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <stdio.h>
#include <math.h>

//Function that uses bitwise operators to set chosen bits in 8bit binary
int set3bits(unsigned char character, int bit1, int bit2, int bit3){
    //Variable declaration
    int result = character;
    int mask1, mask2, mask3;

    //Bitwise left shifts to set masks
    mask1 = 1 << bit1;
    mask2 = 1 << bit2;
    mask3 = 1 << bit3;

    //OR assign to set the bits in the binary number using mask.
    result  |= mask1;
    result  |= mask2;
    result  |= mask3;

    return result;//Returning new binary number with set bits
}


int main(){

    //Variable Declaration
    unsigned char character;
    int bit1, bit2, bit3, result;

    //Scanning for input from keyboard
    scanf(" %c", &character);
    scanf("%d", &bit1);
    scanf("%d", &bit2);
    scanf("%d", &bit3);

    //Printing character in decimal form
    printf("The decimal representation is: %u\n", character);

    //Printing character in binary
     printf("The binary representation is: ");

    //Output of binary using bitwise operations and masks
    for (int i = 7; i >= 0; i--){
        printf("%c", (character & (1 << i) ? '1' : '0'));
    }
    printf("\n");

    result = set3bits(character, bit1, bit2, bit3);//Calling function

    //Output of binary using bitwise operations and masks
    printf("After setting the bits: ");
    for (int i = 7; i >= 0; i--){
        printf("%c", ( result & (1 << i) ? '1' : '0'));
    }
    printf("\n");
    return 0;
}