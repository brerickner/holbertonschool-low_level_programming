/**
* main- void
* description: ascending single digits 0-9
* Return: 0
*/

#include <stdio.h>

int main(void)
{
int x;

for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
if (x == 9)
continue;
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
