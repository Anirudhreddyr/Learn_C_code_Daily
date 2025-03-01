/* Expanding Array */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n = 3;

    arr = (int*) malloc(n * sizeof(int)); //Allocates memory
    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf ("Initial allocation successfull\n");

    //Resize memory to store 5 elements
    arr = (int*) realloc(arr, 5 * sizeof(int));
    if (arr == NULL){
        printf("Memory reallocation failed");
        return 1;
    }
    printf("Memory reallocation successfull!\n");
    free(arr); //Free allocated memory
    return 0;
}