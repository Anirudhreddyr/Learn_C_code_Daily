#include <stdio.h>

int main()
{
    int x, y;
    printf ("Enter a two digit number : ");
    scanf ("%d", &x);
    int a, b;
    a = x % 10;
    b = x / 10;
    y = a + b;
    printf ("The sum of the digits of entered number is %d\n", y);
}