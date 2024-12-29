/* CH-230-A
 a2_p1.c
 Giovanni Falconer
 gfalconer@jacobs-university.de

*/


#include <stdio.h>

int main(){
    //Lines 34-41 declares the variables needed for this excercise.
    double number_one;
    double number_two;
  
    int number_three;
    int number_four;

    char character1;
    char character2;    

    //Lines 44-48 accepts input from the keyboard.
    scanf("%lf", &number_one);
    scanf("%lf", &number_two);
    scanf("%d", &number_three);
    scanf("%d", &number_four);
    scanf(" %c %c", &character1, &character2);


    //Lines 52-62 output all the values required to be displayed.
    printf("sum of doubles=%lf\n", number_one+number_two);
    printf("difference of doubles=%lf\n", number_one-number_two);
    printf("square=%lf\n", number_one*number_one);  
    
    printf("sum of integers=%d\n", number_three + number_four);
    printf("product of integers=%d\n", number_three * number_four);
   
    printf("sum of chars=%d\n", character1+ character2);
    printf("product of chars=%d\n",character1 * character2);
    printf("sum of chars=%c\n", character1+ character2);
    printf("product of chars=%c\n",character1 * character2);

    return 0;
}