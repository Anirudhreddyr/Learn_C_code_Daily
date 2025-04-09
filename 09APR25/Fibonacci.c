#include <stdio.h>

//Recursive function to find the nth Fibonacci number
int fibonacci(int n){
    if(n == 0) return 0; //base case
    if(n == 1) return 1; //base case
    return fibonacci(n - 1) + fibonacci(n - 2); //Recursive case
}

int main(){
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci sequence up to %d terms: \n", terms);
    for(int i = 0; i < terms; i++){
        printf("%d", fibonacci(i));
    }
    return 0;
}