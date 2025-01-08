/*
    Program to demonstrates basic input and output operation
    printf & scanf
*/
#include <stdio.h>
int main(){
    int a, b, c; //variables to store inputs
    
    //prompt and read inputs
    printf("Enter three integers: ");
    scanf ("%d %d %d", &a, &b, &c);

    //Display the inputs
    printf("You enterd : %d %d %d", a, b, c);

    return 0;
}
