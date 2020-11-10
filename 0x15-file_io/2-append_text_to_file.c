#include "holberton.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * _strlen - char *s
 * @s: string that is being measured
 *
 * description: function that returns lenth of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount])
		charCount++;
	return (charCount);
}
/**
 * append_text_to_file - const char *filename, char *text_content
 * @filename: file to be created
 * @text_content: NULL terminated string to be printed
 * description: create a function that appends text at the end of a file
 * Return: 1 on success. Else -1 upon failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	(void)filename;
	(void)text_content;

	return (1);
}
