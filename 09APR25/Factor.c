#include <stdio.h>

//Funtion to calculate factorial
unsigned long long int  factorial(int n){
    if (n == 0){
        return 1;                 //Base call
    }
    return n * factorial(n - 1);  //Rescursive call
}

int main(){
    int num;
    
    //Input from the user
    printf("Enter the Number : ");
    scanf("%d", &num);

    //calculate and print factorial number
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;

}