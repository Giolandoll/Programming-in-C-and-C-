/*
CH-230-A
a8 p4.c
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
        // printf("Pushing Stack Overflow\n");
        return *STACK;
    }else{
        // printf("Pushing %d\n", value);
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