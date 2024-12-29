/*
CH-230-A.
a6 p8.c
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
struct Linkey *delete1(struct Linkey * my_list){
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
    int value;
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