#ifndef _list_h_
#define _list_h_

//Struct creation for linked list
struct Linkey
{
    int value;
    struct Linkey *nextInLine;
};


void print_list (struct Linkey * my_list);
struct Linkey* add_tofront(struct Linkey* my_list, int number);
struct Linkey* delete1(struct Linkey * my_list);
struct Linkey* add_toback(struct Linkey* my_list, int number);
void quit(struct Linkey * my_list);

#endif
