#include <stdio.h>
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; //point to the first element of the array 

    printf("Value at ptr: %d\n", *ptr);
    ptr++; //Move to next elemnt 
    printf("Value at ptr after increment: %d\n", *ptr);

    ptr += 2; //Move two postions ahead
    printf("Vlaue at ptr after moving two postions: %d\n", *ptr);

    ptr--; //Move back one posistion

    printf("Value at ptr after decrement: %d\n", *ptr);

    return 0;
}