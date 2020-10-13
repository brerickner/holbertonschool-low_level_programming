#include "holberton.h"
#include <stdio.h>

void _puts_recursion(char *s);

int main(void)
{
	_puts_recursion("Betty Holberton");
	return (0);
}

void _puts_recursion(char *s)
{
	int index;

	if(*s)
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}
	else
		_putchar('\n');
}
