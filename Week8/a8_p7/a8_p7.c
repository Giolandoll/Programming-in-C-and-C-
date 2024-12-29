/*
CH-230-A
a8 p7.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    //Creating a buffer to store each line of the files
    char linebuffer[1024];

    //Initializing file pointers
    FILE * fp1, *fp2, *outputfp;
    //Opening file 1 for reading
    fp1 = fopen("text1.txt", "r");
    if(fp1 == NULL){//Checking if file opened
        printf("File1 opening failed\n");
        exit(1);
    }

    //Opening file 2 for reading
    fp2 = fopen("text2.txt", "r");
    if(fp2 == NULL){//Checking if file opened
        printf("File2 opening failed\n");
        fclose(fp1);
        exit(1);
    }
    //Opening output file for writing
    outputfp = fopen("merge12.txt", "w");
     if(outputfp == NULL){//Checking if file opened
        printf("File2 opening failed\n");
        //Closing other files if this file fails to open
        fclose(fp1);
        fclose(fp2);
        exit(1);
    }

    //While loop to get each line of the file and print into output file
    while (fgets(linebuffer, sizeof(linebuffer), fp1)) {
        fprintf(outputfp, "%s", linebuffer);
    }
     //While loop to get each line of the file and print into output file
    while (fgets(linebuffer, sizeof(linebuffer), fp2)) {
        fprintf(outputfp, "%s", linebuffer);
    }


    //Closing each file
    fclose(fp1);
    fclose(fp2);
    fclose(outputfp);

    return 0;
}