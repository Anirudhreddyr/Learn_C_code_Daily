/* Reading Numbers & writing the sum to new file */
#include <stdio.h>

int main(){
    FILE *inputFile, *outputFile;
    int num, sum = 0;

    //Open the input file in read mode
    inputFile = fopen("numbers.txt", "r");
    if (inputFile == NULL){
        printf("Error: could not open input file!\n");
        return 1;
    }

    //Read numbers from and compute sum
    while(fscanf(inputFile, "%d", &num) == 1){
        sum += num;
    }

    //close the output file in wirte mode
    outputFile = fopen("Sum_output.txt", "w");
    if(outputFile == NULL){
        printf("Error: could not open output file!\n");
        return 1;
    }

    //Write sum to  the output file 
    fprintf(outputFile, "Sum of number : %d\n", sum);

    printf("Sum written to 'Sum_output.txt successfully");
    return 0;
}