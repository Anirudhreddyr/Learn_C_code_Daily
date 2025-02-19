/* Basic Pointer Usage */
#include <stdio.h>

int main(){
    int num = 12;
    int *ptr = &num; //Pointer stores address of num
    
    printf("Address of num: %p\n", &num);
    printf("Pointer stores address: %p\n", ptr);
    printf("Value at pointer: %d\n", *ptr); //Dereferencing
    return 0;
}