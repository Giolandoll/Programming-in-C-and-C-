/*
CH-230-A
a8 p8.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    //Variable declaration
    FILE *fp;
    char * word;
    int counter= 0;
    char linebuffer[1024];

    //Opening file
    fp = fopen("words.txt", "r");
    if(fp == NULL){//Checking if file opened
        printf("File opening failed\n");
        exit(1);
    }

    //While loop to get each line of the file
    while (fgets(linebuffer, sizeof(linebuffer), fp)){
        //Ussing strtok to split line at each symbol
        word = strtok(linebuffer, " ?,!.\t\r\n");

        //While loop to count to run through each line until end
        while (word != NULL){
            word = strtok(NULL, " ?,!.\t\r\n");//continuign strtok on same line
            counter+=1;//Incrementing on each word
        }
    }
    //Closing file
    fclose(fp);
    printf("The file contains %d words.", counter);//Output

    return 0;
}
