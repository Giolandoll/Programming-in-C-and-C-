/*
CH-230-A
a8 p5.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>

int main(){

    //Varible declaration
    int array[2];
    char ch;
    int i = 0;
    FILE * fp;

    //Opening first file in read only mode
    fp = fopen("chars.txt", "r");
    if(fp == NULL){//Checking if file opened
        printf("File opening failed\n");
        exit(1);
    }

    //While loop to seek through the file and read first two chars
    while (!feof(fp) && i < 2) {
        ch = getc(fp);
        if (ch != ' ') {
            array[i] = (int)ch;
            i++;
        }
    }

    fclose (fp);//Closing first file

    //Creating second file and opening it in write mode
    fp = fopen("codesum.txt", "w");
    fprintf(fp, "%d", array[0]+array[1]);//Printing the sum into the file
    fclose(fp);//Closing second file

    return 0;
}