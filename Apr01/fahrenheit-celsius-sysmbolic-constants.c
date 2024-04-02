#include <stdio.h>

#define LOWER 0     /* lower limit of table */
#define UPPER 300   /* upper limit */
#define STEP 20     /* step size */

int main ()
{
    int fhar ;

    for ( fhar = LOWER; fhar <= UPPER; fhar = fhar + STEP )
        printf(" %3d %6.1f\n ", fhar, (5.0/9.0) * (fhar-32));
}
