#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int test;

    ht = hash_table_create(1024);
    test = hash_table_set(ht, "betty", "holberton");
    printf("%i\n", test);
    test = hash_table_set(ht, "austin", "rickner");
    printf("%i\n", test);
    test = hash_table_set(ht, "test", "test");
    printf("%i\n", test);
    test = hash_table_set(ht, "hi", "there");
    printf("%i\n", test);
    test = hash_table_set(ht, "bre", "rickner");
    printf("%i\n", test);
    test = hash_table_set(ht, "dram", "vivency");
    printf("%i\n", test);

    return (EXIT_SUCCESS);
}
