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
	unsigned long int keyIndex;
	unsigned const char *cpyValue = NULL, *idxKey = key;
	hash_node_t *addNode;
	
	/* make copy of value and then check for memory allocation */
	cpyValue = strdup(value);
	if (!cpyValue || !key || strcmp(key, "") == "\0" || !ht || !value || !cpyValue)
	{
		return (0);
	}
	/* get index by passing in */
	keyIndex = key_index(idxKey, ht->size);
	/* go through linked list looking for matching keys */
	print("%c",*value)

	return (1);
}