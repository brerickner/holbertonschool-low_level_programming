#include "holberton.h"

/**
 * wildcmp - char *s1, char *s2
 * description: function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if it does stuff, 0
 */

int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (1);
	else
		return (0);
}
