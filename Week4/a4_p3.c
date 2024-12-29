/*
CH-230-A
a4_p3.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>
#include <math.h>

//function to calculate the geometric mean of the array. 
float geometric_mean(float arr[], int num){
    float product= 1.0; 
    
    for(int i = 0; i <num; i++){
        product*= arr[i];
    }
    return pow(product, 1.0 / num);
}

//Function to find the highest value in the array.
float highest_value(float arr[], int num){
    float max = arr[0];
    for (int c = 1; c < num; c++){
        if(arr[c] > max)
            max = arr[c];
    }
    return max;
}

//Function to find the lowest value in the array. 
float lowest_value(float arr[], int num){
    float least = arr[0];
    for (int c = 1; c < num; c++){
        if(arr[c] < least)
            least = arr[c];
    }
    return least;
}

//Function to find the sum of all values entered into the array.
float sumof_value(float arr[], int num){
    float sum = 0;
    for(int i = 0; i <num; i++){
        sum+= arr[i];
    }

    return sum;
}

int main(){
    
    //Variable declaration
    float array[15];
    int i = 0;
    char choice;

    //Do-While  loop for input of array values.
    do{
        printf("Enter a value: (A number <0 exits)\n");
        scanf("%f", &array[i]);
        i++;
    }while(i<15 && array[i-1] >= 0);

    //Condition to remove a negative number if detected in array.
    if(array[i-1] < 0)
        i--;

    printf("Enter a letter:\n");
    scanf(" %c", &choice);
    
    //Switch to decide what operation to do on array. 
    switch (choice)
    {
        case 'm'://Geometric mean
            printf("Mean:%f\n", geometric_mean(array, i));
            break;
        case 'h'://Highest value
            printf("Highest:%.2f\n", highest_value(array, i));
            break;
        case 'l'://Lowest value 
            printf("Lowest:%.2f\n", lowest_value(array, i));
            break;
        case 's'://Sum of values
            printf("Sum:%.2f\n", sumof_value(array, i));
            break;
        default:
            printf("Invalid value entered.\n");
            break;
    }

    return 0;
}