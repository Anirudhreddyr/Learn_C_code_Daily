/*Program to check if number is odd or even.
 *Description :
 *  The user entered number should identified whether its a odd or even. Mention its sign too.
 *    > Arithmetic Operators : '+', '-' , '*', '/', '%'. 
 *    > Nested if-else construct : when have have an if-else statemnt inside another if or esle block .
 *                                 This allows you to have multiple conditions checked in sequence.
 * Sample Input : Enter the value of 'n' : -2
 * Sample Output: -2 is negative even number
 */

#include <stdio.h>
int main (){
    int num;
    printf(" Enter the value of 'n' : ");
    scanf("%d", &num);
    if ( num == 0 )
    {
        printf(" %d is neither odd nor even \n ", num);
    }
    else
    {
        if (num < 0)
        {
            if ( num % 2 == 0 )
            {
                printf(" %d is negative even number \n ", num);
            }
            else
            {
                printf(" %d is negative odd number \n ", num);
            }
        }
        else
        {
            if (num % 2 == 0 )
            { 
                printf(" %d  is positive even number \n", num);
            }
            else 
            {
                printf(" %d  is positive even number \n", num);
            }
        }
    }
    return 0;
}