#include "function_pointers.h"
#define NULL 0
/*#define NULL 0 tried defining in function_pointers.h instead*/
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
	if (name == NULL)
		return;
	if (f == NULL)
		return;

	f(name);
}
