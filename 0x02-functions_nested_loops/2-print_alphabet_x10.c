#include "holberton.h"

/**
* print_alphabet_x10 - function to print lowercase alphabet 10 times
*
* Return: void
*/

void print_alphabet_x10(void)
{
char a;
int i;

for (i = '0'; i <= '9'; i++)
{
for (a = 'a'; a <= 'z'; a++)
_putchar(a);
_putchar('\n');
}
}
