#include "hash_tables.h"

/**
 * hash_table_set - Write a function that adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key.
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int hash_function = 0;
	char *dup_key = NULL, *dup_value = NULL;
	hash_node_t *new = NULL;

	if (!ht || !key || !value)
		return (0);
	/*duplico value*/
	dup_value = strdup(value);
	dup_key = strdup(key);
	/*uso hash function*/
	hash_function = key_index(key, ht->size);

	/*ubico el nuevo elemento*/
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = dup_key;
	new->value = dup_value;
	/*compruebo si ya hay otro elemento*/
	if (ht->array[hash_function])
	{
		new->next = ht->array[hash_function];
		ht->array[hash_function] = new;
	}
	else
		ht->array[hash_function] = new;
	/*apunto la hash table al nuevo elemento*/
	free(dup_value), free(dup_key);
	return (1);
}
