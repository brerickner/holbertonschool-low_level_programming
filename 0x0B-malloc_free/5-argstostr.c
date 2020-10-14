#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - int ac, char **av
 * @ac: # of arguments
 * @av: argument vector
 * description: function that concatenates all arguments of a program
 * Return: NULL if fails, ac is 0, av is NULL. Else pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *buffer;

	buffer = malloc(ac * sizeof(char));

	if (av == NULL || ac == 0)
	{
		return (NULL);
	}
	else
		return (buffer);
}
