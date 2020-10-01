#include "holberton.h"

/**
 * _strcmp - char *s1, char *s2
 * @s1: string one
 * @s2: string two
 * description: function that compares two strings
 * Return: 0 if strings are the same. Print difference if not.
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
