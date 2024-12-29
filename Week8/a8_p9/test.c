#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    scanf("%d",&n);

    char filename[256];
    while(n<1){
        printf("Invalid value! Please re-enter\n");
        scanf("%d",&n);
    }

    FILE *op = fopen("output.txt", "wb");
    if (op == NULL) {
        perror("Error opening output.txt");
        return 1;
    }

    for (int i = 0; i <n; i++){
        fscanf(stdin, "%s", filename);

        FILE * fp = fopen(filename, "rb");
        if(fp == NULL){//Checking if file opened
            printf("File opening failed\n");
            exit(1);
        }
        
        char buffer[64];
        size_t bytesRead;

        while((bytesRead = fread(buffer,1, 64, fp)) > 0){
            fwrite(buffer, 1, bytesRead, op);
            printf("%.*s", (int)bytesRead, buffer);
            fputc('\n', op);
        }

        fclose(fp);
    }

    fclose(op);
    return 0;
}