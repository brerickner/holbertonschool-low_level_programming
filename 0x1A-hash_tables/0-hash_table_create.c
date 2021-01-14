#include "hash_tables.h"
/**
 * *hash_table_create - unsigned long int size
 * @size: size of the array in hash table
 * description: funtion that creates a hash table
 * Return: pointer to newly created hash table. Else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index;
	hash_table_t *newHash = NULL;

	newHash = malloc(sizeof(hash_table_t));
	if (!newHash)
	{
		return (NULL);
	}
	newHash->size = size;
	newHash->array = malloc(sizeof(hash_node_t *) * size);
	if (!newHash->array)
	{
		free(newHash);
		return (NULL);
	}
	/* make all entries empty by setting each pointer to point to NULL */
	for (index = 0; index < size; newHash->array[index] = NULL, index++)
		;
	return (newHash);
}
