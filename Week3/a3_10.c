/*
CH-230-A
a3_p10.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>


//Function to compute and return the product of 2 floats.
float product(float a, float b){
    float product = a*b;

    return product;
}

//Function to compute and return the product by reference. 
void productbyref(float a, float b, float *p){

    //Defreferencing to access the value held in the memory location.
    *p = a*b;

}

//Function to change the values of 2 floats by reference.
void modifybyref(float *a, float *b){

    *a+=3;
    *b+=11;
}



int main(){

    float value1, value2, value_product;//Variable declaration

    //Input from keyboard.
    scanf("%f", &value1);
    scanf("%f", &value2);
    
    //Calling function productbyref
    productbyref(value1, value2, &value_product);
    
    printf("Product=%f\n",product(value1, value2));
    
    //Printing the product computed and returned by reference
    printf("Product returned by reference=%f\n",value_product);

    modifybyref(&value1, &value2);//calling function modifyref

    //Printing float values modified and returned by reference.
    printf("Value 1: %f\n",value1);
    printf("Value 2: %f\n",value2);


    return 0;
}