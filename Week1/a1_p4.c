/* CH-230-A
 a1_p4.c
 Giovanni Falconer
 gfalconer@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int x = 17;
    int y = 4;

    /*Lines 15-19 contain the operations done for each result*/
    int addedResult = x + y;
    int productResult = x*y;
    int differenceResult = x-y;
    float quotientResult = (float)x / y;
    int remainder = x%y;

    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", addedResult);
    printf("product=%d\n", productResult);
    printf("difference=%d\n", differenceResult);
    printf("division=%f\n", quotientResult);
    printf("remainder of division=%d\n", remainder);
  
  return 0;
}