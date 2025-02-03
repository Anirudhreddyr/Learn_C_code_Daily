#include <stdio.h>

int main (){
    int matrix1[2][2], matrix2[2][2], sum[2][2];

    //taking input for the first matrix 
    printf("Enter the elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //taking intput for the second matrix
    printf("Enter the elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //perfoming matrix addition 
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; i < 2; j++){
            printf("%d", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}