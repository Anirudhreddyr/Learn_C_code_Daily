#include <stdio.h>
int main()
{
    char a[] = "Tejas Networks lmtd";
    char b[11] , i;
    for (i = 0; i<12; i++)
    {
        b[i] = a[5+i];
    }
    b[10] = 0;
    printf ("%s", b);
}