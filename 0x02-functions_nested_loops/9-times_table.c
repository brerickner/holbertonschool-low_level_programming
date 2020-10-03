#include "holberton.h"

/**
* times_table - integer table
* description: integer table
*
* Return: 0
*/
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = (i * j);
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((n % 10) + '0');
			}
			else
				_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
