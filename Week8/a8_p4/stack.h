#ifndef _list_h_
#define _list_h_

//Struct for stack
struct stack {
    unsigned int count;
    int array[12]; // Container
};

int isFull(struct stack *STACK);
int isEmpty(struct stack *STACK);
struct stack push(struct stack *STACK, int value);
int pop(struct stack *STACK);

#endif