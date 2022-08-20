#include "hash_tables.h"

/**
 * hash_table_create - Write a function that creates a hash table.
 *@size: is the size of the array.
 *
 * Return: A pointer to the newly created table, or NULL it fall.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	if (!size)
		return (NULL);
	/* first malloc the hash table */
	new_hash_table = malloc(sizeof(hash_table_t));
	if (!new_hash_table)
		return (NULL);
	/* then create the array       */
	new_hash_table->size = size;
	new_hash_table->array = malloc(size * sizeof(char *));
	if (!new_hash_table->array)
		return (NULL);

	return (new_hash_table);
}
