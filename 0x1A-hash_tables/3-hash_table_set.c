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
	hash_node_t *hashPass, *newNode = NULL;

	if (!ht || !key || !value)
		return (0);
	/* use hash function to get new key index*/
	index = key_index((unsigned char *)key, ht->size);
	/* go through adding or updating key/value pair in index location */
	for (hashPass = ht->array[index]; hashPass; hashPass = hashPass->next)
	{
	/* if keys match get rid of what's in there and replace with new Value */
		if (strcmp(hashPass->key, key) == 0 && strcmp(hashPass->value, value) != 0)
		{
			free(hashPass->value);
			hashPass->value = strdup(value);
			if (!hashPass->value)
				return (0);
			return (1);
		}
		/*ht->array[index]->next = ht->array[index]->next->next;*/
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
