#include "holberton.h"
#include <stdlib.h>

/**
 * *_realloc - void *ptr, unsigned int old_size, unsigned int new_size;
 * @ptr: pointer to the memory prev allocated
 * @old_size: number of bytes of allocated memory for pointer
 * @new_size: number of bytes for new memory block
 * description: function that reallocates a memory block using malloc and free
 * Return: pointer if new_size is old_size. Else if NULL when new_size ptr
 * not NULL. Else pointer to reallocate memory block
 * or malloc fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	(void)ptr;
	(void)old_size;
	(void)new_size;

	exit(1);
}
