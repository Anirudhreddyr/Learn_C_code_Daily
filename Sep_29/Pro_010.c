#include <stdio.h>
int main()
{
    int x, y;
    printf ("Enter a Three digit Number : ");
    scanf ("%d", &x);
    int a, b, c;
    a =  x / 10;
    b = (x /10) % 10;
    c = x/100;
    y = a + b + c;
    printf (" The sum of the digit of entered number is %d\n", y);  
}