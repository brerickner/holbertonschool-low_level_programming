#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void char_func(args_list);
void string_func(args_list);
void int_func(args_list);
void string_func(args_list);

/**
 * struct print_stuff - struct type that takes char and *eat() as args
 */
struct print_stuff[] = {
{'c', char_func}
{'f', float_func}
{'i', int_func}
{'s', string_func}
{NULL, NULL}
}; int outer = 0; /* take out 0 if messing up */

typedef struct print_stuff{
	char type_c;
	void(*fun)();
}
#endif /* VARIADIC_FUNCTION_H */
