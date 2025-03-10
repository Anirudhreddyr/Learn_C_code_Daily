#include <stdio.h>

//Function for Binary search (Recursive)
int binarySearch(int arr[], int low, int high, int key){
    if (low > high)
        return -1; //Base Case: Element not found

    int mid = low + (high - low) / 2;

    if(arr[mid] == key)
        return mid; //Element found
    else if(arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key); //Search left half
    else
        return binarySearch(arr, mid + 1, high, key); //Search right half
}

int main(){
    int arr[] = {10, 20, 30, 40, 50}; // Sorted array
    int n = sizeof(arr) /sizeof(arr[0]);
    int key = 30;

    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element %d found at index %d (Binary search)\n", key, result);
    else 
        printf("Element not found (Binary search)\n");
    
    return 0;
}