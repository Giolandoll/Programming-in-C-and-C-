
#include <stdio.h>
#include <stdlib.h>

#include "linked_list.h"

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
            my_list = delete1(my_list);//Calling function
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