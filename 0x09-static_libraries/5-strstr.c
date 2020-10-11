#include "holberton.h"

/**
 * *_strstr - char *haystack, char *needle
 * @haystack: string searching through
 * @needle: substring being searched for
 * description: function that locates a substring
 * Return: pointer to beginning of the located substring. else NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
