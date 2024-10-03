#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the number : ");
    scanf("%d", &x);
    for (y = 0; x != 0; x=(x/10))
    {
        y = y + (x % 10);
    }
    printf("The Sum of all digits of the entered number is %d\n", y);
}