#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dog_t *new_dog - char *name, float age, char *owner
 * @name: member pointer to type char
 * @age: member of type float
 * @owner: member pointer to type char
 * description: funtion that creates a new dog
 * Return: NULL upon failure. else 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	(void)name;
	(void)age;
	(void)owner;

	if (new_dog != NULL)
		return (0);
	else
		return (NULL);
}
