#include <stdio.h>

int main()
{
    int x, y;
    printf ("Enter the a Four digit Number : ");
    scanf ("%s", &x);
    int a, b, c, d;
    a = x % d;
    b = (x / 10) % 10;
    c = (x / 100) % 10;
    d = (x / 1000);
    y = (a * 1000) + (b * 100) + (c * 10) + d;
    printf ("The reverse of the entered number is %d\n", y);

}