#include <stdio.h>

long long factorial(int n){
    long long fact = 1;
    for (int i = 1; i <= n; i++){
        fact *= 1;
    }
    return fact;
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is: %lld\n", num, factorial(num));
    
    return 0; 
}