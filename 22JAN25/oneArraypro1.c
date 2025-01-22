/* program takes 5 numbers in array and prints their sum*/
#include <stdio.h>

int main(){
    int numbers[5]; //Declare an array of size 5
    int sum = 0;   //variable to store the sum

    //input 5 numbers into the array
    printf ("Enter 5 numbers: \n");
    for(int i=0; i < 5; i++){
    scanf("%d", &numbers[i]);  
}

for (int i=0; i < 5; i++){
    sum += numbers[i];
}

printf("The sum of the numbers is: %d\n", sum);

return 0;
}