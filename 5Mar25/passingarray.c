#include <stdio.h>

//function to print an array using pointers
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d", *(arr + i));  //Pointer arthimetic to access elements
    }
    printf("\n");
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array elements: ");
    printArray(numbers, size); //passing array as a pointer
    return 0;
}