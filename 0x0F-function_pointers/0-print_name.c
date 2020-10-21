#include "function_pointers.h"
/**
 * print_name -char *name, void (*f)(char *)
 * @name: pointer to type char
 * @f: pointer to function that takes pointer to char as parameter and returns
 * nothing
 * description: function that prints a name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
