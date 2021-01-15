#include "hash_tables.h"
/**
 * *hash_table_get - const hash_table_t *ht, const char *key
 * @ht: hash table to add or update key/value to
 * @key: key (cannot be empty str) used to calc index(e.g person)
 * description: function that retrieves a value associated with a key
 * Return: value associated with the element. Else Null if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hashPass = NULL;

	if (!ht || !key)
		return (NULL);
/* hashpass to find matching key and return the value at associated key */
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
	/* proceed to following node when match found */
		for (hashPass = ht->array[index]; hashPass; hashPass = hashPass->next)
		{
			if (strcmp(hashPass->key, key) == 0)	
				return (hashPass->value);
		}
	/* else key not found */
	return (NULL);
}
