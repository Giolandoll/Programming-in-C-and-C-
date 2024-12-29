/*
CH-230-A
a3_p9.c
Giovanni Falconer
gfalconer@jacobs-university.de

*/

#include <stdio.h>

//Function to sum the values in the 2nd and 5th position.
double sum25(double v[], int n){
    /*This if statement checks if there is a value
    in both 2nd and 5th position.*/
    if (n < 6){
        return -111;//Fail value returned as sum
    }else{
        double sum = v[2] + v[5];//Computation of sum
        return sum;
    }
}

int main(){

    //Variable declaration
    double values[20];
    int n;
    double sum;

    //Input from keyboard for n and array.
    scanf("%d", &n);
    for(int i = 0; i <n; i++){
        scanf("%lf", &values[i]);
    }

    sum = sum25(values, n);

    if(sum == -111){
        //Output if both positions are invalid
        printf("One or both positions are invalid\n");
    }else{

        printf("sum=%lf\n",sum);//Output if both positions are valid.
    }

    
    return 0;
}