#include <stdio.h>

//Function to calculate sum using pointers
int sumAarry(int *ptr, int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += *(ptr + i); //Access elements using pointer arthmetic 
    }
    return sum;
}

int main(){
    int arr[] = {5, 10, 15, 20, 25}; //sample array
    int size = sizeof(arr) / sizeof(arr[0]); //calculate size of array

    //call function and print sum
    printf("Sum of array elements: %d\n", sumAarry(arr, size));

    return 0;
}