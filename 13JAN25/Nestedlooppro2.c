/* Pyramid pattern */
#include <stdio.h>

int main (){
    int n = 5; //number of rows in the pyramid

    for (int i = 1; i <= n; i++){
        //print spaces
        for(int j = 1; j <= n-1; j++){
            printf(" ");
        }
        //print stars
        for (int k = 1; k <= 2 * i - 1 ; k++){
            printf("*");
        }
        //move to the next line 
        printf("\n");   
    }
    return 0;
}