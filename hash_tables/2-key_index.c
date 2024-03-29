#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 * @size: is the size of the array.
 * @key: is the key.
 *
 * Return: the index at which the key/value pair should be
 * stored in the array of the hash table
 */

unsigned long int key_index(const char *key, unsigned long int size)
{
	unsigned long int result = 0;

	result = hash_djb2(key);
	return (result % size);
}
