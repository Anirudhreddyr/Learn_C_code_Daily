#include <stdio.h>

/*count characters in input 1st version*/
main ()
{
    long nc;

    nc = 0;
    while ( getchar () != EOF )
        ++nc;   /* ++nc is more concise and often more efficient*/
    printf(" %ld\n", nc);
    
}