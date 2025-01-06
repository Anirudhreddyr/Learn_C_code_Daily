#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // arithmatic operations
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);

    //check for division by zero
    if (num2 != 0) {
        printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
        printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
 }