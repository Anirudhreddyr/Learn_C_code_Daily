/*
    program to compute sum and average of three integers
*/
#include <stdio.h>
int main(){
    int a, b, c, sum; //variables for inputs and sum 
    float average;    //variables for average

    printf("Enter three Integers: ", a, b, c);
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    average = sum / 3.0;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f", average);

    return 0;
}