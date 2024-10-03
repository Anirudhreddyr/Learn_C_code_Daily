#include <stdio.h>

int main()
{
    int x, y;
    y = 0;
    for (x = 0; x < 0; x=x+1)
    {
        if ((x%2) == 1)
        {
            y = y + 1;
        }
    }
    printf("Total of single odd number is %d\n", y);
}