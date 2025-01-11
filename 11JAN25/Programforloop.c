#include <stdio.h>

int main(){
    int i = 1;
    while (i < 100){
        printf("%d ", i);
            if (i < 100){ //Add a space expect after the last number 
                printf(" ");
            }
        i++;
    }
    printf(" "); //move to a new line after printing all numbers
    return 0;
}