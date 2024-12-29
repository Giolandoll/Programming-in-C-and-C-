/*
CH-230-A
a7 p2.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Struct definition
struct Linkey
{
    char value;
    struct Linkey *nextInLine;
    struct Linkey *behind;
};

//Print function to output all values of the linked list.
void print_list (struct Linkey * my_list) {
    struct Linkey * ptr ;
    //For loop to go though the linked list.
    for ( ptr = my_list ; ptr ; ptr = ptr->nextInLine) {
        printf ("%c ", ptr->value) ;
    }
    printf("\n");
}

//Function to add the new element to the front of the linked list.
struct Linkey* add_tofront(struct Linkey* my_list, char character){

    struct Linkey *newValue;
    //Allocating memory for the new value of the linked list.
    newValue = (struct Linkey *) malloc(sizeof(struct Linkey));
    if(newValue == NULL){
        printf("Memory Allocation failed\n");//Failure message
        return my_list;
    } 
    
    //Assigning the new value to the linked list.
    newValue->value = character;
    newValue->nextInLine = my_list;
    newValue->behind = NULL;

    if(my_list == NULL){
        return newValue;
    }
    my_list->behind = newValue;


    return newValue;//Returning linked list
}


//Delete function that deletes all occurences of a character in the list.
void delete(struct Linkey ** my_list, char character){
    
    struct Linkey * ptr = *my_list;
    struct Linkey* temptr = ptr;
    int found = 0;

    //While loop to continue to the end of the linked list.
    while (ptr != NULL) {
        //If statement to check each element of the list
        //And to remove the element from the linked list if found
        if (ptr->value == character) {
            found = 1;
            if (ptr->behind != NULL) {
                ptr->behind->nextInLine = ptr->nextInLine;
            } else {
                *my_list = ptr->nextInLine;
            }

            if (ptr->nextInLine != NULL) {
                ptr->nextInLine->behind = ptr->behind;
            }

            ptr = ptr->nextInLine;
            free(temptr);
        } else {
            ptr = ptr->nextInLine;//Moving to next element
        }
    }
    //To output a line if element was not found in the list
    if (found == 0)
        printf("The element is not in the list!\n");
}

//Function to clear the memory allocated for the linked list
void quit(struct Linkey * my_list){
    struct Linkey * ptr ;
    //While loop to the end of the linked list
    while (my_list != NULL ) {
        ptr= my_list->nextInLine ;
        free (my_list);
        my_list = ptr;
    }
}

//Function to print the list in reverese
void reverse_print(struct Linkey * my_list){
    if (my_list != NULL){
        struct Linkey *ptr = my_list;

        //Seek through list to the end
        while (ptr->nextInLine != NULL)
        {
            ptr = ptr->nextInLine;
        }

        //Seek through the list to the beginning while printing
        while (ptr != NULL)
        {
            printf("%c ", ptr->value);
            ptr = ptr->behind;
        }
        printf("\n");
    }
}

int main(){

    //Variable declaration
    int choice;
    char character;
    struct Linkey *my_list;

    my_list = NULL;

    //Do while looop to continue the program until the number 5 is entered
    do{
        scanf("%d", &choice);//INput from keyboard

        switch (choice){
        case 1:
            scanf(" %c", &character);
            my_list = add_tofront(my_list, character);//Calling function
            break;
        case 2:
            scanf(" %c", &character);
            if(my_list == NULL){
                printf("The element is not in the list!\n");
            }else{
                delete(&my_list, character);//Calling function
            }
            break;
        case 3:
            print_list(my_list);//Calling function
            break;
        case 4:
            reverse_print(my_list);//Calling function
            break;
        case 5:
            quit(my_list);//Calling function
            break;
        default:
            printf("Invalid input, try again!!\n");
            break;
        }


    }while(choice != 5);

    return 0;
}
