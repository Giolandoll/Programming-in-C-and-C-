/* CH-230-A
 a2_p4.c
 Giovanni Falconer
 gfalconer@jacobs-university.de

*/

#include <stdio.h>

int main() {
    float value1, value2, value3;//Delcartion og variables.

    //Input from the Keyboard
    scanf("%f", &value1);
    scanf("%f", &value2);
    scanf("%f", &value3);

    //Calculations for required areas.
    float square_area = value1 *value1;
    float rectangle_area = value1 * value2;
    float triangle_area = (.5 * value1) * value3;
    float trapezoid_area =  0.5*(value1 + value2)*value3;

    //Outputs
    printf("square area=%lf\n", square_area);
    printf("rectangle area=%lf\n", rectangle_area);
    printf("triangle area=%lf\n", triangle_area);
    printf("trapezoid area=%lf\n", trapezoid_area);

    return 0;
}