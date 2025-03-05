#include <stdio.h>
#include <stdlib.h>

//Function to allocate memory dynamically
void allocteMeory(int **ptr, int size){
    *ptr = (int*) malloc(size * sizeof(int));
    if (*ptr == NULL) {
        printf("Memroy allocation failed!\n");
        exit(1);
    }
}

//Main function
int main() {
    int *arr;
    int n = 5;

    allocteMeory(&arr, n); //Pass pointer to pointer
    printf("Memory allocated successfully!\n");

    free(arr); //Free Memory 
    return 0;
}