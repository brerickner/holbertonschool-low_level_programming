#include "holberton.h"

/**
 * set_string - char **s, char *t0
 * @s: pointer to char who's value is being changed
 * @to: char that pointer will set value to
 * description: function that sets the value of a pointer to a char
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
