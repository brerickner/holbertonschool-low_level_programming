#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_strings - const char *separator, const unsigned int n, ...
 * @separator: comma and space
 * @n: number of arguments
 * description: function that prints strings, followed by a new line
 * return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list more_list;
	char *buffer;

	va_start(more_list, n);

	for (index = 0; index < n; index++)
	{
		buffer = va_arg(more_list, char*);

		if (!buffer)
			printf("(nil)");
		else if (separator && index != (n - 1))
			printf("%s%s", buffer, separator);
		else if (separator && index == (n - 1))
			printf("%s", buffer);
		else if (!separator)
			printf("%s", buffer);
	}
	va_end(more_list);
	printf("\n");
}
