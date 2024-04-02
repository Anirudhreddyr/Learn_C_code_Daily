/* Program to print fahrenheit-celsius table. */

#include <stdio.h>

int main()
{
    float fhar, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature of table */
    upper = 300;    /* upper limit of temperature of table */
    step = 20;      /* step size */

    fhar = lower;
    while (fhar <= upper){
        celsius = (5.0/9.0) * (fhar - 32.0);
        printf("%3.0f %6.1f\n", fhar, celsius);
        fhar = fhar + step;
    }
}
