#include <stdio.h>

int main()
{
    char *a;
    a = 100000;
    *a = 10;
    printf("%d %d", a, *a);
}