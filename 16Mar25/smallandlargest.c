#include <stdio.h>

//Function to find the largest and smallest number in array
void findLargestSmallest(int arr[], int n,int *largest, int *smallest){
    *largest = *smallest = arr[0]; //Intialize both with the first element

    for(int i = 1; i < n; i++){
        if(arr[i] > *largest)
            *largest = arr[i];
        if(arr[i] < *smallest)
            *smallest = arr[i];
        }
}

int main(){
    int arr[] ={12, 5, 78, 2, 45, 40, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, smallest;

    findLargestSmallest(arr, n, &largest, &smallest);

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}