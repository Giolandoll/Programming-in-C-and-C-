/*
CH-230-A
a8 p4.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


int main(){

    //Variable declaration
    struct stack STACK;
    STACK.count = -1;
    div_t result;

    unsigned int value;
    scanf("%d", &value);//Input value from keyboard

    unsigned int value1 = value;

    //While loop pushing the remainder of the division onto the stack
    while (value1 > 0){
        push(&STACK, (value1 % 2));
        result = div(value1, 2);
        value1 = result.quot;
    }

    //Output
    printf("The binary representation of %d is ", value);
    while(STACK.count != -1){
        printf("%d", pop(&STACK));
    }
    printf("\n");

    return 0;
}
    //Do while loop for the operation on stack
    // do{
    //     scanf(" %c", &command);

    //     switch (command)
    //     {
    //     case 's'://Pushing
    //         scanf("%d", &value);
    //         push(&STACK, value);
    //         break;
    //     case 'p'://POPPING
    //         if(!isEmpty(&STACK)){
    //             printf("Popping %d\n", pop(&STACK));
    //         }else{
    //             printf("Popping Stack Underflow\n");// Indicate failure
    //         }
    //         break;
    //     case 'e'://EMPTYING
    //         if(!isEmpty(&STACK)){
    //             printf("Emptying Stack ");
    //             while(!isEmpty(&STACK)){
    //                 printf("%d ", pop(&STACK));
    //             }
    //             printf("\n");
    //         }else{
    //             printf("Popping Stack Underflow\n");// Indicate failure
    //         }
    //         break;
    //     case 'q'://QUITIING
    //         printf("Quit\n");
    //         break;
        
    //     default://DEFAULT STATEMENT
    //         printf("Invalid input!!\n");
    //         break;
    //     }
    // }while(command != 'q');


