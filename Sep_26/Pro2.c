#include <stdio.h>

int main(){
    int x, y;
    printf ("Enter a THREE digit Number : ");
    scanf ("%d", &x);
    x = x / 10;
    y = x % 10;
    printf ("The digit in ten position is %d\n", y);
}