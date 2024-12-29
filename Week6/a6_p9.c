/*
CH-230-A.
a6 p9.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/


#include <stdio.h>
#include <stdlib.h>

//Struct creation for linked list
struct Linkey
{
    int value;
    struct Linkey *nextInLine;
};

//Function to reverse the values in the linked list
struct Linkey * reverse(struct Linkey * my_list){
    struct Linkey * newptr = NULL, *temptr;
    //While loop through to the last element.
    while(my_list){
        temptr = my_list;
        my_list = my_list->nextInLine;

        //Putting each value in the linked list behind each other
        temptr->nextInLine = newptr;
        newptr = temptr;
    }
    return newptr;
}


//Function to insert the value into the linked list into a defined position
void insert_value(struct Linkey * my_list, int value, int position){
    //Variable declaration
    struct Linkey *newValue, *currentptr = my_list, *previousptr;
    int i = 0;

    //While loop to count the elements in the list
    while(my_list != NULL){
        my_list= my_list->nextInLine;
        i++;
    }
    //Checking if position given is invalid
    if (position < 0 || position > i) {
        printf("Invalid position!\n");
        
    }else{

        //Allocating memory for the new value of the linked list.
        newValue = (struct Linkey *) malloc(sizeof(struct Linkey));
        if(newValue == NULL){

            printf("Memory Allocation failed\n");//Failure message
        } 
        //Assigning new value to a pointer
        newValue->value = value;
        newValue->nextInLine = NULL;

        //Skimming through the linked list to the point to insert the new value
        for(int c=0; c<position; c++){
            previousptr = currentptr;
            currentptr = currentptr->nextInLine;
        }


        previousptr->nextInLine = newValue;
        newValue->nextInLine = currentptr;
    }
}

//Print function to output all values of the linked list.
void print_list (struct Linkey * my_list) {
    struct Linkey * ptr ;
    //For loop to go though the linked list.
    for ( ptr = my_list ; ptr ; ptr = ptr->nextInLine) {
        printf ("%d ", ptr->value) ;
    }
    printf("\n");
}

//Function to add the new element to the front of the linked list.
struct Linkey* add_tofront(struct Linkey* my_list, int number){

    struct Linkey *newValue;
    //Allocating memory for the new value of the linked list.
    newValue = (struct Linkey *) malloc(sizeof(struct Linkey));
    if(newValue == NULL){

        printf("Memory Allocation failed\n");//Failure message
        return my_list;
    } 
    
    //Assigning the new value to the linked list.
    newValue->value = number;
    newValue->nextInLine = my_list;
    return newValue;//Returning linked list
}

//Function to delete the first value of the linked list
struct Linkey *delete(struct Linkey * my_list){
    if(my_list == NULL)//Checking if the list is empty
        return my_list;

    struct Linkey *temptr;//Temporary pointer

    temptr  = my_list;
    my_list = my_list->nextInLine;
    free(temptr);

    return my_list;
}

//Function to the add the new value to the end of the linked list.
struct Linkey* add_toback(struct Linkey* my_list, int number){
    struct Linkey * ptr, *newValue;

    ptr = my_list;

    //Allocating memory for the new linked list.
    newValue = (struct Linkey *) malloc(sizeof(struct Linkey));
    if(newValue == NULL){
        printf("Memory Allocation failed\n");//Failure message
        return my_list;
    } 

    //Assigning the value to the new pointer
    newValue->value = number;
    newValue->nextInLine = NULL;

    //Checking if  empty list in which case we return the new value as the list
    if(my_list == NULL){
        return newValue;
    }
    
    //While loop to find the end of the list.
    while (ptr->nextInLine != NULL){
       ptr = ptr->nextInLine;
    }
    ptr->nextInLine = newValue;   

    return my_list;
 }


//Function to clear the memory allocated for the linked list.
void quit(struct Linkey * my_list){
    struct Linkey * ptr ;
    while (my_list != NULL ) {
        ptr= my_list->nextInLine ;
        free (my_list);
        my_list = ptr;
    }
}

int main(){

    //Variable declaration
    char character;
    int value, position;
    struct Linkey *my_list;


    my_list = NULL;

    //Do-while loop to have the user enter options until the quit value
    do{
        scanf(" %c", &character);//Input from keyboard

        //Switch statement to decide what function to use.
        switch (character)
        {
        case 'a':
            scanf("%d", &value);
            my_list= add_toback(my_list, value);//calling function
            break;
        case 'b':
            scanf("%d", &value);
            my_list = add_tofront(my_list, value);//Calling function
            break;
        case 'r':
            my_list = delete(my_list);//Calling function
            break;
        case 'p':
            print_list(my_list);//Calling function
            break;
        case 'i':
            scanf("%d", &position);
            scanf("%d", &value);
            insert_value(my_list, value, position);//Calling function
            break;
        case 'R':
            my_list = reverse(my_list);//Calling function
            break;
        case 'q':
            quit(my_list);//Calling function
            break;
        default:
            printf("Invalid input, try again!!\n");
            break;
        }
        
    } while (character != 'q');
    
    return 0;
}