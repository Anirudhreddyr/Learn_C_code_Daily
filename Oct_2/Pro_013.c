#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the number : ");
    int a,b;
    y = 0;
    loop: if (x != 0 )
        {
            a = (y * 10);
            b = (x % 10);
            y = a + b;
            x = (x / 10);
            goto loop;
        }
    printf("The reverse of the entered number %d\n", y);
}