#include <stdio.h>

int main(){
    for (int i = 1; i <= 100; i++){
        printf("%d", i);
    if (i < 100){ //  Add a space after the last number 
        printf(" ");
        }
    }
    printf("\n"); //move to a new line after printing all numbers
    return 0;
}