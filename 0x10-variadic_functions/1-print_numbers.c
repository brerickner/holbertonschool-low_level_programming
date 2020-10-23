#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
 * void print_numbers - const char *separator, const unsigned int n, ...
 * @separator: comma and space
 * @n: number of arguments
 * description: function that prints numbers, followed by a new line
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned index = 0;
	va_list num_list;

	va_start (num_list, n);

	for (index = 0; index < n; index++)
	{
		if (separator != NULL && index != (n-1))
			printf ("%i%s", va_arg(num_list, int), separator);
		else
			printf ("%i", va_arg(num_list, int));
	}
	printf ("\n");
	va_end (num_list);
	return;
}
