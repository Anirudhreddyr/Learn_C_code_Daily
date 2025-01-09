/* Program to check if the number is +ve, -ve or zero */
#include <stdio.h>
int main(){
    int number;

    //prompt the user to enter the number
    printf("Enter the number: ");
    scanf("%d", &number);

    //check the conditons and print the result 
    if (number > 0){
        printf("The number %d is Positive.\n", number);
    } else if (number < 0){
        printf("The number %d is Negative. \n", number);
    }else {
        printf("The number is zero.\n");
    }
    return 0;
}