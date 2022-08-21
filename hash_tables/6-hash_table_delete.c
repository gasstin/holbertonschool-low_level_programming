#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that delete a hash table.
 * @ht: is the hash table.
 *
 * Return: Always void.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *p = NULL;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			free(p->key), free(p->value);
			free(p);
			p = p->next;
		}
		free(p);
	}
	free(ht->array);
	free(ht);
}
