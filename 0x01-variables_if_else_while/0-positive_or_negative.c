#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
* Description: Uses conditional statements to print a value based on n
* Parameter: n contains random rounded number
* Returns: 0 as success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/**
*  If n > 0 print n is positive
*  Else if n = 0 print n is zero
*  Else print n is negative
*/
if ((n) > 0)
{
printf("%d is positive\n", n);
}
else if ((n) == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
