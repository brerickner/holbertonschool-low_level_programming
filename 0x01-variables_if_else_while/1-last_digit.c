/**
* main- void
* description: assign random number based on last digit
* Return: 0
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digit of %d is %10d and is greater than 5\n", n);
}
if else(n % 10 < 6 && !(0))
{
printf("Last digit of %d is %10d and is less than 6 and not 0\n", n);
}
else
{
printf("Last digit of %d is %10d and is 0\n", n);
}
return (0);
}
