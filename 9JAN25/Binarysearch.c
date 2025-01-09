/* Binsearch : find x in v[0] < = v [1]....... <= v[n-1] */
#include <stdio.h>

int binsearch(int x, int v[], int n){
    int low, high, mid;
    
    low = 0;
    high = n - 1;
    while (low <= high){
        mid = low + high /2;
        if (x < v[mid])
            high = mid -1;
        else if (x > v[mid])
            low = mid + 1;
        else              /* found match */
            return mid;
    }
    return -1;            /* No match */
}

int main() {
    int arr[] =  {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;

    int result = binsearch(x, arr, n);
    if (result != -1){
        printf("Element %d  found at index %d\n", x, result);
    }else {
        printf("Element %d not found in array\n", x);
    }
    return 0;
}