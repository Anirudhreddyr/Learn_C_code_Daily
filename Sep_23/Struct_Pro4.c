#include <stdio.h>

int main()
{
    struct xyz
    {
        char x;
        short y;
        long z;
    };
    struct xyz abc;
    abc.x = 10;
    abc.y = 20;
    abc.z = 30;
    printf("%d %d %d\n", abc.x, abc.y, abc.z); 
    printf("%d", sizeof(abc));  
}