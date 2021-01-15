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
	unsigned long int keyIndex;
	char *cpyValue = strdup(value), *cpyKey = strdup(key); 
	hash_node_t *newNode = NULL;
	
	/* make copy of value and then check for memory allocation */
	if (!cpyValue || !key || !strlen(key) || !ht || !value || !cpyValue || !cpyKey)
	{
		return (0);
	}
	/* get index using typecasted key and create new Index*/
	keyIndex = key_index((unsigned char *)key, ht->size);
	/* when there is not a key/value pair in location */
	if (!ht->array[keyIndex])
	{
		newNode = malloc(sizeof(hash_node_t));
		if (!newNode)
			return (0);
		ht->array[keyIndex] = newNode;
		newNode->next = NULL;
		newNode->key = cpyKey;
		newNode->value = cpyValue;
		return (1);

	}
	printf("size: %lu ---- key: %lu --- value: %c\n", ht->size,  keyIndex, *cpyValue);


	return (1);
}