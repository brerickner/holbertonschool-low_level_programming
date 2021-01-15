#include "hash_tables.h"
/**
 * hash_table_delete - hash_table_t *ht
 * @ht: hash table
 * description: function that deletes a hash table.
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hashPass, *hold;
	unsigned int index;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (hashPass = ht->array[index]; hashPass; hashPass = hold)
		{
			hold = hashPass->next;
			free(hashPass->key);
			free(hashPass->value);
			free(hashPass);
		}
	}
	free(ht->array);
	free(ht);
}
