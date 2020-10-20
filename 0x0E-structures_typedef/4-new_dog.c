#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - char *s
 * @s: string that is being measured
 * description: function that returns lenth of string
 * Return: length of string
 */
int _strlen(char *s)
{
	int charCount = 0;

	while (s[charCount] != '\0')
	{
		charCount++;

	}

	return (charCount);
}
/**
 * *_strcpy - char *dest, char *src
 * @dest: buffer
 * @src: string being copied
 * description: copies what src points
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	int ninja;

	for (ninja = 0; src[ninja] != '\0'; ++ninja)
	{
		dest[ninja] = src[ninja];
	}
	dest[ninja] = '\0';
	return (dest);
}
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
	dog_t *New_dog;

	if (age < 0)
		return (NULL);

	New_dog = malloc(sizeof(dog_t));
	if (New_dog == NULL)
		return (NULL);

	New_dog->name = malloc(_strlen(name) * sizeof(char));
	if (New_dog->name == NULL)
		free(New_dog)
		return (NULL);

	New_dog->age = age;

	New_dog->owner = malloc(_strlen(owner))
	if (New_dog->owner == NULL)
		free(New_dog);
		return (NULL);

	New_dog->name = _strcpy(New_dog->name, name);
	New_dog->owner = _strcpy(New_dog->owner, owner);

	return (New_dog);
}
