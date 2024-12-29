/*
CH-230-A
a3_p4.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
int position(char str[], char c) {
    int idx;

    /*The error was that the the 'return idx' was being ran 
    by the for loop making it return 0 without having ran through the string.
    This was due to loops having the ability to run one line of code below its 
    condition line without the need of brackets to specify it. 
    
    This error was fixed by inputting curly brackets to around the comment 
    'do nothing'*/

    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
        /* do nothing */
    }
    
    
    /* do nothing */
    return idx;
}

int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
        break;
    }
    return 0;//Return 0 was missing here.
}