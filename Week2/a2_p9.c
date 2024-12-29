/* CH-230-A
 a2_p9.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main() {

    char character1;//Declaration of Variable

    scanf(" %c", &character1);//Input from Keyboard
    
    //If statement to decide what the character is based on ASCII code.
    if ((int) character1 >=48  && (int) character1 <=57){
        printf("%c is a digit\n", character1);


        //Condition for uppercase alphabet
    }else if((int) character1 >=65 && (int) character1 <=90) {
        printf("%c is a letter\n", character1);


        //Condition for lower case alphabet
    }else if((int) character1 >=97 && (int) character1 <=122){
        printf("%c is a letter\n", character1);

    }else{
        printf("%c is some other symbol\n", character1);
    }

    return 0;
}