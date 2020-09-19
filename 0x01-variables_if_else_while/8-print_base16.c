/**
 * main- void
 * description: print out base 16
 * Return: 0
 */

#include <stdio.h>

int main(void)
{
char x = '0';
char y = 'a';

for (; x <= '9'; x++)
putchar (x);

for (; y <= 'f'; y++)
{
putchar(y);
}

putchar('\n');
return (0);
}
