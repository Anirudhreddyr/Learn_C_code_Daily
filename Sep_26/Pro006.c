#include <stdio.h>

int main(){
    int x, y;
    printf("Enter a Two digit number : ");
    scanf ("%d", &x);
    int a, b;
    a = x % 10;
    b = x / 10;
    y = (a * 10) + b;
    printf("The reverse of the entered number is %d\n", y);
}