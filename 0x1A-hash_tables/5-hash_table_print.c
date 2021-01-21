#include "hash_tables.h"
/**
 * hash_table_print - const hash_table_t *ht
 * @ht: hash table
 * description: function that prints a hash table.
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hashPass;
	unsigned int index;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (hashPass = ht->array[index]; hashPass; hashPass = hashPass->next)
		{
			if (flag)
				printf(", ");
			printf("'%s' : '%s'", hashPass->key, hashPass->value);
			
		}
		flag++;
	}

	printf("}\n");
}
