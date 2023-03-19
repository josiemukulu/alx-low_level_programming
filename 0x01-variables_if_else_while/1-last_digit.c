#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main -main function
 *
 * Return: Always o.
 */
int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
m = n % 10;
if (n > 5)
printf("last digit of %d is %d and is greator than 5", n, m);
else if (n == 0)
printf("last digit of %d is %d and is 0", n, m);
else if (n < 6 && n != 0)
printf("last digit of %d is %d and is les than 6 and not 0", n, m);
printf("\n");

return (0);
}
