#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter a Two digit Number : ");
    scanf("%d", &x);
    y = x / 10;
    printf("The digit in tens position is %d\n", y);
}