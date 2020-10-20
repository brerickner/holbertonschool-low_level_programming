#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - struct dog *d
 * @d: variable of struct dog type
 * description: funtion that prints a struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		printf("(nil)\n");

	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);

}
