#include <stdio.h>

/*character count in iput ; 2nd version*/
main()
{
    double nc;

    for (nc = 0; getchar () != EOF; ++nc)
         ;
    printf("%.0f\n", nc);
}