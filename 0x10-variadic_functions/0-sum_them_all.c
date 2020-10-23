#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/*
 * sum_them_all- const unsigned int n, ...
 * @n: number of
 * description: function that adds arguments
 * return: sum if not 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned index = 0, sum = 0;
	va_list sum_list;

	if (n == 0)
		return (0);
	va_start(sum_list, n);
	for (index = 0; index < n; index++)
		sum += va_arg(sum_list, int);
	va_end(sum_list);
	return (sum);
}
