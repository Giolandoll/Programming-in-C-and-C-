/* CH-230-A
 a2_p3.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/


#include <stdio.h>

int main() {
    

    double weeks, days, hours, result;//Variable declaration

    //Variables with hours in a week and a day.
    int week_hours = 168;
    int day_hours = 24;

    //Input from keyboard
    printf("Weeks:");
    scanf(" %lf", &weeks);
    printf("Days:");
    scanf(" %lf", &days);
    printf("Hours:");
    scanf(" %lf", &hours);
    
    //Calculation of the number of hours. 
    result = (weeks *week_hours)+(days * day_hours) + hours;

    printf("Total hours=%.2lf", result);//Output

    return 0;
}