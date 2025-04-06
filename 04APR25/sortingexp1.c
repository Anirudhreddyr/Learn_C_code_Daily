#include <stdio.h>

//Ascending oder comparison
int ascending(int a, int b){
    return a > b;
}

//Descending oder comparison
int descending(int a, int b){
    return a < b;
}

//Generic bubble sort using funtion pointer for comparison 
void bubbelsort(int arr[], int size, int (*compare)(int, int)){
    for (int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++){
            if (compare(arr[j], arr[j+1])){
                 
                //swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    } 
} 

//Display array 
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("/n");
}


int main(){
    int numbers[] = {64, 34, 78, 89, 36, 18, 20, 100};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    //Sort ascending 
    printf("Ascending Oder: ");
    bubbelsort(numbers, size, ascending);
    printArray(numbers, size);

    //Sort descending 
    printf("Descending Oder: ");
    bubbelsort(numbers, size, descending);
    printArray(numbers, size);

    return 0;
}