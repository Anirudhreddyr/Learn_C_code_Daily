#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the four difgit number : ");
    scanf ("%d", &x);
    int a, b, c, d;
    a = x % 10;
    b = (x / 10) % 10;
    c = (x / 100) % 10;
    d = x/1000;
    y = a + b + c+ d;
    printf ("The sum of ths digits of the entered numbers is %d\n", y);
}