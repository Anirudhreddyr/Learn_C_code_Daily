/* Selection  sort */
#include <stdio.h>

//Function for selectionsort
void selectionsort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }

        //Swap elements
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

}