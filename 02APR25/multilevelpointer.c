#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = &x;      //pointer storing the address of x
    int **ptr2 = &ptr;  //Pointer storing the address of ptr

    printf("Value of x: %d\n", x);
    printf("Value using single pointer: %d\n", *ptr);
    printf("Value using double pointer: %d\n", **ptr2);

    return 0;
}