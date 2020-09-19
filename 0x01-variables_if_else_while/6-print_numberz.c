/**
 * main- void
 * description: print single digit base 10 no char type
 * Return: 0
 */

#include <stdio.h>
int main(void)
{
int x;
for (x = '0'; x <= '9'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
