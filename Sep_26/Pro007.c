#include <stdio.h>
int main ()
{
    int x, y;
    printf("Enter a THREE digit Number : ");
    scanf("%d", &x);
    int a,b,c;
    a = x % 10;              // Extracts the last digit
    b = (x / 10 ) % 10;     // Extracts the middle digit
    c = x / 100 ;            // Extracts the first digit
    y = (a * 100) + (b * 10) + c;
    printf (" The reverse of the entered number is %d\n", y);
}