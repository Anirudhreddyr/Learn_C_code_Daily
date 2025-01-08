/* Sum of three integers*/
#include <stdio.h>

int main(){
    int a, b, c, sum;

    printf ("Enter three integers separated by spaces or newlines: ");

    if (scanf("%d %d %d", &a, &b, &c) != 3){
        printf("Invalid input. Please enter three integers. \n");
        return 1; //exit with error code
    }

    //debugging : Display the read values
    printf("Values read : a = %d, b = %d, c = %d\n", a, b, c);

    sum = a + b + c;

    printf("Sum of %d, %d, and %d is: %d", sum);

    return 0;
}