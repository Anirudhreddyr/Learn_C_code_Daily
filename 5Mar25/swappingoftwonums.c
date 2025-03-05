#include <stdio.h>

//Function to swap two numbers using pointers
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 20, y = 10;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y); //Pass address of x and y
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}