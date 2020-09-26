/**
* main- void
* description: print #'s 00 to 99
* Return: 0
*/

#include <stdio.h>

int main(void)
{
int x, y;

for (x = '0'; x <= '9'; x++)
{
for (y = x + 1; y <= '9'; y++)
{
putchar(x);
putchar(y);
if (x == '8' && y == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
