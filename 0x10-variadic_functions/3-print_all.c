#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print all
 * description: print
 * @format: format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list pizza_list;
	int index = 0;
	char *string = 0;

	va_start(pizza_list, format);

	while (format[index] != '\0')
	{
		switch(format[index])
		{
		case 'c':
			printf("%c", va_arg(pizza_list, int));
			break;
		case 'i':
			printf("%i", va_arg(pizza_list, int));
			break;
		case 'f':
			printf("%f", va_arg(pizza_list, double));
			break;
		case 's':
			printf("%s", va_arg(pizza_list, char *));
			if (string == NULL)
				printf("(nil)");
			break;
		default:
			break;
		}
		if (format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(pizza_list);
	return;
}
