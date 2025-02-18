#include <stdio.h>

//Function to calculate sum of array elements
int sumArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i]; //Add each element to sum
    }
    return sum; //Return the computed sum
}

int main(){
    int numbers[] = {10, 20, 30, 40, 50}; //Example array
    int size = sizeof(numbers) / sizeof(numbers[0]); //calculate array size

    int result = sumArray(numbers, size); //Function call
    printf("Sum of array elements: %d\n", result); //Print the result 

    return 0;
}