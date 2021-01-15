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
	unsigned long int index;
	hash_node_t *newNode = NULL;

	/* make copy of value and then check for memory allocation */
	if (!value || !key || !ht || strcmp(key, "") == 0 || strlen(key) == 0)
		return (0);
	/* use hash function to get new key index*/
	index = key_index((unsigned char *)key, ht->size);
	/* go through adding or updating key/value pair in index location */
	for (; ht->array[index]; index++)
	{
	/* if keys match get rid of what's in there and replace with new Value */
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			if (!ht->array[index]->value)
				return (0);
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	/* else create newNode to start storing key/value pairs */
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->next = ht->array[index];
	newNode->key = strdup(key);
	if (!newNode->key)
		return (0);
	newNode->value = strdup(value);
	if (!newNode->value)
		return (0);
	ht->array[index] = newNode;
	return (1);
}
