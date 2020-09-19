/**
* main- void
* description: ascending single digits 0-9
* Return: 0
*/

#include <stdio.h>

int main(void)
{
int x = '0';

for (; x <= '8'; x++)
{
putchar(x);
putchar(',');
putchar(' ');
}
{
putchar('9');
putchar('\n');
}
return (0);
}
