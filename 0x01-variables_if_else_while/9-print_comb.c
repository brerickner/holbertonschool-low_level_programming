B/**
* main- void
* description: ascending single digits 0-9
* Return: 0
*/

#include <stdio.h>

int main(void)
{
int x = '0';

for (; x <= '9'; x++)
{
putchar(' ');
putchar(x);
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
