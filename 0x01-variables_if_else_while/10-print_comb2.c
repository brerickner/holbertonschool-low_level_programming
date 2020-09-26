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
for (y = '0'; y <= '9'; y++)
{
putchar(x);
putchar(y);
if (x == '9' && y == '9')
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
