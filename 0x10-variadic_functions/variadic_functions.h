#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_stuff - struct with char x and pointer function
 * @x: type x
 * @fun: pointer to func
 * description: struct that prints char x matching pointer function
 */
typedef struct print_stuff
{
	char x;
	void (*fun)();
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
