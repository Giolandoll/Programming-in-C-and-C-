/*
CH-230-A
a8 p9.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Variable declaration
    int n;
    scanf("%d",&n);//Input of the number of files
    while(n<1){//Checking that a valid number of files was entered
        printf("Invalid value! Please re-enter\n");
        scanf("%d",&n);
    }

    //Declaring an array to store the filenames and reading them
    char filename[n][256];
    for(int i = 0; i <n; i++){
        fscanf(stdin, "%s", filename[i]);
    }
  
    //Opening the output file
    FILE *op = fopen("output.txt", "wb");
    if (op == NULL) {
        perror("Error opening output.txt");
        return 1;
    }

    //For loop to run through the files entered
    for (int i = 0; i <n; i++){

        //Opening each file in the file array
        FILE * fp = fopen(filename[i], "rb");
        if(fp == NULL){//Checking if file opened
            printf("File opening failed\n");
            exit(1);
        }
        
        //Buffer declaration
        char buffer[64];
        // Bytesread used to store the number of bytes read from the file 
        size_t bytesRead;

        /*While loop to read the data from the file and print it to 
        the output file*/
        while((bytesRead = fread(buffer,1, 64, fp)) > 0){
            fwrite(buffer, 1, bytesRead, op);
            printf("%.*s\n",(int)bytesRead, buffer);//Printing to the screen
            fputc('\n', op);
        }
        //Closing the file after each iteration of the loop
        fclose(fp);
    }

    fclose(op);//Closing the output file
    return 0;
}