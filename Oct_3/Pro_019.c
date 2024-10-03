#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the Number : ");
    scanf("%d", &x);
    int a,b;
    y = 0;
    loop: if (x != 0)
    {
        a = y;
        b = (x % 10);
        y = a + b;
        x = (x / 10);
        goto loop;
    }
    printf("The sum of all digits of the entered number is %d\n", y);
}