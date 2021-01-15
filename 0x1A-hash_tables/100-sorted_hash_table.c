#include "hash_tables.h"
/**
 * *shash_table_create - unsigned long int size
 * @size: size of the array in shash table
 * description: funtion that creates a shash table
 * Return: pointer to newly created shash table. Else NULL
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newShash = NULL;
	unsigned long int index;

	newShash = malloc(sizeof(shash_table_t));
	if (!newShash)
	{
		return (NULL);
	}
	newShash->size = size;
	newShash->shead = NULL;
	newShash->stail = NULL;
	newShash->array = malloc(sizeof(shash_node_t *) * size);
	if (!newShash->array)
	{
		free(newShash);
		return (NULL);
	}
	/* make all entries empty by setting each pointer to point to NULL */
	for (index = 0; index < size; newShash->array[index] = NULL, index++)
		;
	return (newShash);

}
