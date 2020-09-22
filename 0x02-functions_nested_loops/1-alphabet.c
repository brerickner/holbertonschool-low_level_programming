#include "holberton.h"

/**
* print_alphabet - function to print lowercase alphabet
*
* Return: void
*/

void print_alphabet(void)
{
int x = 'a';
int y = '\n';

for (; x <= 'z'; x++)

_putchar(x);

_putchar(y);
}
