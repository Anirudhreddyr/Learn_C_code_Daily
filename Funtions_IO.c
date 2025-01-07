#include <stdio.h>

int main(){
    int num1, num2, num3; //Declare the variables to store input
    int sum;              //variable to store sum
    float average;        //variable to store average

    //prompt user and read inputs
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    //Compute the sum and average
    sum = num1 + num2 + num3;
    average = sum /3.0;         //use 3.0 to ensure floating-point division

    //print the results
    printf("sum: %d\n", sum);
    printf("average: %.2f\n", average);

    return 0;

}