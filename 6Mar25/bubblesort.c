/* Bubble Sort */
#include <stdio.h>

//Function to perform bubble sort 
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j ++){
            if(arr[j] > arr[j + 1]){
                //Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//Function to print an array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++)
       printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    int arr[] = {53, 70, 30, 29, 19};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("sorted array: ");
    printArray(arr, n);

    return 0;
}