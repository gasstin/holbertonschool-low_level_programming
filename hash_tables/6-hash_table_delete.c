#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that delete a hash table.
 *@ht: is the size of the array.
 *
 * Return: A pointer to the newly created table, or NULL it fall.
 */

void hash_table_delete(hash_table_t *ht)
{

	if (ht)
	{
		while(ht->array)
		{
		free(ht->array);
		ht = ht->array;
		}
		free(ht);
	}
}
