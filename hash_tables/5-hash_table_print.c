#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table.
 * @ht: is the hash table.

 * Return: Always void.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *p;
	char n;

	printf("{");
	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			p = ht->array[i];
			n = 0;
			while (p)
			{
				if (n)
					printf(", ");
				printf("'%s': '%s'", p->key, p->value);
				p = p-> next;
				n = 1;
			}
		}
	}
		printf("}\n");
}
