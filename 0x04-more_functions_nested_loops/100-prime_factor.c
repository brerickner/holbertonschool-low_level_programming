#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
* main - void
* description: find & print the largest prime # of orig \n
*
* Return: 0
*/

int main(void)
{
long int prime1, orig,  prime2;

orig = 612852475143;

for (prime1 = 1; prime1 <= orig; prime1++)
{
if (orig % prime1 == 0)
{
if (orig == prime1)
{
printf("%ld\n", prime1);
break;
}
prime2 = orig / prime1;
orig = prime2;
prime1 = 1;
}
}
return (0);
}
