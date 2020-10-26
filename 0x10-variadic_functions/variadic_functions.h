#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct print_stuff
{
	char x;	void (*fun)();
} print_stuff;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void char_func(va_list args_list);
void string_func(va_list args_list);
void int_func(va_list args_list);
void string_func(va_list args_list);

#endif /* VARIADIC_FUNCTION_H */
