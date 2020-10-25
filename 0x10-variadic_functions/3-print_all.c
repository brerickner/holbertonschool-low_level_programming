#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * char_func - prints char
 * Return: void
 */
void char_func(args_list)
{
	printf(%c, va_arg(args_list, char));
}

/**
 * float_func - prints float number
 * Return: void
 */
void float_func(args_list)
{
	printf(%f, va_arg(args_list, float));
}

/**
 * float_func - prints float number
 * Return: void
 */
void int_func(args_list)
{
	printf(%i, va_arg(args_list, int));
}
/**
 * string_func - prints float number
 * Return: void
 */
void string_func(args_list)
{
	char *string = va_arg(args_list, char *);
	if (!string)
	{
	string = "(nil)";
	}
	printf(%s, string));
}
/**
 * print_all - print all
 * description: print
 * @format: format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int inner = 0;
	av_list args_list;

	va_start(args_list, format);

	while (format[outer])
	{
		if (format[outer] == print_stuff[inner])
		{
			print_stuff[inner].fun(print_stuff);
			inner++;
		}
		outer++;
	}
	while (format[outer + 1] != '\0')
	{
		printf(", ");
		outer++;
	}

}
