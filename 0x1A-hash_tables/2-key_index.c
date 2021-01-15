#include "hash_tables.h"
/**
 * key_index - const unsigned char *key, unsigned long int size
 * @key: key
 * @size: size of the array of the hash table
 * description: funtion that gives you the index of a key.
 * Return: index at which the key/value pair should be
 * stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
