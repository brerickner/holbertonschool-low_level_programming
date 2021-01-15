#include "hash_tables.h"
/**
 * hash_table_set - hash_table_t *ht, const char *key, const char *value
 * @ht: hash table to add or update key/value to
 * @key: key (cannot be empty str) used to calc index(e.g person)
 * @value: value associated with the key(e.g dob)
 * description: funtion that adds an element to hash table
 * in case of collision, new node is added at the beginning of the list
 * Return: 1 is successful. Else 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* cast unsigned char ptr to pass in to key_index function */
	unsigned long int keyIndex, index;
	char *cpyValue = strdup(value), *cpyKey = strdup(key);
	hash_node_t *newNode = NULL;

	/* make copy of value and then check for memory allocation */
	if (!cpyValue || !cpyKey || !key || !strlen(key) || !ht || !value)
		return (0);

	/* use hash function to get new key index*/
	keyIndex = index = key_index((unsigned char *)key, ht->size);
	/* go through adding or updating key/value pair in keyIndex location */
	for (; ht->array[index]; index++)
	{
	/* if keys match get rid of what's in there and replace with new Value */
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = cpyValue;
			return (1);
		}
	}
	/* else create newNode to start storing key/value pairs */
	newNode = malloc(sizeof(hash_node_t));

	if (!newNode)
	{
		free(cpyValue);
		free(cpyKey);
		return (0);
	}

	newNode->next = NULL;
	newNode->key = cpyKey;
	newNode->value = cpyValue;
	ht->array[keyIndex] = newNode;

	return (1);
}
