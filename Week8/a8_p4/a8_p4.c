/**
CH-230-A
a8 p4.c
Giovanni Falconer
gfalconer@jacobs-university.de

Modify the stack implemented for Problem 7.7 such that you can use it for converting a positive
decimal number stored in an unsigned int into the binary representation of the number using
division by 2 and storing the remainder of the division by 2 in the stack.
Upload again all files related to this problem (i.e., stack.h, stack.c and convertingstack.c).
You can assume that the input will be valid. To pass the testcases your output has to be identical
with the provided ones.
Testcase 8.4: input
75
Testcase 8.4: output
The binary representation of 75 is 1001011.



*/

/*
CH-230-A
a7 p7.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

//Function to check if the stack is full or not
int isFull(struct stack *STACK){
    if(STACK->count == 11)
        return 1;
    else 
        return 0;
}
//Function to test if the stack is empty of not
int isEmpty(struct stack *STACK){
    if(STACK->count == -1)
        return 1;
    else 
        return 0;
}

//Function to push the new value given unto the stack given not full
struct stack push(struct stack *STACK, int value){
    if(isFull(STACK)){
        printf("Pushing Stack Overflow\n");
        return *STACK;
    }else{
        printf("Pushing %d\n", value);
        STACK->array[STACK->count+1] = value;
        STACK->count++;
    }
    return *STACK;
}

//Function to pop the value off the stack given it is not already empty
int pop(struct stack *STACK) {
        int poppedValue = STACK->array[STACK->count];
        STACK->count--; // Decrement count after retrieving the value
        return poppedValue;
}


int main(){

    //Variable declaration
    struct stack STACK;
    STACK.count = -1;
    div_t result;

    // char command;
    int value;
    scanf("%d", &value);

    int value1 = value;

    while (value1 > 0){
        push(&STACK, (value1 % 2));
        result = div(value1, 2);
        value1 = result.quot;
    }

    printf("The binary representation of %d is ", value);
    while(STACK.count != -1){
        printf("%d", pop(&STACK));
    }
    printf("\n");

    return 0;

}