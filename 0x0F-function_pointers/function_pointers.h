#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
struct size_t size
{
	int elem;
};
/*   int int_index(int *array, int size, int (*cmp)(int)); */

#endif /*__FUNCTION_POINTERS_H__*/
