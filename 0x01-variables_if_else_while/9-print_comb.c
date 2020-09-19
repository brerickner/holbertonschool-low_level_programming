/**
* main- void
* description: print out base 16
* Return: 0
*/

#include <stdio.h>

int main(void)
{
int x = '31';

for (; x <= '39'; x++)
{
putchar(' ');
putchar(x);
putchar(',');
}

putchar('\n');
return (0);
}
