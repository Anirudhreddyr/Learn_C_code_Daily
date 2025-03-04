#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float *arr, sum = 0.0, average;

    //Taking user input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //Dynamicllay allocate memory for n elemnets
    arr = (float*) malloc(n * sizeof(float));
    if (arr == NULL){
        printf("Memory allocation failed!\n");
        return 1;   //Exit if memory allocation fails
    }
    
    //Taking input values
    printf("Enter %d numbers : \n", n);
    for (int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
        sum += arr[i]; //Calculate sum  
    }

    //Calculate and display average 
    average = sum / n;
    printf("Average : %.2f\n", average);

    //Free allocated memory 
    free(arr);
    return 0;
}