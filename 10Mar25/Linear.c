#include <stdio.h>

//Function for linear search
int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if(arr[i] == key)
            return i; //return index if found 
    }
    return -1; //Return -1 if not found 
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int  n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int result = linearSearch(arr, n, key);
    if (result != -1)
        printf("Element %d found at index %d (linear search)\n", key, result);
    else
        printf("Element not found (linear search)\n");
    return 0;
}