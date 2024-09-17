#include <stdio.h>
int main ()
{
    int x,y;
    printf ("Enter a THREE digit number: ");
    scanf ("%d", &x);
    y = x%10;
    printf("The digit in one's position is %d\n", y);
    return 0;
}