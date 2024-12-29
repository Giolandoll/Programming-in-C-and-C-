/*
CH-230-A
a8 p6.c
Giovanni Falconer
gfalconer@jacobs-university.de
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //Variable declaration
    char filename1[256], filename2[256];
    double value1, value2;

    //Reading filename from keyboard
    fgets(filename1, sizeof(filename1), stdin);
    filename1[strlen(filename1)-1] = '\0';

    //Reading filename from keyboard
    fgets(filename2, sizeof(filename2), stdin);
    filename2[strlen(filename2)-1] = '\0';

    //Initializing file pointer
    FILE *fp;
    fp = fopen(filename1, "r");//Opening first file to read first float
    if(fp == NULL){//Checking if file opened
        printf("File opening failed\n");
        exit(1);
    }
    fscanf(fp, "%lf", &value1);//Scanning float
    fclose(fp);//Closing file

    fp = fopen(filename2, "r");//Opening second file to read first float
    if(fp == NULL){//Checking if file opened
        printf("File opening failed\n");
        exit(1);
    }
    fscanf(fp, "%lf", &value2);//Scanning float
    fclose(fp);//Closing file


    fp = fopen("results.txt", "w");//Opening result file to write
    //printing all calculations into the file.
    fprintf(fp, "Sum: %.2lf\n", value1+value2);
    fprintf(fp, "Difference: %.2lf\n", value1-value2);
    fprintf(fp, "Product: %.2lf\n", value1*value2);
    fprintf(fp, "Quotient: %.2lf\n", value1/value2);
    fclose(fp);//Closing file
    return 0;
}