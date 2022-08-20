#include "hash_tables.h"

/**
 * hash_table_get - Write a function that retrieves
 * a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_function = 0;

	if (!ht || !key)
		return (NULL);
	hash_function = key_index(key, ht->size);
	if (ht->array[hash_function]) /*si existe una lista*/
	{
		if (!strcmp(ht->array[hash_function]->key, key))
			/*if find the key*/
			return (ht->array[hash_function]->value);
		else /*if not find the key*/
			return (NULL);
	}
	return (NULL);
}
