#include <stdio.h>

int main()
{
    int x, y;
    printf ("Enter a THREE digit Number : ");
    scanf ("%d", &x);
    y = x / 100;
    printf("The digit in Hundreds postion is %d\n", y);
}