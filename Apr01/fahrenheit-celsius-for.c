/* write a particular task here in this program to elimination
 * of most of the variables.
 */

#include <stdio.h>

int main()
{
    int fhar;

    for ( fhar =0; fhar <= 300; fhar = fhar + 20 )
        printf(" %3d %6.1f\n ",fhar, (5.0/9.0) * (fhar-32));
}