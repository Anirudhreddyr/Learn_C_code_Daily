#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40};
    int *ptr =  arr; //Pointer to the first element

    printf("First element: %d\n", *ptr);
    printf("Second element: %d\n", *(ptr + 1)); //Moves to the next element
    printf("Third element: %d\n", *(ptr + 2)); 
    printf("Four element: %d\n", *(ptr + 3)); 
    
    return 0;
}