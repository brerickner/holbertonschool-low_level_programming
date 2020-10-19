#include "dog.h"

/**
 * init_dog - struct dog *d, char *name, float age, char *owner
 * @d: variable of struct dog type
 * @name: pointer to member name of type char
 * @age: member age of type float
 * @owner: pointer to member owner of type char
 * description: function that initializes variable of type struct dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *doggy;

	doggy = d;
	{
		doggy->name = name;
		doggy->age = age;
		doggy->owner = owner;
		d = doggy;
	}
}
