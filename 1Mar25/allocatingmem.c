/* Allocating memory for an integer array */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int n = 5;

    arr = (int*) calloc(n, sizeof(int)); //Allocates and initializes memory

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Memory allocated using calloc");
    
    free(arr);  //Free allocated memory
    return 0;
}