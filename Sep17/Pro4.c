#include <stdio.h>
int main()
{
    int x, y;
    printf ("Enter a THREE digit number : ");
    scanf ("%d", x);
    x = x / 10;
    y = x % 10;
    printf ("The digit in tens position is %d\n", y);
}